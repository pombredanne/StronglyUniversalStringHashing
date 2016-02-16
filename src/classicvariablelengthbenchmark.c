/////////////////////////////////////
// This C code is a companion to the paper
//
/////////////////////////////////////

//
// this code will hash strings of 64-bit characters. To use on
// strings of 8-bit characters, you may need some adequate padding.
//
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <assert.h>

#ifdef __AVX__
#define __PCLMUL__ 1
#endif

// we estimate the overhead of calling a function to about 40 cycles.
uint32_t global_rdtsc_overhead = (uint32_t)40;

#define RDTSC_START(cycles)                                                   \
    do {                                                                      \
        register unsigned cyc_high, cyc_low;                                  \
        __asm volatile(                                                       \
            "cpuid\n\t"                                                       \
            "rdtsc\n\t"                                                       \
            "mov %%edx, %0\n\t"                                               \
            "mov %%eax, %1\n\t"                                               \
            : "=r"(cyc_high), "=r"(cyc_low)::"%rax", "%rbx", "%rcx", "%rdx"); \
        (cycles) = ((uint64_t)cyc_high << 32) | cyc_low;                      \
    } while (0)

#define RDTSC_FINAL(cycles)                                                   \
    do {                                                                      \
        register unsigned cyc_high, cyc_low;                                  \
        __asm volatile(                                                       \
            "rdtscp\n\t"                                                      \
            "mov %%edx, %0\n\t"                                               \
            "mov %%eax, %1\n\t"                                               \
            "cpuid\n\t"                                                       \
            : "=r"(cyc_high), "=r"(cyc_low)::"%rax", "%rbx", "%rcx", "%rdx"); \
        (cycles) = ((uint64_t)cyc_high << 32) | cyc_low;                      \
    } while (0)




/*
 * Prints the best number of operations per cycle where
 * test is the function call, answer is the expected answer generated by
 * test, repeat is the number of times we should repeat and size is the
 * number of operations represented by test.
 */
#define BEST_TIME(test, answer, repeat, size)                         \
    do {                                                              \
        fflush(NULL);                                                 \
        uint64_t cycles_start, cycles_final, cycles_diff;             \
        uint64_t min_diff = (uint64_t)-1;                             \
        int wrong_answer = 0;                                         \
        for (int i = 0; i < repeat; i++) {                            \
            __asm volatile("" ::: /* pretend to clobber */ "memory"); \
            RDTSC_START(cycles_start);                                \
            if (test != answer) wrong_answer = 1;                     \
            RDTSC_FINAL(cycles_final);                                \
            cycles_diff = (cycles_final - cycles_start);              \
            if (cycles_diff <= global_rdtsc_overhead) cycles_diff = 0;		\
            else cycles_diff = cycles_diff - global_rdtsc_overhead;			\
            if (cycles_diff < min_diff) min_diff = cycles_diff;       \
        }                                                             \
        uint64_t S = size;                                            \
        float cycle_per_op = (min_diff) / (double)S;                  \
        printf(" %.2f ", cycle_per_op);           \
        if (wrong_answer) printf(" [ERROR]");                         \
        fflush(NULL);                                                 \
    } while (0)



typedef unsigned long long ticks;

// Taken from stackoverflow (see http://stackoverflow.com/questions/3830883/cpu-cycle-count-based-profiling-in-c-c-linux-x86-64)
// Can give nonsensical results on multi-core AMD processors.
ticks rdtsc() {
    unsigned int lo, hi;
    asm volatile (
        "cpuid \n" /* serializing */
        "rdtsc"
        : "=a"(lo), "=d"(hi) /* outputs */
        : "a"(0) /* inputs */
        : "%ebx", "%ecx");
    /* clobbers*/
    return ((unsigned long long) lo) | (((unsigned long long) hi) << 32);
}

ticks startRDTSC(void) {
    return rdtsc();
}

ticks stopRDTSCP(void) {
    return rdtsc();
}
// start and stop are as recommended by
// Gabriele Paoloni, How to Benchmark Code Execution Times on Intel® IA-32 and IA-64 Instruction Set Architectures
// September 2010
// http://edc.intel.com/Link.aspx?id=3954

/*static __inline__ ticks fancystartRDTSC(void) {
 unsigned cycles_low, cycles_high;
 asm volatile ("CPUID\n\t"
 "RDTSC\n\t"
 "mov %%edx, %0\n\t"
 "mov %%eax, %1\n\t": "=r" (cycles_high), "=r" (cycles_low)::
 "%rax", "%rbx", "%rcx", "%rdx");
 return ((ticks) cycles_high << 32) | cycles_low;
 }

 static __inline__ ticks fancystopRDTSCP(void) {
 unsigned cycles_low, cycles_high;
 /// This should work fine on most machines, if the RDTSCP thing
 /// fails for you, use the  rdtsc() call instead.
 asm volatile("RDTSCP\n\t"
 "mov %%edx, %0\n\t"
 "mov %%eax, %1\n\t"
 "CPUID\n\t": "=r" (cycles_high), "=r" (cycles_low):: "%rax",
 "%rbx", "%rcx", "%rdx");
 return ((ticks) cycles_high << 32) | cycles_low;
 }*/

#include "hashfunctions32bits.h"
#include "hashfunctions64bits.h"

#include "clmulhashfunctions32bits.h"
#include "clmulhashfunctions64bits.h"
#include "clmulpoly64bits.h"
#include "clmulhierarchical64bits.h"
#include "ghash.h"

#define HowManyFunctions64 5

hashFunction64 funcArr64[HowManyFunctions64] = { &hashVHASH64, &CLHASH,
                                                 &hashCity, &hashSipHash,&GHASH64bit
                                               };

const char* functionnames64[HowManyFunctions64] = { "64-bit VHASH        ",
                                                    "64-bit CLHASH       ", "Google's City       ", "SipHash             ","GHASH          "

                                                  };

int main(int c, char ** arg) {
    (void) (c);
    (void) (arg);
    const int N = 2048; // should be divisible by two!
    int which_algos = 0xffffffff;
    assert(HowManyFunctions64 <= 32);
    if (c > 1)
        which_algos = atoi(arg[1]);  // bitmask
    int lengthStart = 1, lengthEnd = N; // inclusive
    if (c > 2)
        lengthStart = atoi(arg[2]);
    if (c > 3)
        lengthEnd = atoi(arg[3]);
    assert((lengthEnd & 1) == 0);

    int i, j;
    int length;
    int SHORTTRIALS;
    ticks bef, aft;
    struct timeval start, finish;
    uint64_t randbuffer[150] __attribute__ ((aligned (16)));// 150 should be plenty
    uint32_t sumToFoolCompiler = 0;
    uint64_t * intstring = malloc(N * sizeof(uint64_t)); // // could force 16-byte alignment with  __attribute__ ((aligned (16)));
    for (i = 0; i < 150; ++i) {
        randbuffer[i] = rand() | ((uint64_t)(rand()) << 32);
    }
    for (i = 0; i < N; ++i) {
        intstring[i] = rand() | ((uint64_t)(rand()) << 32);
    }
    printf("#Reporting the number of cycles per byte.\n");
    printf("#First number is input length in  8-byte words.\n");
    printf("#We repeat number twice, first time we compute the min.\n"); 
    printf("#  assuming %d cycles overhead per func. call, next we\n", global_rdtsc_overhead);
    printf("# average over many runs.\n");
 
    printf("#          ");
    for (i = 0; i < HowManyFunctions64; ++i) {
        if (which_algos & (0x1 << i))
            printf("%s ", functionnames64[i]);
    }
    printf("\n");
    fflush(stdout);
    for (length = lengthStart; length <= lengthEnd; length += 1) {
        SHORTTRIALS = 40000000 / length;
        printf("%8d \t\t", length);
        hashFunction64 thisfunc64;
        for (i = 0; i < HowManyFunctions64; ++i) {
            if (!(which_algos & (0x1 << i)))
                continue;  // skip unselected algos
            thisfunc64 = funcArr64[i];
            uint64_t correct = thisfunc64(randbuffer, intstring, length);
            BEST_TIME(thisfunc64(randbuffer, intstring, length), correct, SHORTTRIALS, length * sizeof(uint64_t)) ;

        }
        printf("%8d \t\t", length);
        for (i = 0; i < HowManyFunctions64; ++i) {
            if (!(which_algos & (0x1 << i)))
                continue;  // skip unselected algos
            thisfunc64 = funcArr64[i];
            sumToFoolCompiler += thisfunc64(randbuffer, intstring, length); // we do not count the first one
            gettimeofday(&start, 0);
            bef = startRDTSC();
            for (j = 0; j < SHORTTRIALS; ++j) {
                sumToFoolCompiler += thisfunc64(randbuffer, intstring, length);
            }
            aft = stopRDTSCP();
            gettimeofday(&finish, 0);
            printf(" %f ", (aft - bef) * 1.0 / (8.0 * SHORTTRIALS * length));
        }
        printf("\n");
    }
    free(intstring);
    printf("# ignore this #%d\n", sumToFoolCompiler);

}


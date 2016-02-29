/* -------------------------------------------------------------------------------
 * Copyright (c) 2014, Dmytro Ivanchykhin, Sergey Ignatchenko, Daniel Lemire
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * -------------------------------------------------------------------------------
 *
 * PMP+-Multilinear hash family implementation
 *
 * v.1.00    Apr-14-2014    Initial release
 *
 * -------------------------------------------------------------------------------*/

// PMP_Multilinear_64.cpp: coefficients for an instance of a 64-bit hash function of PMP+-Multilinear hash family

const char* __MULTILINEARPRIMESTRINGHASHFUNCTOR_CPP_64__REVISION_() {
    return "$Rev: 436 $";   // for automated version information update; could be removed, if not desired
}

#include "PMP_Multilinear_common.h"


const random_data_for_PMPML_64 rd_for_PMPML_64[ PMPML_LEVELS_64 ] =
{
#if ( PMPML_LEVELS_64 > 0 )
    // Level 0
    {
        UINT64_C( 0x4a29bfabe82f3abe ),
        UINT64_C( 0x2ccb0e578cfa99b ), UINT64_C( 0x000000041 ), 0, // sum of coeff and dummy
        {
#if ( PMPML_CHUNK_SIZE_64 > 0 )
            UINT64_C( 0x2f129e0f017dff36 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 0 )
#if ( PMPML_CHUNK_SIZE_64 > 1 )
            UINT64_C( 0xb42c52ed219ac8ce ),
#endif // ( PMPML_CHUNK_SIZE_64 > 1 )
#if ( PMPML_CHUNK_SIZE_64 > 2 )
            UINT64_C( 0xd3324e2b5efdfa21 ),
            UINT64_C( 0xc830746c5019f1de ),
#endif // ( PMPML_CHUNK_SIZE_64 > 2 )
#if ( PMPML_CHUNK_SIZE_64 > 4 )
            UINT64_C( 0x57b1306026904f72 ),
            UINT64_C( 0xec3ffd84539cf3d ),
            UINT64_C( 0x95664d4564b54986 ),
            UINT64_C( 0xe0ee74349c002680 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 4 )
#if ( PMPML_CHUNK_SIZE_64 > 8 )
            UINT64_C( 0x5a365b98971ff939 ),
            UINT64_C( 0xf6bcac95513c540e ),
            UINT64_C( 0x49567d345ab6b3cf ),
            UINT64_C( 0x526ab3f6dee0def3 ),
            UINT64_C( 0x1d6fb9cf7dc2f089 ),
            UINT64_C( 0xaeff1dbeb93f0749 ),
            UINT64_C( 0xd4e05404a7eecac8 ),
            UINT64_C( 0x5175e11e90cf1a69 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 8 )
#if ( PMPML_CHUNK_SIZE_64 > 16 )
            UINT64_C( 0x29aac3810d90cf44 ),
            UINT64_C( 0xe9930a671d8aab37 ),
            UINT64_C( 0xeded5ac8eeb924 ),
            UINT64_C( 0xdb4820639e005b34 ),
            UINT64_C( 0x12debc35a3054ea7 ),
            UINT64_C( 0x5a9dccd55b94986f ),
            UINT64_C( 0x666773be4be48027 ),
            UINT64_C( 0xf9a45b94c9c5ce42 ),
            UINT64_C( 0xf3f018ccd958cf92 ),
            UINT64_C( 0x473c23beeb584939 ),
            UINT64_C( 0xc5e4f821ec00cd5b ),
            UINT64_C( 0x1d61cf5079c28b1c ),
            UINT64_C( 0xf46643c7b0c9427b ),
            UINT64_C( 0x34d7177b30a2a078 ),
            UINT64_C( 0x5279d153b2ab790a ),
            UINT64_C( 0xeaf18c48a1791f4c ),
#endif // ( PMPML_CHUNK_SIZE_64 > 16 )
#if ( PMPML_CHUNK_SIZE_64 > 32 )
            UINT64_C( 0x90a13cb0c7ccb5b1 ),
            UINT64_C( 0x2900f5242f23c3e6 ),
            UINT64_C( 0x975f1f8a1f6800f ),
            UINT64_C( 0xa53f1a9605cce7f2 ),
            UINT64_C( 0xb396087cda51e60 ),
            UINT64_C( 0x842e287b1fc29d36 ),
            UINT64_C( 0x4556b0258878e52d ),
            UINT64_C( 0x546c60312887a3f0 ),
            UINT64_C( 0xdc13b1bb35399672 ),
            UINT64_C( 0x32f18c1aa7a4697c ),
            UINT64_C( 0xc9223ebe2ebe5810 ),
            UINT64_C( 0xeb845691d3f028e8 ),
            UINT64_C( 0xa21337280cc34732 ),
            UINT64_C( 0x94d78e46776a29e2 ),
            UINT64_C( 0x6cba9535a7c4c9a8 ),
            UINT64_C( 0x9758fe18e1fb3d08 ),
            UINT64_C( 0x92478227db728e63 ),
            UINT64_C( 0xa782477118744c90 ),
            UINT64_C( 0xb1e0b74044f53769 ),
            UINT64_C( 0x7b3a58b416f2474f ),
            UINT64_C( 0xea041c911fc2991f ),
            UINT64_C( 0x4515562dfb118051 ),
            UINT64_C( 0x36133ab6715ff0bd ),
            UINT64_C( 0xb0d107f4c74bcfc7 ),
            UINT64_C( 0xef47885bb62db5b8 ),
            UINT64_C( 0xb2060330e33f5951 ),
            UINT64_C( 0x96758e992ce56ba6 ),
            UINT64_C( 0xe6ca7568b7f6a8ec ),
            UINT64_C( 0xd6fd9b1a7b29fb71 ),
            UINT64_C( 0x2e95d6aaa1593907 ),
            UINT64_C( 0xf1abe303bdda6758 ),
            UINT64_C( 0x1eb12f0ed0f91332 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 32 )
#if ( PMPML_CHUNK_SIZE_64 > 64 )
            UINT64_C( 0xf593589b9ff39cbb ),
            UINT64_C( 0x110e67013362cf26 ),
            UINT64_C( 0x671ca6801c7f9d57 ),
            UINT64_C( 0xaa55c338ed83b64 ),
            UINT64_C( 0x627d00690f3f465d ),
            UINT64_C( 0xff97bfbba48e8524 ),
            UINT64_C( 0x9c3f5a0387919b50 ),
            UINT64_C( 0x25f1e1efb7f91c48 ),
            UINT64_C( 0x7114cada956a53ae ),
            UINT64_C( 0x626a4e2ff89c39af ),
            UINT64_C( 0x86540186b2e391cc ),
            UINT64_C( 0x82d5f935e9a90bcd ),
            UINT64_C( 0xe2d4d3059b6f5dc1 ),
            UINT64_C( 0xbb3cc83e6478dd2e ),
            UINT64_C( 0x59b9b400b166ed62 ),
            UINT64_C( 0xf04b9b209bb113b1 ),
            UINT64_C( 0xb27be3c3397ac130 ),
            UINT64_C( 0xf619002cc54ac417 ),
            UINT64_C( 0x46a8c23f12907210 ),
            UINT64_C( 0x54fc42e7d99aa54f ),
            UINT64_C( 0x2b264e8ea68323e7 ),
            UINT64_C( 0xe0b0f627257dfb9 ),
            UINT64_C( 0xadc098de597949e8 ),
            UINT64_C( 0xe2ba17b10bd5401a ),
            UINT64_C( 0x7fa49be97f34ca1a ),
            UINT64_C( 0x8817b0a7e7d981cf ),
            UINT64_C( 0x3bede65042860a1f ),
            UINT64_C( 0xae569b2aafd241eb ),
            UINT64_C( 0x5f1cc5a3059aa744 ),
            UINT64_C( 0x762409219323dae9 ),
            UINT64_C( 0x64d5aac875461b4e ),
            UINT64_C( 0x62147c9101655025 ),
            UINT64_C( 0xbde2c420826c8ddd ),
            UINT64_C( 0xde6d7e2be12d0797 ),
            UINT64_C( 0x8338ac734c823357 ),
            UINT64_C( 0x419b2aa58f1b985a ),
            UINT64_C( 0x39ed88775355ae2d ),
            UINT64_C( 0x7a2e8cc72c7f3bce ),
            UINT64_C( 0x97935746814fa944 ),
            UINT64_C( 0x828331abf2018ef4 ),
            UINT64_C( 0xd6b9060cd1d0ba56 ),
            UINT64_C( 0x5548e64ac7626ff2 ),
            UINT64_C( 0xe4635461f9175d23 ),
            UINT64_C( 0x566d5d69d40cd206 ),
            UINT64_C( 0x65ffaf0c83ae838f ),
            UINT64_C( 0x5a585c800a52de9e ),
            UINT64_C( 0x64a121bc55d0b7a2 ),
            UINT64_C( 0x661ef9d5b90d6e53 ),
            UINT64_C( 0xb298bfcff8afba20 ),
            UINT64_C( 0x2a60665850d1a5e8 ),
            UINT64_C( 0x61aba7a90d9ae6eb ),
            UINT64_C( 0x83667e22ffdf423 ),
            UINT64_C( 0xd5efe61f9bd9a79c ),
            UINT64_C( 0x582a3cf851cafad0 ),
            UINT64_C( 0x1989365a301ef819 ),
            UINT64_C( 0xe2778e8aee7b917e ),
            UINT64_C( 0x4bd139ea2fc74066 ),
            UINT64_C( 0x2716bfaa4b18912a ),
            UINT64_C( 0x1a477a7687dbbe34 ),
            UINT64_C( 0x90127b1d8835c6e1 ),
            UINT64_C( 0x44651dc23bfac77d ),
            UINT64_C( 0xb030740966562609 ),
            UINT64_C( 0xb295d4733127a190 ),
            UINT64_C( 0xf022c66dc7b74382 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 64 )
#if ( PMPML_CHUNK_SIZE_64 > 128 )
#error VALUES NOT GENERATED for PMPML_CHUNK_SIZE_64 > 128
#endif // ( PMPML_CHUNK_SIZE_64 > 128 )

        },
    },
#endif // ( PMPML_LEVELS_64 > 0 )

#if ( PMPML_LEVELS_64 > 1 )
    // Level 1
    {
        UINT64_C( 0x39cd7650ff4f752a ),
        UINT64_C( 0xe9b49347770073e9 ), UINT64_C( 0x00000003f ), 0, // sum of coeff and dummy
        {
#if ( PMPML_CHUNK_SIZE_64 > 0 )
            UINT64_C( 0x6a22166c40f87e99 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 0 )
#if ( PMPML_CHUNK_SIZE_64 > 1 )
            UINT64_C( 0xff7e13387c337404 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 1 )
#if ( PMPML_CHUNK_SIZE_64 > 2 )
            UINT64_C( 0xd15f0f4dd5de05be ),
            UINT64_C( 0x825bb897d6ad1ef4 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 2 )
#if ( PMPML_CHUNK_SIZE_64 > 4 )
            UINT64_C( 0x77b045691a63a8ec ),
            UINT64_C( 0xa49df4370eb4048 ),
            UINT64_C( 0xf6c80d9827e7043b ),
            UINT64_C( 0x1628979784f8c50d ),
#endif // ( PMPML_CHUNK_SIZE_64 > 4 )
#if ( PMPML_CHUNK_SIZE_64 > 8 )
            UINT64_C( 0xd1a3e1f52402e01b ),
            UINT64_C( 0x6cfa2849efd5bc7f ),
            UINT64_C( 0xc6416ba240b063ec ),
            UINT64_C( 0x772d9ac4e43b2707 ),
            UINT64_C( 0x8cc9c4735bea20c5 ),
            UINT64_C( 0xede4a423d10791b3 ),
            UINT64_C( 0xc75eb6c16dbb96eb ),
            UINT64_C( 0x2df99f5f3ac91794 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 8 )
#if ( PMPML_CHUNK_SIZE_64 > 16 )
            UINT64_C( 0x31be65ba10763ed5 ),
            UINT64_C( 0xe89ce26b47440bc2 ),
            UINT64_C( 0xe537526e59ddafdf ),
            UINT64_C( 0x16ae378ed0ef349c ),
            UINT64_C( 0x747c11f0403b290e ),
            UINT64_C( 0xc1ada5226937ff10 ),
            UINT64_C( 0x91886c173226bd6f ),
            UINT64_C( 0x7e0002e3c3aaeee3 ),
            UINT64_C( 0x65c329b5ce3ffac3 ),
            UINT64_C( 0xd01f1343a37cc2f7 ),
            UINT64_C( 0x366e7896927020e8 ),
            UINT64_C( 0x84327c9993246a19 ),
            UINT64_C( 0x2c08dcf57f5487d1 ),
            UINT64_C( 0x9981f7143c3f09bf ),
            UINT64_C( 0xe413c704e8ac8b14 ),
            UINT64_C( 0x6c1354b6a416b3fb ),
#endif // ( PMPML_CHUNK_SIZE_64 > 16 )
#if ( PMPML_CHUNK_SIZE_64 > 32 )
            UINT64_C( 0xaf14a970a5db32a3 ),
            UINT64_C( 0x37428eb1cbdf20a8 ),
            UINT64_C( 0x9b3a2f48a45999fc ),
            UINT64_C( 0x894d39e47aad1efa ),
            UINT64_C( 0x662abdc6b0bb17e8 ),
            UINT64_C( 0xd449820255e4bc4a ),
            UINT64_C( 0x5fc5d5a18389fa01 ),
            UINT64_C( 0xf76102aa2484326e ),
            UINT64_C( 0x8c4308c96b8ef43 ),
            UINT64_C( 0x5c3a562402cee74c ),
            UINT64_C( 0xcf896705837e6c8c ),
            UINT64_C( 0xe069655ea3c1a067 ),
            UINT64_C( 0x3478c1c88ef76c15 ),
            UINT64_C( 0x8f97330dff9ff33b ),
            UINT64_C( 0xba8c150f3fa32e41 ),
            UINT64_C( 0x1f9be6e624480693 ),
            UINT64_C( 0x65d39bd613016d2c ),
            UINT64_C( 0x8d4504cb5be46d10 ),
            UINT64_C( 0xf8b9f2f1685ce679 ),
            UINT64_C( 0x23c59373ff7edc6 ),
            UINT64_C( 0x86283f83c707e5fa ),
            UINT64_C( 0xd7c3eebedd1a109b ),
            UINT64_C( 0x942b2786ea139167 ),
            UINT64_C( 0xf54a2b229a268134 ),
            UINT64_C( 0x85d175f335d21fa1 ),
            UINT64_C( 0xce39abb9d7e787e0 ),
            UINT64_C( 0x3290b3797c71b62d ),
            UINT64_C( 0x954aebd35bc2d445 ),
            UINT64_C( 0xfb24c9a40287bbea ),
            UINT64_C( 0x7c50d2bef8066d38 ),
            UINT64_C( 0xf8614d3fa751b1d1 ),
            UINT64_C( 0xed6bd1b203b43b9 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 32 )
#if ( PMPML_CHUNK_SIZE_64 > 64 )
            UINT64_C( 0x7444a688119fc803 ),
            UINT64_C( 0xaafc0cf7a8f588a3 ),
            UINT64_C( 0x86790f357d28efc6 ),
            UINT64_C( 0xbc6d006ea2a48c65 ),
            UINT64_C( 0x192cd81c89e62897 ),
            UINT64_C( 0x144a15fa87c09aa8 ),
            UINT64_C( 0xc9466727de209085 ),
            UINT64_C( 0xeaf453256eda97d1 ),
            UINT64_C( 0x2f0baafb5017bc8e ),
            UINT64_C( 0x1871e4808c0438bd ),
            UINT64_C( 0x1e78e125290b3e64 ),
            UINT64_C( 0xb85bef6ba39ebc7d ),
            UINT64_C( 0xc4487e3cabd4bf9e ),
            UINT64_C( 0x2ec0963510ce4901 ),
            UINT64_C( 0x3b760a55c2ffc8aa ),
            UINT64_C( 0x538bff351c74590 ),
            UINT64_C( 0xa2720fb707bf396d ),
            UINT64_C( 0xbca7ae2418758cc9 ),
            UINT64_C( 0x6080c33057e68c8d ),
            UINT64_C( 0xce8e54cf677833c ),
            UINT64_C( 0xc08644e5a40fa1ec ),
            UINT64_C( 0x143ce206cebb6352 ),
            UINT64_C( 0x9842eb597773bb9a ),
            UINT64_C( 0xf9a01484a87d6b12 ),
            UINT64_C( 0x734da10581a35732 ),
            UINT64_C( 0x1c5817613ea17f8d ),
            UINT64_C( 0xfbeb5bf815f12eb3 ),
            UINT64_C( 0x879175b1d28ed23 ),
            UINT64_C( 0xc470ffc0a1ce0cfd ),
            UINT64_C( 0xb4b4e44b3d0b5d8 ),
            UINT64_C( 0x2cd5a8501f56ac9a ),
            UINT64_C( 0xf2dfcf44a1689892 ),
            UINT64_C( 0x3bf38a66c6b001a2 ),
            UINT64_C( 0xabfe0c1ce71d4829 ),
            UINT64_C( 0xde1916f0d7565ad1 ),
            UINT64_C( 0x97d66cfacf3df802 ),
            UINT64_C( 0xe28348769858002 ),
            UINT64_C( 0xefed65d521df30e9 ),
            UINT64_C( 0x33abb8c0116b7721 ),
            UINT64_C( 0xb21b1751d4a13405 ),
            UINT64_C( 0x3c445b844cb809e8 ),
            UINT64_C( 0x48fe0d52ba18de8c ),
            UINT64_C( 0x88206dc4b93a7829 ),
            UINT64_C( 0x2543fca442fe076b ),
            UINT64_C( 0x4c6b6b567a3571d3 ),
            UINT64_C( 0x47d9c2f551c39ba7 ),
            UINT64_C( 0x2c6e0a4ebba24ac4 ),
            UINT64_C( 0xb0a1c2f16942e728 ),
            UINT64_C( 0x536ca9a81adc2f15 ),
            UINT64_C( 0xd84840af846d8115 ),
            UINT64_C( 0x6a85aa0fa3159219 ),
            UINT64_C( 0x4c167b95be156d20 ),
            UINT64_C( 0xcd3f7f07382d52cb ),
            UINT64_C( 0x20e3a8604961 ),
            UINT64_C( 0x889912d52e797ba ),
            UINT64_C( 0x19eca83144939b12 ),
            UINT64_C( 0xb746c4bc57d2b80d ),
            UINT64_C( 0x5f19680e72e9ae82 ),
            UINT64_C( 0xc8d7c655d341f90e ),
            UINT64_C( 0xd5d17f24f8e76882 ),
            UINT64_C( 0x111bc49d022a5575 ),
            UINT64_C( 0xd6c434f7739424b9 ),
            UINT64_C( 0x5d56d36b4ded16fe ),
            UINT64_C( 0x910276b4a008443f ),
#endif // ( PMPML_CHUNK_SIZE_64 > 64 )
#if ( PMPML_CHUNK_SIZE_64 > 128 )
#error VALUES NOT GENERATED for PMPML_CHUNK_SIZE_64 > 128
#endif // ( PMPML_CHUNK_SIZE_64 > 128 )

        },
    },
#endif // ( PMPML_LEVELS_64 > 1 )

#if ( PMPML_LEVELS_64 > 2 )
    // Level 2
    {
        UINT64_C( 0x8d88b6de8694f9bd ),
        UINT64_C( 0xab3746b512cf0a0e ), UINT64_C( 0x00000003d ), 0, // sum of coeff and dummy
        {
#if ( PMPML_CHUNK_SIZE_64 > 0 )
            UINT64_C( 0x8c35afea7008c707 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 0 )
#if ( PMPML_CHUNK_SIZE_64 > 1 )
            UINT64_C( 0x41ead554cfccdc94 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 1 )
#if ( PMPML_CHUNK_SIZE_64 > 2 )
            UINT64_C( 0x2efb2ec168e3bffc ),
            UINT64_C( 0xe7c3a0bbddc63920 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 2 )
#if ( PMPML_CHUNK_SIZE_64 > 4 )
            UINT64_C( 0x4dce9e2b34302387 ),
            UINT64_C( 0xfaf035fd5624990c ),
            UINT64_C( 0xccd919a786ba8213 ),
            UINT64_C( 0x9a18857bdb2be4c1 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 4 )
#if ( PMPML_CHUNK_SIZE_64 > 8 )
            UINT64_C( 0x1d03ba509647b6 ),
            UINT64_C( 0x7e331694b4f66982 ),
            UINT64_C( 0xb478c5a41317d762 ),
            UINT64_C( 0xe717e226317c1144 ),
            UINT64_C( 0x22ffa0a2f15f66e ),
            UINT64_C( 0x6519929c261c063c ),
            UINT64_C( 0xff2060eae017d4e0 ),
            UINT64_C( 0xefff6af725b87556 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 8 )
#if ( PMPML_CHUNK_SIZE_64 > 16 )
            UINT64_C( 0x5d4d573a24be5312 ),
            UINT64_C( 0xc07e9f4f495eb740 ),
            UINT64_C( 0x5257032ed4c0e657 ),
            UINT64_C( 0x2841f8526903c4ce ),
            UINT64_C( 0xa5deee0ffb84873b ),
            UINT64_C( 0x45ce5d741491bbb2 ),
            UINT64_C( 0x9c2b70601078ed64 ),
            UINT64_C( 0x43837fdef168a0b0 ),
            UINT64_C( 0xf2ac139bf0bef9e8 ),
            UINT64_C( 0x31f63ea0f89c8f29 ),
            UINT64_C( 0x566268e5d7e2b1a7 ),
            UINT64_C( 0x90a1dcf90070c039 ),
            UINT64_C( 0xb656b46da32098f3 ),
            UINT64_C( 0x932e618f2bf02ff5 ),
            UINT64_C( 0x6567346814e558c3 ),
            UINT64_C( 0x6fee0aa9bbcd1aab ),
#endif // ( PMPML_CHUNK_SIZE_64 > 16 )
#if ( PMPML_CHUNK_SIZE_64 > 32 )
            UINT64_C( 0x55a497a53ecf775d ),
            UINT64_C( 0xcce903fab3ead90d ),
            UINT64_C( 0x7fe3e530e9d3eaa0 ),
            UINT64_C( 0x4dde47c8e75c1597 ),
            UINT64_C( 0x9d487b4725819ca5 ),
            UINT64_C( 0x5893db2002678a18 ),
            UINT64_C( 0x75f4da89918d8bff ),
            UINT64_C( 0x46736d07b2f80ed6 ),
            UINT64_C( 0x2b6e79c066e45341 ),
            UINT64_C( 0xce708ef399b937cb ),
            UINT64_C( 0xa63749ae5d4f1767 ),
            UINT64_C( 0x635d830a136e0563 ),
            UINT64_C( 0x55eea54f48f48df6 ),
            UINT64_C( 0x68a076896b939688 ),
            UINT64_C( 0x6e980d43ce7b11e9 ),
            UINT64_C( 0x199065b551f0a7da ),
            UINT64_C( 0x5d42faee0cb91d94 ),
            UINT64_C( 0xa1770f53043c2107 ),
            UINT64_C( 0x35c1ac46c4e4a748 ),
            UINT64_C( 0xff43f86b0cd6ab3b ),
            UINT64_C( 0x279dbad410c06a67 ),
            UINT64_C( 0x40017b35ed84446a ),
            UINT64_C( 0xa73172134f9c5e8f ),
            UINT64_C( 0xfcff1de2975b0043 ),
            UINT64_C( 0xae0dd9ae2cfa364f ),
            UINT64_C( 0x52129c7818987b00 ),
            UINT64_C( 0xaa0e91dae1a89606 ),
            UINT64_C( 0x91dc4cbfdbb14973 ),
            UINT64_C( 0xb0ab9a3a7281965c ),
            UINT64_C( 0x9a8e2941fc1696a4 ),
            UINT64_C( 0x6c76a89ed0a78b2c ),
            UINT64_C( 0xaa2539208db7d79a ),
#endif // ( PMPML_CHUNK_SIZE_64 > 32 )
#if ( PMPML_CHUNK_SIZE_64 > 64 )
            UINT64_C( 0xcd5a73ca1b8ad462 ),
            UINT64_C( 0xd2844afcfff68b7a ),
            UINT64_C( 0x808b81ab58a3c11e ),
            UINT64_C( 0x2003a1d79ee96e7e ),
            UINT64_C( 0x87b236e5742b42d7 ),
            UINT64_C( 0x3a3610e8bad3b373 ),
            UINT64_C( 0xb481ca092e54fd87 ),
            UINT64_C( 0xaf8adee08b5326e7 ),
            UINT64_C( 0x3ee2e6130ab53ef6 ),
            UINT64_C( 0xbf7427af75a7c2d1 ),
            UINT64_C( 0x4d7a6067dbeed20f ),
            UINT64_C( 0xcbdb5568d804ef3f ),
            UINT64_C( 0x508ff58236e7a6f9 ),
            UINT64_C( 0xacf7eac3c3037dab ),
            UINT64_C( 0x482b277d6928bddc ),
            UINT64_C( 0x538974760ddc6f83 ),
            UINT64_C( 0x6c3b990a1194ebe4 ),
            UINT64_C( 0xeb3dfeda259aae19 ),
            UINT64_C( 0x1043b1e32e6a609c ),
            UINT64_C( 0xe29853f3b731712a ),
            UINT64_C( 0x725474cd1469a035 ),
            UINT64_C( 0x8cc37d08547e287 ),
            UINT64_C( 0xde8c6d9ae66fe36 ),
            UINT64_C( 0xaaef7eb47eb75f52 ),
            UINT64_C( 0xa29a69722b3bf66b ),
            UINT64_C( 0xd44d96ca50981b64 ),
            UINT64_C( 0x952a0827ec5b006 ),
            UINT64_C( 0xaeced6c30c1fff4a ),
            UINT64_C( 0xcf8551b4584c0c46 ),
            UINT64_C( 0x2611b04aafedc71c ),
            UINT64_C( 0xd927dc8e6de6164f ),
            UINT64_C( 0x1fd5e2029d572551 ),
            UINT64_C( 0x45ad5bcd4bf72122 ),
            UINT64_C( 0x54a3c4b12c343b21 ),
            UINT64_C( 0x96156949c3f32a47 ),
            UINT64_C( 0xa81023ef8e94e51b ),
            UINT64_C( 0x26d335efc1d4efde ),
            UINT64_C( 0x669c4846e9284067 ),
            UINT64_C( 0xcabd41a53335f6e1 ),
            UINT64_C( 0x4f517812e06a917f ),
            UINT64_C( 0xcdd989ce6aa55626 ),
            UINT64_C( 0x5ca882c756fe4999 ),
            UINT64_C( 0x639d8b99c6477c42 ),
            UINT64_C( 0x2716a772911dca49 ),
            UINT64_C( 0x4374400157dc3d13 ),
            UINT64_C( 0x1d0a512182a280f5 ),
            UINT64_C( 0xd822a4f87a0ad77c ),
            UINT64_C( 0xa0ab212f142db2b ),
            UINT64_C( 0xe80fb8a935595883 ),
            UINT64_C( 0x7568eec35a490b83 ),
            UINT64_C( 0x9abdb9e114df5fc ),
            UINT64_C( 0x55137c447d1bca41 ),
            UINT64_C( 0xde593a7acafcc85 ),
            UINT64_C( 0xb975febcee3ca728 ),
            UINT64_C( 0x63bef68e44fea1d5 ),
            UINT64_C( 0xb013be7092b2a894 ),
            UINT64_C( 0xeba8c75d166e19d9 ),
            UINT64_C( 0x224ad7936de628b9 ),
            UINT64_C( 0x42b55663e6da91c0 ),
            UINT64_C( 0x68f73c834d3b02a8 ),
            UINT64_C( 0xbd2a1b0f697dc42 ),
            UINT64_C( 0x89fc577d065f571a ),
            UINT64_C( 0xdc714c2c16925d8d ),
            UINT64_C( 0x5f94692fe9a6b2eb ),
#endif // ( PMPML_CHUNK_SIZE_64 > 64 )
#if ( PMPML_CHUNK_SIZE_64 > 128 )
#error VALUES NOT GENERATED for PMPML_CHUNK_SIZE_64 > 128
#endif // ( PMPML_CHUNK_SIZE_64 > 128 )

        },
    },
#endif // ( PMPML_LEVELS_64 > 2 )

#if ( PMPML_LEVELS_64 > 3 )
    // Level 3
    {
        UINT64_C( 0x8370e3dd2dd7e740 ),
        UINT64_C( 0x4ac7a23650afaa5d ), UINT64_C( 0x00000003c ), 0, // sum of coeff and dummy
        {
#if ( PMPML_CHUNK_SIZE_64 > 0 )
            UINT64_C( 0x141a416e635e3008 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 0 )
#if ( PMPML_CHUNK_SIZE_64 > 1 )
            UINT64_C( 0xe59e5696300fc54e ),
#endif // ( PMPML_CHUNK_SIZE_64 > 1 )
#if ( PMPML_CHUNK_SIZE_64 > 2 )
            UINT64_C( 0x3ac6afaf368cd3a6 ),
            UINT64_C( 0x1c4d7641d7192768 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 2 )
#if ( PMPML_CHUNK_SIZE_64 > 4 )
            UINT64_C( 0xaae556230b19cb19 ),
            UINT64_C( 0x9fe3e074ade9f7e ),
            UINT64_C( 0xcc11adbd55ed21af ),
            UINT64_C( 0x862d3632edce6066 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 4 )
#if ( PMPML_CHUNK_SIZE_64 > 8 )
            UINT64_C( 0x83200725a18ecf18 ),
            UINT64_C( 0xef8a88f410ebfffa ),
            UINT64_C( 0x8f32ade56cc5cd11 ),
            UINT64_C( 0x68601c8acb3b697b ),
            UINT64_C( 0x3f7bc460e435c5be ),
            UINT64_C( 0xead87aaff097bf77 ),
            UINT64_C( 0x5d35b160f1047863 ),
            UINT64_C( 0x3c7c707d1decebe3 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 8 )
#if ( PMPML_CHUNK_SIZE_64 > 16 )
            UINT64_C( 0xffab7fcb4b288977 ),
            UINT64_C( 0xbb30bf67ea8078d4 ),
            UINT64_C( 0x8c14f33079c0375 ),
            UINT64_C( 0xc34be6df85f4e084 ),
            UINT64_C( 0xc5d61545239490a8 ),
            UINT64_C( 0xc206111b5df05780 ),
            UINT64_C( 0xb40b9d277b5eb1a6 ),
            UINT64_C( 0x61f772ed20991bd7 ),
            UINT64_C( 0xa423cf9ee644f9b9 ),
            UINT64_C( 0x63a281c7fb30afbe ),
            UINT64_C( 0x33dd3deb21ee47f3 ),
            UINT64_C( 0x3d882a465f6520e0 ),
            UINT64_C( 0xd8f44673c67ff2c6 ),
            UINT64_C( 0x159cafea157a4f90 ),
            UINT64_C( 0x38a18e681a48e2a0 ),
            UINT64_C( 0xb9ebf2a06fe035b4 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 16 )
#if ( PMPML_CHUNK_SIZE_64 > 32 )
            UINT64_C( 0xdd504b49fd3e67bb ),
            UINT64_C( 0xae67fb542747c488 ),
            UINT64_C( 0x7416c312f3387e02 ),
            UINT64_C( 0xa5bebc6a0bc34dd0 ),
            UINT64_C( 0x89a98f212c21c94a ),
            UINT64_C( 0xd377d8c55c6c78c8 ),
            UINT64_C( 0x23f194d2e59b81d0 ),
            UINT64_C( 0xc0efd26a5d0ed051 ),
            UINT64_C( 0x112146515113ef8 ),
            UINT64_C( 0x2031a3cd82ce8702 ),
            UINT64_C( 0x7ec8e3c87ce50a07 ),
            UINT64_C( 0x47a142fc6fcd89c7 ),
            UINT64_C( 0x2bcb63e57f0cae2f ),
            UINT64_C( 0x8664c6f962a87b24 ),
            UINT64_C( 0xe6d174ff007b2c34 ),
            UINT64_C( 0x87e09c902d073b32 ),
            UINT64_C( 0xb543d64ed7dfb009 ),
            UINT64_C( 0x7c31c340b3dae313 ),
            UINT64_C( 0x562ba6cf0b4713cc ),
            UINT64_C( 0x957f23822221316e ),
            UINT64_C( 0x9612164e43a7d75e ),
            UINT64_C( 0x66088836498298a7 ),
            UINT64_C( 0x2277a69befc583cd ),
            UINT64_C( 0xc6a74c6baecd220d ),
            UINT64_C( 0xc3df4a454eaf882f ),
            UINT64_C( 0x4c70af7cee8f0bbc ),
            UINT64_C( 0x2ba3590fd97517d4 ),
            UINT64_C( 0xbb00a28e752d346c ),
            UINT64_C( 0xebfa174a39681974 ),
            UINT64_C( 0x33d8678eca2890b ),
            UINT64_C( 0xede2c5142f49827c ),
            UINT64_C( 0x614d56f55dde9f8b ),
#endif // ( PMPML_CHUNK_SIZE_64 > 32 )
#if ( PMPML_CHUNK_SIZE_64 > 64 )
            UINT64_C( 0x72e2e9d5582a0a08 ),
            UINT64_C( 0x9d1f6238ddac882b ),
            UINT64_C( 0xfcd3682c3bd70286 ),
            UINT64_C( 0x8958816740699ee2 ),
            UINT64_C( 0xa5c7a3559d07b917 ),
            UINT64_C( 0x4d8e82254c5a70e4 ),
            UINT64_C( 0x291f69d4c89e5c45 ),
            UINT64_C( 0x9c94a14902c4b249 ),
            UINT64_C( 0xd9bcf68e0f055258 ),
            UINT64_C( 0x3a0cc6dcfffd05b7 ),
            UINT64_C( 0xf0a22a2d6b06d03a ),
            UINT64_C( 0xeb9a2918852926aa ),
            UINT64_C( 0x37915f797a6675f7 ),
            UINT64_C( 0x98cdbb4e1686b742 ),
            UINT64_C( 0x7007270bff4fcbe1 ),
            UINT64_C( 0xc458d4068dc6c70f ),
            UINT64_C( 0x73bbe0965ce93f3 ),
            UINT64_C( 0xe7f2df0297e091e6 ),
            UINT64_C( 0x3bf1a925fb9e6d1c ),
            UINT64_C( 0x48af31eef7b34f4b ),
            UINT64_C( 0xe92e127962fa5e ),
            UINT64_C( 0xf8fc920466f3cd3 ),
            UINT64_C( 0x25a21a02222a64b5 ),
            UINT64_C( 0xb9853aa495decb46 ),
            UINT64_C( 0x262dc131bb0c35bb ),
            UINT64_C( 0xaf519c96fb0e9f68 ),
            UINT64_C( 0x755849eedbb94ff2 ),
            UINT64_C( 0x13a3d660e45f77b0 ),
            UINT64_C( 0x9f5d4268c5d69a64 ),
            UINT64_C( 0x8c8a5e806938377c ),
            UINT64_C( 0x5bd34bfb54b64524 ),
            UINT64_C( 0x6b5f1db574ecfaa9 ),
            UINT64_C( 0x37f725e56c1e9dc3 ),
            UINT64_C( 0xc7fe10ac9904f90f ),
            UINT64_C( 0x879ae4eff04c0ab8 ),
            UINT64_C( 0x76aea0675622e495 ),
            UINT64_C( 0xe29e3a0ebbe40dba ),
            UINT64_C( 0x157ffad6ff36b56f ),
            UINT64_C( 0x5466d89bca624434 ),
            UINT64_C( 0x5449470d65bc5b35 ),
            UINT64_C( 0x7f6c99db52e6348a ),
            UINT64_C( 0x776d4dff2abd85c7 ),
            UINT64_C( 0xb010a7f1beffcc1a ),
            UINT64_C( 0xad74603f4c6d9ab6 ),
            UINT64_C( 0x599c30e3b018f16 ),
            UINT64_C( 0x127a45fdeef28abd ),
            UINT64_C( 0x4cf790e8928575a0 ),
            UINT64_C( 0x58fa1edd4caa9a51 ),
            UINT64_C( 0x5f3e8dd37e04eb51 ),
            UINT64_C( 0xac131e1aea11807f ),
            UINT64_C( 0xf46fd7f990fb8cca ),
            UINT64_C( 0x73963b93ad4b9bb2 ),
            UINT64_C( 0x4c15e2478e8c36 ),
            UINT64_C( 0xc79d966848c52c68 ),
            UINT64_C( 0x827091c5d5309f35 ),
            UINT64_C( 0x8e6290b4ecb7be34 ),
            UINT64_C( 0x4a2a701831915090 ),
            UINT64_C( 0xb9ed682c26ae8721 ),
            UINT64_C( 0x6c94a32c3f063b5 ),
            UINT64_C( 0x11946415f289d8b4 ),
            UINT64_C( 0x4e6d4a3b505cd181 ),
            UINT64_C( 0x7ad8e06beddabbeb ),
            UINT64_C( 0x272e050758ccfa94 ),
            UINT64_C( 0x1a38a7703463de87 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 64 )
#if ( PMPML_CHUNK_SIZE_64 > 128 )
#error VALUES NOT GENERATED for PMPML_CHUNK_SIZE_64 > 128
#endif // ( PMPML_CHUNK_SIZE_64 > 128 )

        },
    },
#endif // ( PMPML_LEVELS_64 > 3 )

#if ( PMPML_LEVELS_64 > 4 )
    // Level 4
    {
        UINT64_C( 0x7c024d493240fd81 ),
        UINT64_C( 0xcbedce790be4d6b ), UINT64_C( 0x000000041 ), 0, // sum of coeff and dummy
        {
#if ( PMPML_CHUNK_SIZE_64 > 0 )
            UINT64_C( 0xc385e890cdafa370 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 0 )
#if ( PMPML_CHUNK_SIZE_64 > 1 )
            UINT64_C( 0x72af2ae52cda3c0c ),
#endif // ( PMPML_CHUNK_SIZE_64 > 1 )
#if ( PMPML_CHUNK_SIZE_64 > 2 )
            UINT64_C( 0x377cc48ad117edce ),
            UINT64_C( 0xf3724d905f5cdc46 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 2 )
#if ( PMPML_CHUNK_SIZE_64 > 4 )
            UINT64_C( 0xf51e0db646e04641 ),
            UINT64_C( 0xb3ef041173b95e50 ),
            UINT64_C( 0x483d8f190412d741 ),
            UINT64_C( 0x9565fe70636fe7d1 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 4 )
#if ( PMPML_CHUNK_SIZE_64 > 8 )
            UINT64_C( 0x7b5497f93bca30f2 ),
            UINT64_C( 0xf7aa697c1f31e835 ),
            UINT64_C( 0x26b9b332c5097919 ),
            UINT64_C( 0x609c027c0e94be94 ),
            UINT64_C( 0xa4a77bf651dff968 ),
            UINT64_C( 0xd3e952f9477aa964 ),
            UINT64_C( 0xb6eb6ba84eafa8c3 ),
            UINT64_C( 0xecc3cb66b4f9e264 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 8 )
#if ( PMPML_CHUNK_SIZE_64 > 16 )
            UINT64_C( 0x6f7de149b48c42d2 ),
            UINT64_C( 0xef38e08b77c94c8b ),
            UINT64_C( 0xd6a178affe73a087 ),
            UINT64_C( 0xba01cfe6a8b0bfaf ),
            UINT64_C( 0x771821ab27b1d361 ),
            UINT64_C( 0x7b5e6b3e68a80c08 ),
            UINT64_C( 0xd53c33bab8faf82f ),
            UINT64_C( 0x81e128821c9b5835 ),
            UINT64_C( 0x6968851cd767ecb8 ),
            UINT64_C( 0x539510f090361d02 ),
            UINT64_C( 0xee243a481fed197e ),
            UINT64_C( 0x57a7a6f5c2d4a423 ),
            UINT64_C( 0x7afc981eebfd0da8 ),
            UINT64_C( 0xca100d08037f88e1 ),
            UINT64_C( 0x7caf7e30e051e2f3 ),
            UINT64_C( 0x9c6f692bb7e0c5e ),
#endif // ( PMPML_CHUNK_SIZE_64 > 16 )
#if ( PMPML_CHUNK_SIZE_64 > 32 )
            UINT64_C( 0xff97c9f9213491a7 ),
            UINT64_C( 0x3c7f06f4da8b68a8 ),
            UINT64_C( 0xcc22969e12b0c521 ),
            UINT64_C( 0xd3c246d637dc486c ),
            UINT64_C( 0x645c098f230c482c ),
            UINT64_C( 0x7be14df33d02c990 ),
            UINT64_C( 0xea99f1bc32cc189f ),
            UINT64_C( 0x8b776c2437b66a29 ),
            UINT64_C( 0xb6975830b26d1bcb ),
            UINT64_C( 0x3c24c07fb12dedfb ),
            UINT64_C( 0x939403d4624cb460 ),
            UINT64_C( 0xb4f454217f1f947 ),
            UINT64_C( 0x1ba0c284e2ac36c2 ),
            UINT64_C( 0x25cfdc661fa02193 ),
            UINT64_C( 0x661dc556bc51ede9 ),
            UINT64_C( 0x8e4e8f1996c5b04f ),
            UINT64_C( 0x6196e065ebbfc052 ),
            UINT64_C( 0xbc1f2b573fcaf323 ),
            UINT64_C( 0x74b0be15966126bc ),
            UINT64_C( 0xb61922dc3648b491 ),
            UINT64_C( 0x7528e5507af25415 ),
            UINT64_C( 0xa03fee7cecbf5a92 ),
            UINT64_C( 0x28f080a17abcdbf4 ),
            UINT64_C( 0xf558e58265b50247 ),
            UINT64_C( 0x48946bc6b781b231 ),
            UINT64_C( 0x1d3f9268ece51d01 ),
            UINT64_C( 0x64cfd592583cd6d1 ),
            UINT64_C( 0x33227252dde03dcc ),
            UINT64_C( 0xfe487eba451edd0e ),
            UINT64_C( 0x1554136d4e0da4f8 ),
            UINT64_C( 0x5446eb38aa369ed4 ),
            UINT64_C( 0x5b46c4ce910d2ab6 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 32 )
#if ( PMPML_CHUNK_SIZE_64 > 64 )
            UINT64_C( 0x5ca4f4ee4346e6f3 ),
            UINT64_C( 0xb8a0111cf306801f ),
            UINT64_C( 0x4f96aae6581da78e ),
            UINT64_C( 0x6245d9523980b137 ),
            UINT64_C( 0x5e6efad77dd317ba ),
            UINT64_C( 0x7eb8de8eb617c7f4 ),
            UINT64_C( 0x84e4d9ed06dce648 ),
            UINT64_C( 0x24ed663bd6ce99fd ),
            UINT64_C( 0xdf0ba8713d3bd076 ),
            UINT64_C( 0xc11063b88172e67a ),
            UINT64_C( 0xb173e8e756868535 ),
            UINT64_C( 0x6f9b72467e93008f ),
            UINT64_C( 0xc7ab90fa88aa8b2 ),
            UINT64_C( 0x3deb22d963a56bcf ),
            UINT64_C( 0xa56348ee35314bb8 ),
            UINT64_C( 0x9881a7a2129cebdb ),
            UINT64_C( 0xc160ec1b18ecaeb6 ),
            UINT64_C( 0x358f2bd362310528 ),
            UINT64_C( 0xa92ccae5ed750d12 ),
            UINT64_C( 0xdce6d5d94a23845d ),
            UINT64_C( 0xf50e3e4e30ac79f4 ),
            UINT64_C( 0x308e35ff0a5c199f ),
            UINT64_C( 0x9843f1db5c0f0066 ),
            UINT64_C( 0x21e31f7ea490ff33 ),
            UINT64_C( 0x180b0bd32ae3dc81 ),
            UINT64_C( 0x64067fc5626d1cd9 ),
            UINT64_C( 0x10803e502f4b4eef ),
            UINT64_C( 0x64f3d35137338ceb ),
            UINT64_C( 0x12f3445e0c9d7641 ),
            UINT64_C( 0x7be6720939744b5c ),
            UINT64_C( 0xe85e4cc174c166e2 ),
            UINT64_C( 0x9468eb4ab9946aed ),
            UINT64_C( 0xa8bb2b2d4df63a32 ),
            UINT64_C( 0xb2f95c382e934037 ),
            UINT64_C( 0x3e902ed369fbbb44 ),
            UINT64_C( 0x185a9eade1869dd0 ),
            UINT64_C( 0xd240a5734d051bf1 ),
            UINT64_C( 0x92faec8652bea745 ),
            UINT64_C( 0x8996ab0aec688aba ),
            UINT64_C( 0xbcac5f2824c8daef ),
            UINT64_C( 0x5881daacfc329969 ),
            UINT64_C( 0x55364eaf990b3b21 ),
            UINT64_C( 0xe5de0bd0d06f1120 ),
            UINT64_C( 0xd6a6fb94a44fbf1a ),
            UINT64_C( 0x4e10e2dcf9e9aa49 ),
            UINT64_C( 0xfe401a3e5cdb41ae ),
            UINT64_C( 0x81a4db50e11a295f ),
            UINT64_C( 0xfcc87dd6a04da032 ),
            UINT64_C( 0x6c5f6fa90c36ccb6 ),
            UINT64_C( 0xf7fa702ef53bd5bd ),
            UINT64_C( 0x37345651f635ded5 ),
            UINT64_C( 0x9650ac0acc8b0f11 ),
            UINT64_C( 0xfb1fc5e6a46f6c48 ),
            UINT64_C( 0x75fbd67a4f588024 ),
            UINT64_C( 0xbcf48525891fbf4e ),
            UINT64_C( 0x76fdfe68cb57efc ),
            UINT64_C( 0x9ff4fdeb562abe4d ),
            UINT64_C( 0x363686dcec66ee6f ),
            UINT64_C( 0x3ed3c65e6660e857 ),
            UINT64_C( 0x555629fb07677f9c ),
            UINT64_C( 0xb9e59e5e2dc63f0 ),
            UINT64_C( 0x3dd204d3c272f8e8 ),
            UINT64_C( 0xa5e2bc12753cc6f ),
            UINT64_C( 0x261571527dae8627 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 64 )
#if ( PMPML_CHUNK_SIZE_64 > 128 )
#error VALUES NOT GENERATED for PMPML_CHUNK_SIZE_64 > 128
#endif // ( PMPML_CHUNK_SIZE_64 > 128 )

        },
    },
#endif // ( PMPML_LEVELS_64 > 4 )

#if ( PMPML_LEVELS_64 > 5 )
    // Level 5
    {
        UINT64_C( 0x742b91e91dcfb0a6 ),
        UINT64_C( 0xcfeca6a967921914 ), UINT64_C( 0x00000003c ), 0, // sum of coeff and dummy
        {
#if ( PMPML_CHUNK_SIZE_64 > 0 )
            UINT64_C( 0x6edee5be930ba5a3 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 0 )
#if ( PMPML_CHUNK_SIZE_64 > 1 )
            UINT64_C( 0x7da756c8a9d5865f ),
#endif // ( PMPML_CHUNK_SIZE_64 > 1 )
#if ( PMPML_CHUNK_SIZE_64 > 2 )
            UINT64_C( 0x979d7286e9ec6a3a ),
            UINT64_C( 0xb5f53e73c1075910 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 2 )
#if ( PMPML_CHUNK_SIZE_64 > 4 )
            UINT64_C( 0xac17c48f4a6369d1 ),
            UINT64_C( 0xe59c869b50f242b8 ),
            UINT64_C( 0xd82f2c4debbd7a92 ),
            UINT64_C( 0x2f480ab7fcef8c2a ),
#endif // ( PMPML_CHUNK_SIZE_64 > 4 )
#if ( PMPML_CHUNK_SIZE_64 > 8 )
            UINT64_C( 0x5455617627c7967c ),
            UINT64_C( 0x391f4653479cd148 ),
            UINT64_C( 0x93816a1fe3fe659f ),
            UINT64_C( 0x750610cc458f0e83 ),
            UINT64_C( 0xaea9ec84538ba181 ),
            UINT64_C( 0x7f69ef23331d201 ),
            UINT64_C( 0x1154b8671a7e21a6 ),
            UINT64_C( 0x44f2b2a5e705dccd ),
#endif // ( PMPML_CHUNK_SIZE_64 > 8 )
#if ( PMPML_CHUNK_SIZE_64 > 16 )
            UINT64_C( 0xf4137114642bd756 ),
            UINT64_C( 0xd9fdd5c26862aa0 ),
            UINT64_C( 0x24252072220e87e6 ),
            UINT64_C( 0x40c56b66c01c20f4 ),
            UINT64_C( 0x3d1246932d66f5fb ),
            UINT64_C( 0x549be143f5ad841a ),
            UINT64_C( 0xf5a694fd849975f9 ),
            UINT64_C( 0xab3a75807839e2ae ),
            UINT64_C( 0xdbc151ec40a63d29 ),
            UINT64_C( 0x252d86d9b6ff7885 ),
            UINT64_C( 0xd848fb1e2a170064 ),
            UINT64_C( 0x8dbfbaa7e285d213 ),
            UINT64_C( 0x48c5c1a431e6a390 ),
            UINT64_C( 0x4ea411a44607dc21 ),
            UINT64_C( 0xbb8535f2c692910e ),
            UINT64_C( 0x6d8c5388d2aed8b2 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 16 )
#if ( PMPML_CHUNK_SIZE_64 > 32 )
            UINT64_C( 0x2fddc57f1a7b1cc8 ),
            UINT64_C( 0x3a2c8bd7ea3f25ab ),
            UINT64_C( 0x87708e34be0fb414 ),
            UINT64_C( 0x8543e5d4e9f7c34e ),
            UINT64_C( 0x2c349130b9d62f31 ),
            UINT64_C( 0x8589d21285426c0c ),
            UINT64_C( 0x5b2a39baebaad52f ),
            UINT64_C( 0x3f8700c91cd5413 ),
            UINT64_C( 0xcc00c06be9d784fb ),
            UINT64_C( 0x70a78056b4c5b930 ),
            UINT64_C( 0x4a2aa9811bbd47a3 ),
            UINT64_C( 0x4a878b1e922c6304 ),
            UINT64_C( 0x2443f15ef107a70f ),
            UINT64_C( 0xf64b29a8f4069376 ),
            UINT64_C( 0xfc309fa9086da268 ),
            UINT64_C( 0xffeedab78f765ff4 ),
            UINT64_C( 0xa99a216b423fac77 ),
            UINT64_C( 0x3b9c309929d6991e ),
            UINT64_C( 0x113fe1aa6ba4c211 ),
            UINT64_C( 0x2f214dea6f758f36 ),
            UINT64_C( 0x519806a4ba5b5ca8 ),
            UINT64_C( 0xef203bc2948dda9e ),
            UINT64_C( 0xaa83a59110f3a193 ),
            UINT64_C( 0xebdef286170eb7ef ),
            UINT64_C( 0x9bd44760cd090ead ),
            UINT64_C( 0x234b9dde9fd14ab3 ),
            UINT64_C( 0xee6e9c107305b2f4 ),
            UINT64_C( 0x5eae7639d8a2b0ab ),
            UINT64_C( 0x63d30ff6c83a7320 ),
            UINT64_C( 0x3ded1e0f42fa1cb2 ),
            UINT64_C( 0xd386b3b3b19d708e ),
            UINT64_C( 0x34d5016669fe449a ),
#endif // ( PMPML_CHUNK_SIZE_64 > 32 )
#if ( PMPML_CHUNK_SIZE_64 > 64 )
            UINT64_C( 0xb9f91d66682b7278 ),
            UINT64_C( 0x817659853e4e435e ),
            UINT64_C( 0xfc2e6483c3048759 ),
            UINT64_C( 0xb261e03ffbd9519e ),
            UINT64_C( 0xb49de284f5cf5d02 ),
            UINT64_C( 0x2387c87bbbf7445 ),
            UINT64_C( 0x6d937def7be53a83 ),
            UINT64_C( 0x8526f8ae49dbd0f ),
            UINT64_C( 0x615ef3f5af7fd5ab ),
            UINT64_C( 0x54cb4d9e528c1d79 ),
            UINT64_C( 0x3cb713ba05a67835 ),
            UINT64_C( 0xf592fb2d4d2af2db ),
            UINT64_C( 0x86ec6601e42b2456 ),
            UINT64_C( 0xe857a59e7439d0d ),
            UINT64_C( 0x8326414cd1f6874f ),
            UINT64_C( 0xa92dad5f5d9a106a ),
            UINT64_C( 0x58793e150f7ff874 ),
            UINT64_C( 0x519bc1ed4913c3c5 ),
            UINT64_C( 0x4f3b0da10be83d82 ),
            UINT64_C( 0xd82c561b6f18a264 ),
            UINT64_C( 0xa47f8878009a1815 ),
            UINT64_C( 0x673feb8c6083dd6 ),
            UINT64_C( 0x343ac4c37efb4d08 ),
            UINT64_C( 0x4847b3364092fa4a ),
            UINT64_C( 0x1a30098e32c503a0 ),
            UINT64_C( 0x7f242c4cb083e69b ),
            UINT64_C( 0x8e69e6c3b1070ec ),
            UINT64_C( 0x711fa2b404a9684 ),
            UINT64_C( 0xfc24e0a982ae39fa ),
            UINT64_C( 0x2ff5ca0bd974db5 ),
            UINT64_C( 0x2777845db37d0e98 ),
            UINT64_C( 0x5555b5942327e543 ),
            UINT64_C( 0x7717c93942df84b7 ),
            UINT64_C( 0x2a661b86ad2dcdde ),
            UINT64_C( 0x61c93d7746664b20 ),
            UINT64_C( 0x514090cc1a87d06b ),
            UINT64_C( 0x7aa2f5f8bcf987ad ),
            UINT64_C( 0x2898047ec7fa8778 ),
            UINT64_C( 0xe5cf2d9a08d8927c ),
            UINT64_C( 0xecde6d34e5c3fe5a ),
            UINT64_C( 0x5589c848adaebaf8 ),
            UINT64_C( 0xedac4b9343975aa2 ),
            UINT64_C( 0x48503cf321ad26b2 ),
            UINT64_C( 0x4e7f1530c16f8941 ),
            UINT64_C( 0x6a9fe4e56715fa4e ),
            UINT64_C( 0xefa9aec821c89e4b ),
            UINT64_C( 0xc23b542018927c97 ),
            UINT64_C( 0xeedb11ae93481c6f ),
            UINT64_C( 0x35f45dab8618f030 ),
            UINT64_C( 0x2a5eb24e550fcb99 ),
            UINT64_C( 0x5c6d2d61242cf3a8 ),
            UINT64_C( 0x96058fee3f9becb0 ),
            UINT64_C( 0x811ed70d6e6cd756 ),
            UINT64_C( 0x93642e8381c4a6a0 ),
            UINT64_C( 0xc81e05bef85ad62b ),
            UINT64_C( 0xd12ce5cee02edeae ),
            UINT64_C( 0xa00b676c5f25868 ),
            UINT64_C( 0xc5c91383914e9732 ),
            UINT64_C( 0xd9e4fbd6c7a78695 ),
            UINT64_C( 0x24741bcd3aab63f3 ),
            UINT64_C( 0xa86f85bc7932add8 ),
            UINT64_C( 0xd851daaea4ade651 ),
            UINT64_C( 0xc1b2a4b765bd4ee2 ),
            UINT64_C( 0xd648f4971ef524f7 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 64 )
#if ( PMPML_CHUNK_SIZE_64 > 128 )
#error VALUES NOT GENERATED for PMPML_CHUNK_SIZE_64 > 128
#endif // ( PMPML_CHUNK_SIZE_64 > 128 )

        },
    },
#endif // ( PMPML_LEVELS_64 > 5 )

#if ( PMPML_LEVELS_64 > 6 )
    // Level 6
    {
        UINT64_C( 0xaf62ce594afbb378 ),
        UINT64_C( 0x248e65d01cba3e0b ), UINT64_C( 0x00000003f ), 0, // sum of coeff and dummy
        {
#if ( PMPML_CHUNK_SIZE_64 > 0 )
            UINT64_C( 0x6ce36b80768d6e7f ),
#endif // ( PMPML_CHUNK_SIZE_64 > 0 )
#if ( PMPML_CHUNK_SIZE_64 > 1 )
            UINT64_C( 0xa397920aa6626e5a ),
#endif // ( PMPML_CHUNK_SIZE_64 > 1 )
#if ( PMPML_CHUNK_SIZE_64 > 2 )
            UINT64_C( 0x4de32bd5633745d ),
            UINT64_C( 0xe699be0bb8411b1f ),
#endif // ( PMPML_CHUNK_SIZE_64 > 2 )
#if ( PMPML_CHUNK_SIZE_64 > 4 )
            UINT64_C( 0xd06b3da1042ffeff ),
            UINT64_C( 0xc8c12f5678dbc1fe ),
            UINT64_C( 0x5f1c5df4786ec543 ),
            UINT64_C( 0xc64eed21fe2dab71 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 4 )
#if ( PMPML_CHUNK_SIZE_64 > 8 )
            UINT64_C( 0x43083efd3ab83bc9 ),
            UINT64_C( 0xfbd27f38b364bb80 ),
            UINT64_C( 0x948701fc4ed5f457 ),
            UINT64_C( 0xb26d9d8304db31a5 ),
            UINT64_C( 0x18ec7952e4e525a9 ),
            UINT64_C( 0xa81dbd330204a9d ),
            UINT64_C( 0x33c520def3d2101 ),
            UINT64_C( 0x73a6c045c701aadd ),
#endif // ( PMPML_CHUNK_SIZE_64 > 8 )
#if ( PMPML_CHUNK_SIZE_64 > 16 )
            UINT64_C( 0xd7d19f80a027afec ),
            UINT64_C( 0x8bf3f0c57c2fe429 ),
            UINT64_C( 0xb8344463c59719e3 ),
            UINT64_C( 0xf76ffe54b2fd1d64 ),
            UINT64_C( 0xf3358f8c810dda81 ),
            UINT64_C( 0x8049af80eb93f21f ),
            UINT64_C( 0x5ff59a51e9dafd79 ),
            UINT64_C( 0xb3f6e7835814a5e9 ),
            UINT64_C( 0xbd127322c2e4b16c ),
            UINT64_C( 0x7bc601b6ef92afa3 ),
            UINT64_C( 0xb5e1e97c28a598 ),
            UINT64_C( 0x38d94a15139b608e ),
            UINT64_C( 0x39737d09f0035403 ),
            UINT64_C( 0x65337848d976c3a2 ),
            UINT64_C( 0x91c04f2a6a9ec21f ),
            UINT64_C( 0x2548b83235c115f ),
#endif // ( PMPML_CHUNK_SIZE_64 > 16 )
#if ( PMPML_CHUNK_SIZE_64 > 32 )
            UINT64_C( 0x430e4ec854acc042 ),
            UINT64_C( 0xb0d27ee05bcd498 ),
            UINT64_C( 0xf669534441242d11 ),
            UINT64_C( 0x2cbaa107829c390 ),
            UINT64_C( 0x35b4d683817b903c ),
            UINT64_C( 0x31834f7142d5cfa0 ),
            UINT64_C( 0x77fd19567cb1ffea ),
            UINT64_C( 0x911558876310281 ),
            UINT64_C( 0xeaaef1c301d92167 ),
            UINT64_C( 0xf1c746401671b4d3 ),
            UINT64_C( 0x7d1888c23b2447e9 ),
            UINT64_C( 0x72c44c19bde5d380 ),
            UINT64_C( 0x7a6156a99377bf58 ),
            UINT64_C( 0xeafd8cb3722b6aa4 ),
            UINT64_C( 0xa4b21df76c4ae4a6 ),
            UINT64_C( 0xa612df347cb132bf ),
            UINT64_C( 0x2f8331da53e4651f ),
            UINT64_C( 0x498baa43072061aa ),
            UINT64_C( 0x669cd34bdf522223 ),
            UINT64_C( 0x611a32f117b489e3 ),
            UINT64_C( 0xb1d08c016e277a67 ),
            UINT64_C( 0xb1d4d0937395b21f ),
            UINT64_C( 0x9d3e7447db71fd3d ),
            UINT64_C( 0x8d61714b54616249 ),
            UINT64_C( 0x91cfe6cad3939afb ),
            UINT64_C( 0x785efcfc1fbed3f8 ),
            UINT64_C( 0xc7270e86e752b71a ),
            UINT64_C( 0xe91bc93a14e678c4 ),
            UINT64_C( 0x9bf095b9662cf95d ),
            UINT64_C( 0xa82d8d1309df2256 ),
            UINT64_C( 0x41abc3fa674c6a06 ),
            UINT64_C( 0xe38a88b0398547e ),
#endif // ( PMPML_CHUNK_SIZE_64 > 32 )
#if ( PMPML_CHUNK_SIZE_64 > 64 )
            UINT64_C( 0x6fe82427e8c24696 ),
            UINT64_C( 0xf20ed4a9e8e02c2 ),
            UINT64_C( 0x5df70b3c4784b7e1 ),
            UINT64_C( 0xb2deddde9963c ),
            UINT64_C( 0xc8929e6367803b53 ),
            UINT64_C( 0xb28033a4c174c86d ),
            UINT64_C( 0x3a666b4c18406801 ),
            UINT64_C( 0xbd8b5791ba056136 ),
            UINT64_C( 0x715ed0ae7c79e816 ),
            UINT64_C( 0x577c1b256c64436a ),
            UINT64_C( 0x54a4f8d1b535e02d ),
            UINT64_C( 0xc8d7f16769d38240 ),
            UINT64_C( 0xb707839b15b0d3fc ),
            UINT64_C( 0x255def6be6755b91 ),
            UINT64_C( 0x9bb54bbffd57d21f ),
            UINT64_C( 0xd882bcc3caa155e7 ),
            UINT64_C( 0x32706a042f57ab60 ),
            UINT64_C( 0xf2f38aa7f8c31e8b ),
            UINT64_C( 0xa1e84cfff8dc3cae ),
            UINT64_C( 0xa703b9fc24c2e1db ),
            UINT64_C( 0x8c3bd99cdd77d160 ),
            UINT64_C( 0x4d4692d129444836 ),
            UINT64_C( 0xef4b1c7cd501fd7d ),
            UINT64_C( 0xde07e34df48421ab ),
            UINT64_C( 0xae4083dd864c910d ),
            UINT64_C( 0xfa4ba5e1a2d58460 ),
            UINT64_C( 0x6f0068aa4e75a5ec ),
            UINT64_C( 0xa9e07133b5a2abe ),
            UINT64_C( 0x337739bfa36cecc8 ),
            UINT64_C( 0xe3591f5cc97b787c ),
            UINT64_C( 0xf2bbe16b3ec41399 ),
            UINT64_C( 0xf3dcc6246a758716 ),
            UINT64_C( 0xc73351933e7e2417 ),
            UINT64_C( 0xe1f947d867b0bdd ),
            UINT64_C( 0xe48bf8efb1f572a0 ),
            UINT64_C( 0xd5b209d89f09fa2a ),
            UINT64_C( 0x27478ae42843f9f1 ),
            UINT64_C( 0x1b30ed80db664a5 ),
            UINT64_C( 0x181e5ed5e84cd8b ),
            UINT64_C( 0xf6318c19349acefb ),
            UINT64_C( 0x69c8492982778f4b ),
            UINT64_C( 0x4af6702966bca750 ),
            UINT64_C( 0xa8b4d353631e2482 ),
            UINT64_C( 0x5ce04a70f584d238 ),
            UINT64_C( 0xfbf5b2cdc0394772 ),
            UINT64_C( 0x104d44c77b80b6ae ),
            UINT64_C( 0xbe8e5a49d6ee3335 ),
            UINT64_C( 0x5bf8f3f9a05f36f9 ),
            UINT64_C( 0x4be7aeb57af4a56a ),
            UINT64_C( 0xa09e9cd11d6ef9a7 ),
            UINT64_C( 0x91ecc28674a929a ),
            UINT64_C( 0xad2c90bc1f89d87f ),
            UINT64_C( 0xbf25df5f95456364 ),
            UINT64_C( 0x7b104f2289b28c07 ),
            UINT64_C( 0x902272c148ddc16d ),
            UINT64_C( 0x3285c7b614a096f3 ),
            UINT64_C( 0x6491973c285a2f0f ),
            UINT64_C( 0x31f84ba2ce5e3755 ),
            UINT64_C( 0x3300c615947fd40c ),
            UINT64_C( 0x3c4747adf437f115 ),
            UINT64_C( 0x4fa56d556527742 ),
            UINT64_C( 0xd7b45d6644b42059 ),
            UINT64_C( 0x4cdea756d6091a28 ),
            UINT64_C( 0x2431ed986745785b ),
#endif // ( PMPML_CHUNK_SIZE_64 > 64 )
#if ( PMPML_CHUNK_SIZE_64 > 128 )
#error VALUES NOT GENERATED for PMPML_CHUNK_SIZE_64 > 128
#endif // ( PMPML_CHUNK_SIZE_64 > 128 )

        },
    },
#endif // ( PMPML_LEVELS_64 > 6 )

#if ( PMPML_LEVELS_64 > 7 )
    // Level 7
    {
        UINT64_C( 0x1249b1f513689151 ),
        UINT64_C( 0xc658fcfbfabe77d5 ), UINT64_C( 0x000000042 ), 0, // sum of coeff and dummy
        {
#if ( PMPML_CHUNK_SIZE_64 > 0 )
            UINT64_C( 0xabaaefde77273dcd ),
#endif // ( PMPML_CHUNK_SIZE_64 > 0 )
#if ( PMPML_CHUNK_SIZE_64 > 1 )
            UINT64_C( 0xe737f9d4fba6ee5b ),
#endif // ( PMPML_CHUNK_SIZE_64 > 1 )
#if ( PMPML_CHUNK_SIZE_64 > 2 )
            UINT64_C( 0xc2c8521e524e50e7 ),
            UINT64_C( 0xb6347dd4ecff2e08 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 2 )
#if ( PMPML_CHUNK_SIZE_64 > 4 )
            UINT64_C( 0x81cc14e56b826c78 ),
            UINT64_C( 0x7e96733438db219f ),
            UINT64_C( 0x93f66e8959ad9a5d ),
            UINT64_C( 0xad77e6ffafdfa01b ),
#endif // ( PMPML_CHUNK_SIZE_64 > 4 )
#if ( PMPML_CHUNK_SIZE_64 > 8 )
            UINT64_C( 0x79842c77afd94c9a ),
            UINT64_C( 0xb2fe351094030a32 ),
            UINT64_C( 0x4f00838dc236276 ),
            UINT64_C( 0x1064827c937cd78b ),
            UINT64_C( 0xa914296fc9de0469 ),
            UINT64_C( 0x4a87b2d1971b2b6e ),
            UINT64_C( 0x1ef28858c6e99de6 ),
            UINT64_C( 0x23429a77bea42f46 ),
#endif // ( PMPML_CHUNK_SIZE_64 > 8 )
#if ( PMPML_CHUNK_SIZE_64 > 16 )
            UINT64_C( 0xf771817be7a38b16 ),
            UINT64_C( 0xcc348f7a13deb19a ),
            UINT64_C( 0xa91d46fb1ae97e8 ),
            UINT64_C( 0x753cdb5468c83c10 ),
            UINT64_C( 0x65cc613edbcd3f84 ),
            UINT64_C( 0xcb157fac042d9ab2 ),
            UINT64_C( 0x18e6a31aed525487 ),
            UINT64_C( 0x5924230b1281b56d ),
            UINT64_C( 0xb828c042782945ba ),
            UINT64_C( 0x2decd50526005abe ),
            UINT64_C( 0x5caa6f761c5857a ),
            UINT64_C( 0x4c93892d66de5320 ),
            UINT64_C( 0xac796b30f48a75b3 ),
            UINT64_C( 0xe11728c76eab1822 ),
            UINT64_C( 0xa59ec090b0f3ed2e ),
            UINT64_C( 0xada9c2e74edc137b ),
#endif // ( PMPML_CHUNK_SIZE_64 > 16 )
#if ( PMPML_CHUNK_SIZE_64 > 32 )
            UINT64_C( 0x4ca60d77ed9f8e0d ),
            UINT64_C( 0x6304a44de4bc4219 ),
            UINT64_C( 0x361436da34a05f49 ),
            UINT64_C( 0x97fcaec609fd08f ),
            UINT64_C( 0xf9f9ae511316dcce ),
            UINT64_C( 0xa62ca6c22fa94122 ),
            UINT64_C( 0xb32ebc94594cf9c8 ),
            UINT64_C( 0x1b673219068f53f7 ),
            UINT64_C( 0x28a8f7de358ea82b ),
            UINT64_C( 0x7d3e002bee6f572f ),
            UINT64_C( 0xbe24c789f9ddb580 ),
            UINT64_C( 0x257b24167d83acd ),
            UINT64_C( 0x5651f9ac1cfa5113 ),
            UINT64_C( 0x225aaaa55c5d72d4 ),
            UINT64_C( 0x1bb9759abf1d08b0 ),
            UINT64_C( 0x7c36896386d4f50c ),
            UINT64_C( 0xdd4ceaf465f970eb ),
            UINT64_C( 0xf349d378bfd4beb9 ),
            UINT64_C( 0xf2d9ea03c79109d8 ),
            UINT64_C( 0xe915c84fab4efd66 ),
            UINT64_C( 0xe401bb6a403813b6 ),
            UINT64_C( 0x2171265710c01426 ),
            UINT64_C( 0x6542b43cba6a4d08 ),
            UINT64_C( 0x58591c6e1250104f ),
            UINT64_C( 0x77bc044ed6c4a7a0 ),
            UINT64_C( 0x73b1a5f682fd2d52 ),
            UINT64_C( 0x6c2b7083b26b9976 ),
            UINT64_C( 0xf9e3b1347ceaaaca ),
            UINT64_C( 0xa709263b9c304a96 ),
            UINT64_C( 0x6c6fedc1e78481dc ),
            UINT64_C( 0xbec268cc818190e0 ),
            UINT64_C( 0xbafa9271d75b733b ),
#endif // ( PMPML_CHUNK_SIZE_64 > 32 )
#if ( PMPML_CHUNK_SIZE_64 > 64 )
            UINT64_C( 0xeace12cbb37fc677 ),
            UINT64_C( 0x1176816b69b51d98 ),
            UINT64_C( 0x62d28bbf94c2762d ),
            UINT64_C( 0x142b7d89bcc06043 ),
            UINT64_C( 0x8e166c13e205cc00 ),
            UINT64_C( 0xac3dcf9c75177f8e ),
            UINT64_C( 0xc75695f82b7f6c46 ),
            UINT64_C( 0xdff44c46fe5e7b6d ),
            UINT64_C( 0x932846955828d471 ),
            UINT64_C( 0x7593c5e733dca4d6 ),
            UINT64_C( 0xf1efc8ad9718ca14 ),
            UINT64_C( 0x93a618cb5b6aff34 ),
            UINT64_C( 0x1d89f5253c2f819f ),
            UINT64_C( 0x419744eb9c63d0b2 ),
            UINT64_C( 0x2b07ff7747ed7c29 ),
            UINT64_C( 0x617be6e4454749a0 ),
            UINT64_C( 0xaa24d8e4142c5bf4 ),
            UINT64_C( 0xe25d6c2fe999691d ),
            UINT64_C( 0xf78965d974e8e076 ),
            UINT64_C( 0x8e6203aa0037ae8e ),
            UINT64_C( 0x732c3a3a561c6d79 ),
            UINT64_C( 0xd61a9622b0da5c93 ),
            UINT64_C( 0xfc1c73c6152a141b ),
            UINT64_C( 0x3a4694838529e5b ),
            UINT64_C( 0x686cb297afba7101 ),
            UINT64_C( 0xbee9f55d5260fbe2 ),
            UINT64_C( 0xd53a374387aa4f2a ),
            UINT64_C( 0xc6b2494c1a96d781 ),
            UINT64_C( 0xbe8aa945ac411c10 ),
            UINT64_C( 0xbfc814fa4da90048 ),
            UINT64_C( 0xb46847e8ecaca5f4 ),
            UINT64_C( 0x83466ccfb2037365 ),
            UINT64_C( 0x39bfd895a4917200 ),
            UINT64_C( 0xfd6106ab889f9c14 ),
            UINT64_C( 0x87d80fcd94875b38 ),
            UINT64_C( 0xd05a5e75bdd29067 ),
            UINT64_C( 0xc8fbbb4d3e850e9d ),
            UINT64_C( 0xef2dc9eb5228f1ae ),
            UINT64_C( 0xc3775c3e9ac4da44 ),
            UINT64_C( 0x12004ef1609624ed ),
            UINT64_C( 0x43ec24f8c096ee25 ),
            UINT64_C( 0xeb207061723522ad ),
            UINT64_C( 0xbd3767314ad773e4 ),
            UINT64_C( 0x4b2059a2964d28f4 ),
            UINT64_C( 0xcd4522a02ed66868 ),
            UINT64_C( 0x74c6b45b4b5b5657 ),
            UINT64_C( 0x48bcc161232e14b1 ),
            UINT64_C( 0x958c3b741a54bd75 ),
            UINT64_C( 0x2f64940639fedc7d ),
            UINT64_C( 0xc1321efa1c279cc3 ),
            UINT64_C( 0x680b3866e485f15 ),
            UINT64_C( 0x5633b30c0c7c4a96 ),
            UINT64_C( 0xb5c9b8539fa9ea3c ),
            UINT64_C( 0x1fd67c7175c87172 ),
            UINT64_C( 0xe03ed40e88bcdf23 ),
            UINT64_C( 0x81a69e0147fbb776 ),
            UINT64_C( 0x244e2bf676590e87 ),
            UINT64_C( 0x8a86357137c0d611 ),
            UINT64_C( 0x4fcaad51eba3720f ),
            UINT64_C( 0x2b8b7b933f76e019 ),
            UINT64_C( 0xecff900b265d06f4 ),
            UINT64_C( 0xbc3b359d2e438bbc ),
            UINT64_C( 0x86c671b288776d9 ),
            UINT64_C( 0x652c4a2d18d847ba ),
#endif // ( PMPML_CHUNK_SIZE_64 > 64 )
#if ( PMPML_CHUNK_SIZE_64 > 128 )
#error VALUES NOT GENERATED for PMPML_CHUNK_SIZE_64 > 128
#endif // ( PMPML_CHUNK_SIZE_64 > 128 )

        },
    },
#endif // ( PMPML_LEVELS_64 > 7 )

#if ( PMPML_LEVELS_64 > 8 )
#error VALUES NOT GENERATED for PMPML_LEVELS_64 > 8
#endif // ( PMPML_LEVELS_64 > 8 )

};


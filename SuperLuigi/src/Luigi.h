//
// Created by Vandebosch Remy on 29/11/2018.
//

#ifndef GBA_SPRITE_ENGINE_PROJECT_LUIGI_H
#define GBA_SPRITE_ENGINE_PROJECT_LUIGI_H


//{{BLOCK(luigi_animation)

//======================================================================
//
//	luigi_animation, 16x192@8,
//	+ palette 256 entries, not compressed
//	+ 48 tiles Metatiled by 2x4 not compressed
//	Total size: 512 + 3072 = 3584
//
//	Time-stamp: 2018-12-07, 11:17:49
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.6
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short luigi_animationTiles[1536] __attribute__((aligned(4)))=
        {
                0xFFFF,0xFFFF,0x0808,0x1103,0xFFFF,0x08FF,0x1103,0x1411,
                0xFFFF,0x0308,0x1411,0x1414,0xFFFF,0x1108,0x1414,0x1114,
                0x08FF,0x1403,0x1114,0x0303,0x08FF,0x1411,0x0311,0x1B15,
                0x08FF,0x1103,0x1503,0x371B,0x08FF,0x0303,0x1B08,0x3725,
                0x1F11,0xFF08,0xFFFF,0xFFFF,0x371F,0x081F,0xFFFF,0xFFFF,
                0x371F,0x081F,0xFFFF,0xFFFF,0x0303,0x0303,0xFF08,0xFFFF,
                0x1B08,0x0308,0x0803,0xFFFF,0x2525,0x0825,0xFF08,0xFFFF,
                0x2537,0x0837,0xFFFF,0xFFFF,0x2502,0x0802,0xFFFF,0xFFFF,

                0x08FF,0x251B,0x1508,0x3725,0x08FF,0x251B,0x0808,0x2525,
                0x08FF,0x1B15,0x151B,0x0108,0xFFFF,0x0808,0x1B08,0x0815,
                0xFFFF,0x08FF,0x1508,0x151B,0xFFFF,0xFFFF,0x0808,0x2515,
                0xFFFF,0xFFFF,0x08FF,0x1B08,0xFFFF,0xFFFF,0x0308,0x0302,
                0x1B02,0x0802,0xFF08,0xFFFF,0x1B1B,0x2525,0x081B,0xFFFF,
                0x2501,0x3725,0x0825,0xFFFF,0x0101,0x1B15,0x0815,0xFFFF,
                0x0108,0x0101,0xFF08,0xFFFF,0x1B25,0xFF08,0xFFFF,0xFFFF,
                0x081B,0xFFFF,0xFFFF,0xFFFF,0x0802,0xFFFF,0xFFFF,0xFFFF,

                0xFFFF,0x08FF,0x1403,0x110F,0xFFFF,0x0308,0x1414,0x0F11,
                0xFFFF,0x1108,0x1114,0x0203,0x08FF,0x1103,0x1114,0x1E0F,
                0x08FF,0x1F03,0x031F,0x1E0F,0x08FF,0x371F,0x3737,0x020F,
                0x08FF,0x371F,0x3737,0x0F1F,0x08FF,0x1F1F,0x3737,0x0F1F,
                0x0F11,0xFF08,0xFFFF,0xFFFF,0x1414,0x0810,0xFFFF,0xFFFF,
                0x1410,0x0F02,0xFF08,0xFFFF,0x021E,0x1E02,0xFF08,0xFFFF,
                0x0F1E,0x1E0F,0x0811,0xFFFF,0x100F,0x0210,0x081F,0xFFFF,
                0x1010,0x020F,0x081F,0xFFFF,0x0F0F,0x1F02,0x081F,0xFFFF,

                0xFFFF,0x1F08,0x3737,0x1002,0xFFFF,0x1F08,0x021F,0x100F,
                0xFFFF,0x08FF,0x0F08,0x0F10,0xFFFF,0xFFFF,0x0F08,0x0F10,
                0xFFFF,0xFFFF,0x0F08,0x0F10,0xFFFF,0xFFFF,0x1508,0x1515,
                0xFFFF,0x08FF,0x1515,0x1B15,0xFFFF,0x08FF,0x1515,0x1515,
                0x0202,0x1F02,0xFF08,0xFFFF,0x0F02,0x1F02,0xFF08,0xFFFF,
                0x0F02,0x0808,0xFFFF,0xFFFF,0x0F02,0xFF08,0xFFFF,0xFFFF,
                0x0F02,0xFF08,0xFFFF,0xFFFF,0x1508,0x0815,0xFFFF,0xFFFF,
                0x0815,0x151B,0xFF08,0xFFFF,0x0815,0x1515,0xFF08,0xFFFF,

                0xFFFF,0xFFFF,0x0808,0x1103,0xFFFF,0x08FF,0x1103,0x1411,
                0xFFFF,0x0308,0x1411,0x1414,0xFFFF,0x1108,0x1414,0x1114,
                0x08FF,0x1403,0x1114,0x0403,0x08FF,0x1411,0x0311,0x2218,
                0x08FF,0x1103,0x1603,0x3723,0x08FF,0x0303,0x1B08,0x3734,
                0x3212,0xFF0C,0xFFFF,0xFFFF,0x3731,0x0933,0xFFFF,0xFFFF,
                0x3730,0x0931,0xFFFF,0xFFFF,0x1306,0x0407,0xFF08,0xFFFF,
                0x200A,0x050B,0x0803,0xFFFF,0x2A2F,0x0E2E,0xFF09,0xFFFF,
                0x3537,0x1A37,0xFFFF,0xFFFF,0x2902,0x0D02,0xFFFF,0xFFFF,

                0x08FF,0x251B,0x1508,0x372C,0x08FF,0x251B,0x0808,0x2B27,
                0x08FF,0x1B15,0x151B,0x0108,0xFFFF,0x0808,0x1B08,0x0815,
                0xFFFF,0x08FF,0x1508,0x151B,0xFFFF,0xFFFF,0x0808,0x2515,
                0xFFFF,0xFFFF,0x08FF,0x1B08,0xFFFF,0xFFFF,0x0308,0x0302,
                0x1C02,0x0902,0xFF08,0xFFFF,0x1B1D,0x2E28,0x081D,0xFFFF,
                0x2601,0x372E,0x082D,0xFFFF,0x0101,0x2119,0x0817,0xFFFF,
                0x0108,0x0101,0xFF08,0xFFFF,0x1B25,0xFF08,0xFFFF,0xFFFF,
                0x081B,0xFFFF,0xFFFF,0xFFFF,0x0802,0xFFFF,0xFFFF,0xFFFF,

                0xFFFF,0x08FF,0x1403,0x110F,0xFFFF,0x08FF,0x1114,0x0F03,
                0xFFFF,0x0308,0x0314,0x0203,0xFFFF,0x1108,0x1114,0x1F1F,
                0xFFFF,0x0308,0x1F14,0x3737,0xFFFF,0x0308,0x1F11,0x3737,
                0xFFFF,0x08FF,0x1F03,0x371F,0xFFFF,0xFFFF,0x0208,0x371F,
                0x0F11,0xFF08,0xFFFF,0xFFFF,0x1414,0x0810,0xFFFF,0xFFFF,
                0x1410,0x0814,0xFFFF,0xFFFF,0x1E1E,0x0202,0xFF08,0xFFFF,
                0x1E37,0x0F0F,0xFF08,0xFFFF,0x1037,0x0210,0xFF08,0xFFFF,
                0x1037,0x080F,0xFFFF,0xFFFF,0x0F37,0x0F10,0xFF08,0xFFFF,

                0xFFFF,0xFFFF,0x0F08,0x020F,0xFFFF,0xFFFF,0x0F08,0x020F,
                0xFFFF,0x08FF,0x0F02,0x080F,0xFFFF,0x08FF,0x0F0F,0x080F,
                0xFFFF,0x08FF,0x0F0F,0xFF08,0xFFFF,0x1508,0x0F02,0xFF08,
                0xFFFF,0x1508,0x1515,0xFF08,0xFFFF,0x1508,0x1515,0x0815,
                0x0202,0x100F,0xFF08,0xFFFF,0x0808,0x1002,0x0808,0xFF08,
                0x08FF,0x1002,0x1B15,0x0815,0x08FF,0x1502,0x1515,0x0815,
                0x08FF,0x1515,0x1B1B,0x081B,0x08FF,0x1B1B,0x081B,0xFF08,
                0xFFFF,0x0808,0xFF08,0xFFFF,0x0808,0x0808,0xFF08,0xFFFF,

                0xFFFF,0xFFFF,0x0808,0x1103,0xFFFF,0x08FF,0x1103,0x1411,
                0xFFFF,0x0308,0x1411,0x1414,0xFFFF,0x1108,0x1414,0x1114,
                0x08FF,0x1403,0x1114,0x0303,0x08FF,0x1411,0x0311,0x1B15,
                0x08FF,0x1103,0x1503,0x371B,0x08FF,0x0303,0x1B08,0x3725,
                0x1F11,0xFF08,0xFFFF,0xFFFF,0x371F,0x081F,0xFFFF,0xFFFF,
                0x371F,0x081F,0xFFFF,0xFFFF,0x0303,0x0303,0xFF08,0xFFFF,
                0x1B08,0x0308,0x0803,0xFFFF,0x2525,0x0825,0xFF08,0xFFFF,
                0x2537,0x0837,0xFFFF,0xFFFF,0x2502,0x0802,0xFFFF,0xFFFF,

                0x08FF,0x251B,0x1508,0x3725,0x08FF,0x251B,0x0808,0x2525,
                0x08FF,0x1B15,0x151B,0x0108,0xFFFF,0x0808,0x1B08,0x0815,
                0xFFFF,0x08FF,0x1508,0x151B,0xFFFF,0xFFFF,0x0808,0x2515,
                0xFFFF,0xFFFF,0x08FF,0x1B08,0xFFFF,0xFFFF,0x0308,0x0302,
                0x1B02,0x0802,0xFF08,0xFFFF,0x1B1B,0x2525,0x081B,0xFFFF,
                0x2501,0x3725,0x0825,0xFFFF,0x0101,0x1B15,0x0815,0xFFFF,
                0x0108,0x0101,0xFF08,0xFFFF,0x1B25,0xFF08,0xFFFF,0xFFFF,
                0x081B,0xFFFF,0xFFFF,0xFFFF,0x0802,0xFFFF,0xFFFF,0xFFFF,

                0xFFFF,0x08FF,0x1403,0x110F,0xFFFF,0x0308,0x1414,0x0F11,
                0xFFFF,0x1108,0x1114,0x0203,0x08FF,0x1103,0x1114,0x1E0F,
                0x08FF,0x1F03,0x031F,0x1E0F,0x08FF,0x371F,0x3737,0x020F,
                0x08FF,0x371F,0x3737,0x0F1F,0x08FF,0x1F1F,0x3737,0x0F1F,
                0x0F11,0xFF08,0xFFFF,0xFFFF,0x1414,0x0810,0xFFFF,0xFFFF,
                0x1410,0x0F02,0xFF08,0xFFFF,0x021E,0x1E02,0xFF08,0xFFFF,
                0x0F1E,0x1E0F,0x0811,0xFFFF,0x100F,0x0210,0x081F,0xFFFF,
                0x1010,0x020F,0x081F,0xFFFF,0x0F0F,0x1F02,0x081F,0xFFFF,

                0xFFFF,0x1F08,0x3737,0x1002,0xFFFF,0x1F08,0x021F,0x100F,
                0xFFFF,0x08FF,0x0F08,0x0F10,0xFFFF,0xFFFF,0x0F08,0x0F10,
                0xFFFF,0xFFFF,0x0F08,0x0F10,0xFFFF,0xFFFF,0x1508,0x1515,
                0xFFFF,0x08FF,0x1515,0x1B15,0xFFFF,0x08FF,0x1515,0x1515,
                0x0202,0x1F02,0xFF08,0xFFFF,0x0F02,0x1F02,0xFF08,0xFFFF,
                0x0F02,0x0808,0xFFFF,0xFFFF,0x0F02,0xFF08,0xFFFF,0xFFFF,
                0x0F02,0xFF08,0xFFFF,0xFFFF,0x1508,0x0815,0xFFFF,0xFFFF,
                0x0815,0x151B,0xFF08,0xFFFF,0x0815,0x1515,0xFF08,0xFFFF,

                0xFFFF,0xFFFF,0x0808,0x1103,0xFFFF,0x08FF,0x1103,0x1411,
                0xFFFF,0x0308,0x1411,0x1414,0xFFFF,0x1108,0x1414,0x1114,
                0x08FF,0x1403,0x1114,0x0303,0x08FF,0x1411,0x0311,0x1B15,
                0x08FF,0x1103,0x1503,0x371B,0x08FF,0x0303,0x1B08,0x3725,
                0x1F11,0xFF08,0xFFFF,0xFFFF,0x371F,0x081F,0xFFFF,0xFFFF,
                0x371F,0x081F,0xFFFF,0xFFFF,0x0303,0x0303,0xFF08,0xFFFF,
                0x1B08,0x0308,0x0803,0xFFFF,0x2525,0x0825,0xFF08,0xFFFF,
                0x2537,0x0837,0xFFFF,0xFFFF,0x2502,0x0802,0xFFFF,0xFFFF,

                0x08FF,0x251B,0x1508,0x3725,0x08FF,0x251B,0x0808,0x2525,
                0x08FF,0x1B15,0x151B,0x0108,0xFFFF,0x0808,0x1B08,0x0815,
                0xFFFF,0x08FF,0x1508,0x151B,0xFFFF,0xFFFF,0x0808,0x2515,
                0xFFFF,0xFFFF,0x08FF,0x1B08,0xFFFF,0xFFFF,0x0308,0x0302,
                0x1B02,0x0802,0xFF08,0xFFFF,0x1B1B,0x2525,0x081B,0xFFFF,
                0x2501,0x3725,0x0825,0xFFFF,0x0101,0x1B15,0x0815,0xFFFF,
                0x0108,0x0101,0xFF08,0xFFFF,0x1B25,0xFF08,0xFFFF,0xFFFF,
                0x081B,0xFFFF,0xFFFF,0xFFFF,0x0302,0xFF08,0xFFFF,0xFFFF,

                0xFFFF,0x08FF,0x1403,0x110F,0xFFFF,0x0308,0x1114,0x1010,
                0x08FF,0x1403,0x0311,0x0202,0x08FF,0x111F,0x0203,0x1E1E,
                0x1F08,0x3737,0x0F02,0x1E1E,0x1F08,0x3737,0x0F1F,0x020F,
                0x1F08,0x3737,0x0F1F,0x0F0F,0x1F08,0x3737,0x0F1F,0x0F0F,
                0x0F11,0x0803,0xFFFF,0xFFFF,0x1414,0x1110,0xFF08,0xFFFF,
                0x1414,0x0F02,0x0803,0xFFFF,0x0202,0x1E1E,0x1F03,0xFF08,
                0x0F0F,0x1E1E,0x1F1F,0x081F,0x1010,0x020F,0x1F1F,0x081F,
                0x1010,0x020F,0x1F1F,0x081F,0x0210,0x1F02,0x1F1F,0xFF08,

                0x08FF,0x1F1F,0x0202,0x0F0F,0xFFFF,0x0808,0x0208,0x0F02,
                0xFFFF,0xFFFF,0x0208,0x0F02,0xFFFF,0xFFFF,0x0208,0x0F02,
                0xFFFF,0x08FF,0x0202,0x1502,0xFFFF,0x08FF,0x0202,0x1B02,
                0xFFFF,0x08FF,0x1515,0x0802,0xFFFF,0x08FF,0x1515,0x1515,
                0x100F,0x0802,0x0808,0xFFFF,0x100F,0x0808,0xFFFF,0xFFFF,
                0x150F,0x151B,0xFF08,0xFFFF,0x1515,0x1515,0xFF08,0xFFFF,
                0x1B15,0x1B1B,0xFF08,0xFFFF,0x1B1B,0x0808,0xFFFF,0xFFFF,
                0x0808,0xFFFF,0xFFFF,0xFFFF,0x0808,0xFFFF,0xFFFF,0xFFFF,

                0xFFFF,0xFFFF,0x0808,0x1103,0xFFFF,0x08FF,0x1103,0x1411,
                0xFFFF,0x0308,0x1411,0x1414,0xFFFF,0x1108,0x1414,0x1114,
                0x08FF,0x1403,0x1114,0x0303,0x08FF,0x1411,0x0311,0x1B15,
                0x08FF,0x1103,0x1503,0x371B,0x08FF,0x0303,0x1B08,0x3725,
                0x1F11,0xFF08,0xFFFF,0xFFFF,0x371F,0x081F,0xFFFF,0xFFFF,
                0x371F,0x081F,0xFFFF,0xFFFF,0x0303,0x0303,0xFF08,0xFFFF,
                0x1B08,0x0308,0x0803,0xFFFF,0x2525,0x0825,0xFF08,0xFFFF,
                0x2537,0x0837,0xFFFF,0xFFFF,0x2502,0x0802,0xFFFF,0xFFFF,

                0x08FF,0x251B,0x1508,0x3725,0x08FF,0x251B,0x0808,0x2525,
                0x08FF,0x1B15,0x151B,0x0108,0xFFFF,0x0808,0x1B08,0x0815,
                0xFFFF,0x08FF,0x1508,0x151B,0xFFFF,0xFFFF,0x0808,0x2515,
                0xFFFF,0xFFFF,0x08FF,0x1B08,0xFFFF,0xFFFF,0x0308,0x0302,
                0x1B02,0x0802,0xFF08,0xFFFF,0x1B1B,0x2525,0x081B,0xFFFF,
                0x2501,0x3725,0x0825,0xFFFF,0x0101,0x1B15,0x0815,0xFFFF,
                0x0108,0x0101,0xFF08,0xFFFF,0x1B25,0xFF08,0xFFFF,0xFFFF,
                0x081B,0xFFFF,0xFFFF,0xFFFF,0x0802,0xFFFF,0xFFFF,0xFFFF,

                0xFFFF,0x08FF,0x1403,0x110F,0xFFFF,0x0308,0x1414,0x0F11,
                0xFFFF,0x1108,0x1114,0x0203,0x08FF,0x1103,0x1114,0x1E0F,
                0x08FF,0x1F03,0x031F,0x1E0F,0x08FF,0x371F,0x3737,0x020F,
                0x08FF,0x371F,0x3737,0x0F1F,0x08FF,0x1F1F,0x3737,0x0F1F,
                0x0F11,0xFF08,0xFFFF,0xFFFF,0x1414,0x0810,0xFFFF,0xFFFF,
                0x1410,0x0F02,0xFF08,0xFFFF,0x021E,0x1E02,0xFF08,0xFFFF,
                0x0F1E,0x1E0F,0x0811,0xFFFF,0x100F,0x0210,0x081F,0xFFFF,
                0x1010,0x020F,0x081F,0xFFFF,0x0F0F,0x1F02,0x081F,0xFFFF,

                0xFFFF,0x1F08,0x3737,0x1002,0xFFFF,0x1F08,0x021F,0x100F,
                0xFFFF,0x08FF,0x0F08,0x0F10,0xFFFF,0xFFFF,0x0F08,0x0F10,
                0xFFFF,0xFFFF,0x0F08,0x0F10,0xFFFF,0xFFFF,0x1508,0x1515,
                0xFFFF,0x08FF,0x1515,0x1B15,0xFFFF,0x08FF,0x1515,0x1515,
                0x0202,0x1F02,0xFF08,0xFFFF,0x0F02,0x1F02,0xFF08,0xFFFF,
                0x0F02,0x0808,0xFFFF,0xFFFF,0x0F02,0xFF08,0xFFFF,0xFFFF,
                0x0F02,0xFF08,0xFFFF,0xFFFF,0x1508,0x0815,0xFFFF,0xFFFF,
                0x0815,0x151B,0xFF08,0xFFFF,0x0815,0x1515,0xFF08,0xFFFF,

                0xFFFF,0xFFFF,0x08FF,0x0808,0xFFFF,0x08FF,0x0308,0x1111,
                0xFFFF,0x0308,0x1111,0x1F14,0x08FF,0x1103,0x1414,0x1F14,
                0x08FF,0x1411,0x1414,0x0311,0x0308,0x1411,0x0311,0x0803,
                0x1108,0x1114,0x1503,0x251B,0x0308,0x0311,0x1B15,0x3636,
                0xFF08,0xFFFF,0xFFFF,0xFFFF,0x081F,0xFFFF,0xFFFF,0xFFFF,
                0x1F36,0xFF08,0xFFFF,0xFFFF,0x1F36,0xFF08,0xFFFF,0xFFFF,
                0x0303,0x0803,0xFFFF,0xFFFF,0x081B,0x0303,0xFF08,0xFFFF,
                0x2525,0x0808,0xFFFF,0xFFFF,0x3625,0xFF08,0xFFFF,0xFFFF,

                0x0308,0x0803,0x251B,0x0236,0x1B08,0x0825,0x2515,0x0236,
                0x1B08,0x0825,0x2508,0x1B25,0x1508,0x1B1B,0x0815,0x0101,
                0x08FF,0x0808,0x151B,0x0108,0xFFFF,0x0808,0x1B15,0x0815,
                0xFFFF,0xFFFF,0x2408,0x361F,0xFFFF,0x08FF,0x1F03,0x3636,
                0x0225,0xFF08,0xFFFF,0xFFFF,0x021B,0x0808,0xFFFF,0xFFFF,
                0x251B,0x1B25,0xFF08,0xFFFF,0x2525,0x2536,0xFF08,0xFFFF,
                0x1501,0x151B,0xFF08,0xFFFF,0x0101,0x0801,0xFFFF,0xFFFF,
                0x081F,0xFF01,0xFFFF,0xFFFF,0x1F36,0xFF08,0xFFFF,0xFFFF,

                0xFFFF,0x0308,0x3611,0x3636,0xFFFF,0x1108,0x1F11,0x3636,
                0xFFFF,0x1108,0x0311,0x361F,0xFFFF,0x0308,0x1111,0x1003,
                0xFFFF,0x08FF,0x0303,0x100F,0xFFFF,0x0808,0x0F02,0x1010,
                0x08FF,0x1515,0x0F08,0x1010,0x1508,0x0215,0x0F02,0x0F10,
                0x1F36,0xFF08,0xFFFF,0xFFFF,0x1F1F,0xFF08,0xFFFF,0xFFFF,
                0x0F1F,0x081E,0xFF08,0xFFFF,0x0F0F,0x1002,0x080F,0xFFFF,
                0x1010,0x0F0F,0x0810,0xFF08,0x0F10,0x0F02,0x1510,0x0815,
                0x020F,0x0F02,0x1515,0x1515,0x0808,0x0208,0x1B15,0x1B1B,

                0x1508,0x0215,0x0F02,0x0810,0x1508,0x0215,0x0F02,0x080F,
                0x1508,0x0815,0x0202,0xFF08,0x1508,0x1515,0x0808,0xFFFF,
                0x08FF,0x0808,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
                0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
                0xFFFF,0x1508,0x1B15,0x1B1B,0xFFFF,0x1508,0x1B1B,0x081B,
                0xFFFF,0x1B08,0x1B1B,0xFF08,0xFFFF,0x08FF,0x0808,0xFFFF,
                0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
                0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,0xFFFF,
        };

const unsigned short luigi_animationPal[256] __attribute__((aligned(4)))=
        {
                0x0000,0x14A5,0x38E6,0x01C1,0x01C1,0x01C1,0x0DE3,0x0DE4,
                0x14EA,0x14EA,0x14EA,0x190A,0x190B,0x1D2B,0x214C,0x4D28,
                0x618B,0x0A64,0x0E65,0x36AD,0x1308,0x21B9,0x21B9,0x25B9,
                0x25B9,0x25D9,0x3E12,0x3E7E,0x3E7E,0x3E7E,0x179D,0x6ED7,
                0x427E,0x52FE,0x52FE,0x56FE,0x4F58,0x4F3F,0x4F3F,0x4F3F,
                0x4F3F,0x533F,0x575F,0x5B5F,0x5B7F,0x5F7F,0x5F7F,0x5F7F,
                0x7319,0x7339,0x733A,0x733A,0x637F,0x679F,0x7FFF,0x7FFF,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
                0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
        };

//}}BLOCK(luigi_animation)



#endif //GBA_SPRITE_ENGINE_PROJECT_LUIGI_H

#ifndef SURPRISE_H
#define SURPRISE_H

#include "frame_set.h"

struct Surprise: public Frame_set {
    void set_leds(CRGB leds[Lights_constants::NUMBER_OF_LEDS])const{
        switch(current_frame){
            case 0:
                leds[1] = CRGB{255,0,0};
                leds[2] = CRGB{255,0,0};
                leds[3] = CRGB{255,0,0};
                leds[4] = CRGB{255,0,0};
                leds[7] = CRGB{255,0,0};
                leds[8] = CRGB{255,0,0};
                leds[11] = CRGB{255,0,0};
                leds[12] = CRGB{255,0,0};
                leds[13] = CRGB{255,0,0};
                leds[14] = CRGB{255,0,0};
                leds[16] = CRGB{255,0,0};
                leds[17] = CRGB{255,0,0};
                leds[18] = CRGB{255,0,0};
                leds[19] = CRGB{255,0,0};
                leds[20] = CRGB{255,0,0};
                leds[21] = CRGB{255,0,0};
                leds[23] = CRGB{255,0,0};
                leds[24] = CRGB{255,0,0};
                leds[26] = CRGB{255,0,0};
                leds[27] = CRGB{255,0,0};
                leds[28] = CRGB{255,0,0};
                leds[29] = CRGB{255,0,0};
                leds[30] = CRGB{255,0,0};
                leds[31] = CRGB{255,0,0};
                leds[32] = CRGB{255,0,0};
                leds[33] = CRGB{255,0,0};
                leds[36] = CRGB{255,0,0};
                leds[37] = CRGB{255,0,0};
                leds[39] = CRGB{255,0,0};
                leds[40] = CRGB{255,0,0};
                leds[42] = CRGB{255,0,0};
                leds[43] = CRGB{255,0,0};
                leds[46] = CRGB{255,0,0};
                leds[47] = CRGB{255,0,0};
                leds[48] = CRGB{255,0,0};
                leds[49] = CRGB{255,0,0};
                leds[52] = CRGB{255,0,0};
                leds[53] = CRGB{255,0,0};
                leds[55] = CRGB{255,0,0};
                leds[56] = CRGB{255,0,0};
                leds[58] = CRGB{255,0,0};
                leds[59] = CRGB{255,0,0};
                leds[62] = CRGB{255,0,0};
                leds[63] = CRGB{255,0,0};
                leds[68] = CRGB{255,0,0};
                leds[69] = CRGB{255,0,0};
                leds[71] = CRGB{255,0,0};
                leds[72] = CRGB{255,0,0};
                leds[78] = CRGB{255,0,0};
                leds[79] = CRGB{255,0,0};
                leds[83] = CRGB{255,0,0};
                leds[84] = CRGB{255,0,0};
                leds[85] = CRGB{255,0,0};
                leds[87] = CRGB{255,0,0};
                leds[88] = CRGB{255,0,0};
                leds[93] = CRGB{255,0,0};
                leds[94] = CRGB{255,0,0};
                leds[95] = CRGB{255,0,0};
                leds[98] = CRGB{255,0,0};
                leds[99] = CRGB{255,0,0};
                leds[100] = CRGB{255,0,0};
                leds[103] = CRGB{255,0,0};
                leds[104] = CRGB{255,0,0};
                leds[108] = CRGB{255,0,0};
                leds[109] = CRGB{255,0,0};
                leds[110] = CRGB{255,0,0};
                leds[114] = CRGB{255,0,0};
                leds[115] = CRGB{255,0,0};
                leds[119] = CRGB{255,0,0};
                leds[120] = CRGB{255,0,0};
                leds[124] = CRGB{255,0,0};
                leds[125] = CRGB{255,0,0};
                leds[130] = CRGB{255,0,0};
                leds[131] = CRGB{255,0,0};
                leds[135] = CRGB{255,0,0};
                leds[136] = CRGB{255,0,0};
                leds[140] = CRGB{255,0,0};
                leds[141] = CRGB{255,0,0};
                leds[162] = CRGB{255,0,0};
                leds[163] = CRGB{255,0,0};
                leds[167] = CRGB{255,0,0};
                leds[168] = CRGB{255,0,0};
                leds[172] = CRGB{255,0,0};
                leds[173] = CRGB{255,0,0};
                leds[178] = CRGB{255,0,0};
                leds[179] = CRGB{255,0,0};
                leds[183] = CRGB{255,0,0};
                leds[184] = CRGB{255,0,0};
                leds[188] = CRGB{255,0,0};
                leds[189] = CRGB{255,0,0};
                return;
            case 1:
                leds[0] = CRGB{255,0,0};
                leds[1] = CRGB{255,0,0};
                leds[2] = CRGB{255,0,0};
                leds[3] = CRGB{255,0,0};
                leds[6] = CRGB{255,0,0};
                leds[7] = CRGB{255,0,0};
                leds[10] = CRGB{255,0,0};
                leds[11] = CRGB{255,0,0};
                leds[12] = CRGB{255,0,0};
                leds[13] = CRGB{255,0,0};
                leds[16] = CRGB{255,0,0};
                leds[17] = CRGB{255,0,0};
                leds[18] = CRGB{255,0,0};
                leds[19] = CRGB{255,0,0};
                leds[20] = CRGB{255,0,0};
                leds[22] = CRGB{255,0,0};
                leds[23] = CRGB{255,0,0};
                leds[25] = CRGB{255,0,0};
                leds[26] = CRGB{255,0,0};
                leds[27] = CRGB{255,0,0};
                leds[28] = CRGB{255,0,0};
                leds[29] = CRGB{255,0,0};
                leds[30] = CRGB{255,0,0};
                leds[32] = CRGB{255,0,0};
                leds[35] = CRGB{255,0,0};
                leds[36] = CRGB{255,0,0};
                leds[38] = CRGB{255,0,0};
                leds[39] = CRGB{255,0,0};
                leds[41] = CRGB{255,0,0};
                leds[42] = CRGB{255,0,0};
                leds[45] = CRGB{255,0,0};
                leds[46] = CRGB{255,0,0};
                leds[48] = CRGB{255,0,0};
                leds[51] = CRGB{255,0,0};
                leds[52] = CRGB{255,0,0};
                leds[54] = CRGB{255,0,0};
                leds[55] = CRGB{255,0,0};
                leds[57] = CRGB{255,0,0};
                leds[58] = CRGB{255,0,0};
                leds[61] = CRGB{255,0,0};
                leds[62] = CRGB{255,0,0};
                leds[67] = CRGB{255,0,0};
                leds[68] = CRGB{255,0,0};
                leds[70] = CRGB{255,0,0};
                leds[71] = CRGB{255,0,0};
                leds[77] = CRGB{255,0,0};
                leds[78] = CRGB{255,0,0};
                leds[82] = CRGB{255,0,0};
                leds[83] = CRGB{255,0,0};
                leds[84] = CRGB{255,0,0};
                leds[86] = CRGB{255,0,0};
                leds[87] = CRGB{255,0,0};
                leds[92] = CRGB{255,0,0};
                leds[93] = CRGB{255,0,0};
                leds[94] = CRGB{255,0,0};
                leds[97] = CRGB{255,0,0};
                leds[98] = CRGB{255,0,0};
                leds[99] = CRGB{255,0,0};
                leds[102] = CRGB{255,0,0};
                leds[103] = CRGB{255,0,0};
                leds[107] = CRGB{255,0,0};
                leds[108] = CRGB{255,0,0};
                leds[109] = CRGB{255,0,0};
                leds[113] = CRGB{255,0,0};
                leds[114] = CRGB{255,0,0};
                leds[118] = CRGB{255,0,0};
                leds[119] = CRGB{255,0,0};
                leds[123] = CRGB{255,0,0};
                leds[124] = CRGB{255,0,0};
                leds[129] = CRGB{255,0,0};
                leds[130] = CRGB{255,0,0};
                leds[134] = CRGB{255,0,0};
                leds[135] = CRGB{255,0,0};
                leds[139] = CRGB{255,0,0};
                leds[140] = CRGB{255,0,0};
                leds[161] = CRGB{255,0,0};
                leds[162] = CRGB{255,0,0};
                leds[166] = CRGB{255,0,0};
                leds[167] = CRGB{255,0,0};
                leds[171] = CRGB{255,0,0};
                leds[172] = CRGB{255,0,0};
                leds[177] = CRGB{255,0,0};
                leds[178] = CRGB{255,0,0};
                leds[182] = CRGB{255,0,0};
                leds[183] = CRGB{255,0,0};
                leds[187] = CRGB{255,0,0};
                leds[188] = CRGB{255,0,0};
                return;
            case 2:
                leds[0] = CRGB{255,0,0};
                leds[1] = CRGB{255,0,0};
                leds[2] = CRGB{255,0,0};
                leds[5] = CRGB{255,0,0};
                leds[6] = CRGB{255,0,0};
                leds[9] = CRGB{255,0,0};
                leds[10] = CRGB{255,0,0};
                leds[11] = CRGB{255,0,0};
                leds[12] = CRGB{255,0,0};
                leds[15] = CRGB{255,0,0};
                leds[16] = CRGB{255,0,0};
                leds[17] = CRGB{255,0,0};
                leds[18] = CRGB{255,0,0};
                leds[19] = CRGB{255,0,0};
                leds[21] = CRGB{255,0,0};
                leds[22] = CRGB{255,0,0};
                leds[24] = CRGB{255,0,0};
                leds[25] = CRGB{255,0,0};
                leds[26] = CRGB{255,0,0};
                leds[27] = CRGB{255,0,0};
                leds[28] = CRGB{255,0,0};
                leds[29] = CRGB{255,0,0};
                leds[31] = CRGB{255,0,0};
                leds[34] = CRGB{255,0,0};
                leds[35] = CRGB{255,0,0};
                leds[37] = CRGB{255,0,0};
                leds[38] = CRGB{255,0,0};
                leds[40] = CRGB{255,0,0};
                leds[41] = CRGB{255,0,0};
                leds[44] = CRGB{255,0,0};
                leds[45] = CRGB{255,0,0};
                leds[47] = CRGB{255,0,0};
                leds[50] = CRGB{255,0,0};
                leds[51] = CRGB{255,0,0};
                leds[53] = CRGB{255,0,0};
                leds[54] = CRGB{255,0,0};
                leds[56] = CRGB{255,0,0};
                leds[57] = CRGB{255,0,0};
                leds[60] = CRGB{255,0,0};
                leds[61] = CRGB{255,0,0};
                leds[63] = CRGB{255,0,0};
                leds[66] = CRGB{255,0,0};
                leds[67] = CRGB{255,0,0};
                leds[69] = CRGB{255,0,0};
                leds[70] = CRGB{255,0,0};
                leds[76] = CRGB{255,0,0};
                leds[77] = CRGB{255,0,0};
                leds[79] = CRGB{255,0,0};
                leds[81] = CRGB{255,0,0};
                leds[82] = CRGB{255,0,0};
                leds[83] = CRGB{255,0,0};
                leds[85] = CRGB{255,0,0};
                leds[86] = CRGB{255,0,0};
                leds[91] = CRGB{255,0,0};
                leds[92] = CRGB{255,0,0};
                leds[93] = CRGB{255,0,0};
                leds[95] = CRGB{255,0,0};
                leds[96] = CRGB{255,0,0};
                leds[97] = CRGB{255,0,0};
                leds[98] = CRGB{255,0,0};
                leds[101] = CRGB{255,0,0};
                leds[102] = CRGB{255,0,0};
                leds[106] = CRGB{255,0,0};
                leds[107] = CRGB{255,0,0};
                leds[108] = CRGB{255,0,0};
                leds[111] = CRGB{255,0,0};
                leds[112] = CRGB{255,0,0};
                leds[113] = CRGB{255,0,0};
                leds[117] = CRGB{255,0,0};
                leds[118] = CRGB{255,0,0};
                leds[122] = CRGB{255,0,0};
                leds[123] = CRGB{255,0,0};
                leds[127] = CRGB{255,0,0};
                leds[128] = CRGB{255,0,0};
                leds[129] = CRGB{255,0,0};
                leds[133] = CRGB{255,0,0};
                leds[134] = CRGB{255,0,0};
                leds[138] = CRGB{255,0,0};
                leds[139] = CRGB{255,0,0};
                leds[143] = CRGB{255,0,0};
                leds[160] = CRGB{255,0,0};
                leds[161] = CRGB{255,0,0};
                leds[165] = CRGB{255,0,0};
                leds[166] = CRGB{255,0,0};
                leds[170] = CRGB{255,0,0};
                leds[171] = CRGB{255,0,0};
                leds[175] = CRGB{255,0,0};
                leds[176] = CRGB{255,0,0};
                leds[177] = CRGB{255,0,0};
                leds[181] = CRGB{255,0,0};
                leds[182] = CRGB{255,0,0};
                leds[186] = CRGB{255,0,0};
                leds[187] = CRGB{255,0,0};
                leds[191] = CRGB{255,0,0};
                return;
            case 3:
                leds[0] = CRGB{255,0,0};
                leds[1] = CRGB{255,0,0};
                leds[4] = CRGB{255,0,0};
                leds[5] = CRGB{255,0,0};
                leds[8] = CRGB{255,0,0};
                leds[9] = CRGB{255,0,0};
                leds[10] = CRGB{255,0,0};
                leds[11] = CRGB{255,0,0};
                leds[14] = CRGB{255,0,0};
                leds[15] = CRGB{255,0,0};
                leds[16] = CRGB{255,0,0};
                leds[17] = CRGB{255,0,0};
                leds[18] = CRGB{255,0,0};
                leds[20] = CRGB{255,0,0};
                leds[21] = CRGB{255,0,0};
                leds[23] = CRGB{255,0,0};
                leds[24] = CRGB{255,0,0};
                leds[25] = CRGB{255,0,0};
                leds[26] = CRGB{255,0,0};
                leds[27] = CRGB{255,0,0};
                leds[28] = CRGB{255,0,0};
                leds[30] = CRGB{255,0,0};
                leds[31] = CRGB{255,0,0};
                leds[33] = CRGB{255,0,0};
                leds[34] = CRGB{255,0,0};
                leds[36] = CRGB{255,0,0};
                leds[37] = CRGB{255,0,0};
                leds[39] = CRGB{255,0,0};
                leds[40] = CRGB{255,0,0};
                leds[43] = CRGB{255,0,0};
                leds[44] = CRGB{255,0,0};
                leds[46] = CRGB{255,0,0};
                leds[47] = CRGB{255,0,0};
                leds[49] = CRGB{255,0,0};
                leds[50] = CRGB{255,0,0};
                leds[52] = CRGB{255,0,0};
                leds[53] = CRGB{255,0,0};
                leds[55] = CRGB{255,0,0};
                leds[56] = CRGB{255,0,0};
                leds[59] = CRGB{255,0,0};
                leds[60] = CRGB{255,0,0};
                leds[62] = CRGB{255,0,0};
                leds[63] = CRGB{255,0,0};
                leds[65] = CRGB{255,0,0};
                leds[66] = CRGB{255,0,0};
                leds[68] = CRGB{255,0,0};
                leds[69] = CRGB{255,0,0};
                leds[75] = CRGB{255,0,0};
                leds[76] = CRGB{255,0,0};
                leds[78] = CRGB{255,0,0};
                leds[79] = CRGB{255,0,0};
                leds[80] = CRGB{255,0,0};
                leds[81] = CRGB{255,0,0};
                leds[82] = CRGB{255,0,0};
                leds[84] = CRGB{255,0,0};
                leds[85] = CRGB{255,0,0};
                leds[90] = CRGB{255,0,0};
                leds[91] = CRGB{255,0,0};
                leds[92] = CRGB{255,0,0};
                leds[94] = CRGB{255,0,0};
                leds[95] = CRGB{255,0,0};
                leds[96] = CRGB{255,0,0};
                leds[97] = CRGB{255,0,0};
                leds[100] = CRGB{255,0,0};
                leds[101] = CRGB{255,0,0};
                leds[105] = CRGB{255,0,0};
                leds[106] = CRGB{255,0,0};
                leds[107] = CRGB{255,0,0};
                leds[110] = CRGB{255,0,0};
                leds[111] = CRGB{255,0,0};
                leds[112] = CRGB{255,0,0};
                leds[116] = CRGB{255,0,0};
                leds[117] = CRGB{255,0,0};
                leds[121] = CRGB{255,0,0};
                leds[122] = CRGB{255,0,0};
                leds[126] = CRGB{255,0,0};
                leds[127] = CRGB{255,0,0};
                leds[128] = CRGB{255,0,0};
                leds[132] = CRGB{255,0,0};
                leds[133] = CRGB{255,0,0};
                leds[137] = CRGB{255,0,0};
                leds[138] = CRGB{255,0,0};
                leds[142] = CRGB{255,0,0};
                leds[143] = CRGB{255,0,0};
                leds[160] = CRGB{255,0,0};
                leds[164] = CRGB{255,0,0};
                leds[165] = CRGB{255,0,0};
                leds[169] = CRGB{255,0,0};
                leds[170] = CRGB{255,0,0};
                leds[174] = CRGB{255,0,0};
                leds[175] = CRGB{255,0,0};
                leds[176] = CRGB{255,0,0};
                leds[180] = CRGB{255,0,0};
                leds[181] = CRGB{255,0,0};
                leds[185] = CRGB{255,0,0};
                leds[186] = CRGB{255,0,0};
                leds[190] = CRGB{255,0,0};
                leds[191] = CRGB{255,0,0};
                return;
            case 4:
                leds[0] = CRGB{255,0,0};
                leds[3] = CRGB{255,0,0};
                leds[4] = CRGB{255,0,0};
                leds[7] = CRGB{255,0,0};
                leds[8] = CRGB{255,0,0};
                leds[9] = CRGB{255,0,0};
                leds[10] = CRGB{255,0,0};
                leds[13] = CRGB{255,0,0};
                leds[14] = CRGB{255,0,0};
                leds[16] = CRGB{255,0,0};
                leds[17] = CRGB{255,0,0};
                leds[19] = CRGB{255,0,0};
                leds[20] = CRGB{255,0,0};
                leds[22] = CRGB{255,0,0};
                leds[23] = CRGB{255,0,0};
                leds[24] = CRGB{255,0,0};
                leds[25] = CRGB{255,0,0};
                leds[26] = CRGB{255,0,0};
                leds[27] = CRGB{255,0,0};
                leds[29] = CRGB{255,0,0};
                leds[30] = CRGB{255,0,0};
                leds[32] = CRGB{255,0,0};
                leds[33] = CRGB{255,0,0};
                leds[35] = CRGB{255,0,0};
                leds[36] = CRGB{255,0,0};
                leds[38] = CRGB{255,0,0};
                leds[39] = CRGB{255,0,0};
                leds[42] = CRGB{255,0,0};
                leds[43] = CRGB{255,0,0};
                leds[45] = CRGB{255,0,0};
                leds[46] = CRGB{255,0,0};
                leds[48] = CRGB{255,0,0};
                leds[49] = CRGB{255,0,0};
                leds[51] = CRGB{255,0,0};
                leds[52] = CRGB{255,0,0};
                leds[54] = CRGB{255,0,0};
                leds[55] = CRGB{255,0,0};
                leds[58] = CRGB{255,0,0};
                leds[59] = CRGB{255,0,0};
                leds[61] = CRGB{255,0,0};
                leds[62] = CRGB{255,0,0};
                leds[64] = CRGB{255,0,0};
                leds[65] = CRGB{255,0,0};
                leds[67] = CRGB{255,0,0};
                leds[68] = CRGB{255,0,0};
                leds[74] = CRGB{255,0,0};
                leds[75] = CRGB{255,0,0};
                leds[77] = CRGB{255,0,0};
                leds[78] = CRGB{255,0,0};
                leds[80] = CRGB{255,0,0};
                leds[81] = CRGB{255,0,0};
                leds[83] = CRGB{255,0,0};
                leds[84] = CRGB{255,0,0};
                leds[89] = CRGB{255,0,0};
                leds[90] = CRGB{255,0,0};
                leds[91] = CRGB{255,0,0};
                leds[93] = CRGB{255,0,0};
                leds[94] = CRGB{255,0,0};
                leds[96] = CRGB{255,0,0};
                leds[99] = CRGB{255,0,0};
                leds[100] = CRGB{255,0,0};
                leds[104] = CRGB{255,0,0};
                leds[105] = CRGB{255,0,0};
                leds[106] = CRGB{255,0,0};
                leds[109] = CRGB{255,0,0};
                leds[110] = CRGB{255,0,0};
                leds[115] = CRGB{255,0,0};
                leds[116] = CRGB{255,0,0};
                leds[120] = CRGB{255,0,0};
                leds[121] = CRGB{255,0,0};
                leds[125] = CRGB{255,0,0};
                leds[126] = CRGB{255,0,0};
                leds[131] = CRGB{255,0,0};
                leds[132] = CRGB{255,0,0};
                leds[136] = CRGB{255,0,0};
                leds[137] = CRGB{255,0,0};
                leds[141] = CRGB{255,0,0};
                leds[142] = CRGB{255,0,0};
                leds[163] = CRGB{255,0,0};
                leds[164] = CRGB{255,0,0};
                leds[168] = CRGB{255,0,0};
                leds[169] = CRGB{255,0,0};
                leds[173] = CRGB{255,0,0};
                leds[174] = CRGB{255,0,0};
                leds[179] = CRGB{255,0,0};
                leds[180] = CRGB{255,0,0};
                leds[184] = CRGB{255,0,0};
                leds[185] = CRGB{255,0,0};
                leds[189] = CRGB{255,0,0};
                leds[190] = CRGB{255,0,0};
                return;
            case 5:
                leds[2] = CRGB{255,0,0};
                leds[3] = CRGB{255,0,0};
                leds[6] = CRGB{255,0,0};
                leds[7] = CRGB{255,0,0};
                leds[8] = CRGB{255,0,0};
                leds[9] = CRGB{255,0,0};
                leds[12] = CRGB{255,0,0};
                leds[13] = CRGB{255,0,0};
                leds[16] = CRGB{255,0,0};
                leds[18] = CRGB{255,0,0};
                leds[19] = CRGB{255,0,0};
                leds[21] = CRGB{255,0,0};
                leds[22] = CRGB{255,0,0};
                leds[23] = CRGB{255,0,0};
                leds[24] = CRGB{255,0,0};
                leds[25] = CRGB{255,0,0};
                leds[26] = CRGB{255,0,0};
                leds[28] = CRGB{255,0,0};
                leds[29] = CRGB{255,0,0};
                leds[31] = CRGB{255,0,0};
                leds[32] = CRGB{255,0,0};
                leds[34] = CRGB{255,0,0};
                leds[35] = CRGB{255,0,0};
                leds[37] = CRGB{255,0,0};
                leds[38] = CRGB{255,0,0};
                leds[41] = CRGB{255,0,0};
                leds[42] = CRGB{255,0,0};
                leds[44] = CRGB{255,0,0};
                leds[45] = CRGB{255,0,0};
                leds[47] = CRGB{255,0,0};
                leds[48] = CRGB{255,0,0};
                leds[50] = CRGB{255,0,0};
                leds[51] = CRGB{255,0,0};
                leds[53] = CRGB{255,0,0};
                leds[54] = CRGB{255,0,0};
                leds[57] = CRGB{255,0,0};
                leds[58] = CRGB{255,0,0};
                leds[60] = CRGB{255,0,0};
                leds[61] = CRGB{255,0,0};
                leds[63] = CRGB{255,0,0};
                leds[64] = CRGB{255,0,0};
                leds[66] = CRGB{255,0,0};
                leds[67] = CRGB{255,0,0};
                leds[73] = CRGB{255,0,0};
                leds[74] = CRGB{255,0,0};
                leds[76] = CRGB{255,0,0};
                leds[77] = CRGB{255,0,0};
                leds[80] = CRGB{255,0,0};
                leds[82] = CRGB{255,0,0};
                leds[83] = CRGB{255,0,0};
                leds[88] = CRGB{255,0,0};
                leds[89] = CRGB{255,0,0};
                leds[90] = CRGB{255,0,0};
                leds[92] = CRGB{255,0,0};
                leds[93] = CRGB{255,0,0};
                leds[98] = CRGB{255,0,0};
                leds[99] = CRGB{255,0,0};
                leds[103] = CRGB{255,0,0};
                leds[104] = CRGB{255,0,0};
                leds[105] = CRGB{255,0,0};
                leds[108] = CRGB{255,0,0};
                leds[109] = CRGB{255,0,0};
                leds[114] = CRGB{255,0,0};
                leds[115] = CRGB{255,0,0};
                leds[119] = CRGB{255,0,0};
                leds[120] = CRGB{255,0,0};
                leds[124] = CRGB{255,0,0};
                leds[125] = CRGB{255,0,0};
                leds[130] = CRGB{255,0,0};
                leds[131] = CRGB{255,0,0};
                leds[135] = CRGB{255,0,0};
                leds[136] = CRGB{255,0,0};
                leds[140] = CRGB{255,0,0};
                leds[141] = CRGB{255,0,0};
                leds[162] = CRGB{255,0,0};
                leds[163] = CRGB{255,0,0};
                leds[167] = CRGB{255,0,0};
                leds[168] = CRGB{255,0,0};
                leds[172] = CRGB{255,0,0};
                leds[173] = CRGB{255,0,0};
                leds[178] = CRGB{255,0,0};
                leds[179] = CRGB{255,0,0};
                leds[183] = CRGB{255,0,0};
                leds[184] = CRGB{255,0,0};
                leds[188] = CRGB{255,0,0};
                leds[189] = CRGB{255,0,0};
                return;
            case 6:
                leds[1] = CRGB{255,0,0};
                leds[2] = CRGB{255,0,0};
                leds[5] = CRGB{255,0,0};
                leds[6] = CRGB{255,0,0};
                leds[7] = CRGB{255,0,0};
                leds[8] = CRGB{255,0,0};
                leds[11] = CRGB{255,0,0};
                leds[12] = CRGB{255,0,0};
                leds[15] = CRGB{255,0,0};
                leds[17] = CRGB{255,0,0};
                leds[18] = CRGB{255,0,0};
                leds[20] = CRGB{255,0,0};
                leds[21] = CRGB{255,0,0};
                leds[22] = CRGB{255,0,0};
                leds[23] = CRGB{255,0,0};
                leds[24] = CRGB{255,0,0};
                leds[25] = CRGB{255,0,0};
                leds[27] = CRGB{255,0,0};
                leds[28] = CRGB{255,0,0};
                leds[30] = CRGB{255,0,0};
                leds[31] = CRGB{255,0,0};
                leds[33] = CRGB{255,0,0};
                leds[34] = CRGB{255,0,0};
                leds[36] = CRGB{255,0,0};
                leds[37] = CRGB{255,0,0};
                leds[40] = CRGB{255,0,0};
                leds[41] = CRGB{255,0,0};
                leds[43] = CRGB{255,0,0};
                leds[44] = CRGB{255,0,0};
                leds[46] = CRGB{255,0,0};
                leds[47] = CRGB{255,0,0};
                leds[49] = CRGB{255,0,0};
                leds[50] = CRGB{255,0,0};
                leds[52] = CRGB{255,0,0};
                leds[53] = CRGB{255,0,0};
                leds[56] = CRGB{255,0,0};
                leds[57] = CRGB{255,0,0};
                leds[59] = CRGB{255,0,0};
                leds[60] = CRGB{255,0,0};
                leds[62] = CRGB{255,0,0};
                leds[63] = CRGB{255,0,0};
                leds[65] = CRGB{255,0,0};
                leds[66] = CRGB{255,0,0};
                leds[72] = CRGB{255,0,0};
                leds[73] = CRGB{255,0,0};
                leds[75] = CRGB{255,0,0};
                leds[76] = CRGB{255,0,0};
                leds[81] = CRGB{255,0,0};
                leds[82] = CRGB{255,0,0};
                leds[87] = CRGB{255,0,0};
                leds[88] = CRGB{255,0,0};
                leds[89] = CRGB{255,0,0};
                leds[91] = CRGB{255,0,0};
                leds[92] = CRGB{255,0,0};
                leds[97] = CRGB{255,0,0};
                leds[98] = CRGB{255,0,0};
                leds[102] = CRGB{255,0,0};
                leds[103] = CRGB{255,0,0};
                leds[104] = CRGB{255,0,0};
                leds[107] = CRGB{255,0,0};
                leds[108] = CRGB{255,0,0};
                leds[113] = CRGB{255,0,0};
                leds[114] = CRGB{255,0,0};
                leds[118] = CRGB{255,0,0};
                leds[119] = CRGB{255,0,0};
                leds[123] = CRGB{255,0,0};
                leds[124] = CRGB{255,0,0};
                leds[129] = CRGB{255,0,0};
                leds[130] = CRGB{255,0,0};
                leds[134] = CRGB{255,0,0};
                leds[135] = CRGB{255,0,0};
                leds[139] = CRGB{255,0,0};
                leds[140] = CRGB{255,0,0};
                leds[161] = CRGB{255,0,0};
                leds[162] = CRGB{255,0,0};
                leds[166] = CRGB{255,0,0};
                leds[167] = CRGB{255,0,0};
                leds[171] = CRGB{255,0,0};
                leds[172] = CRGB{255,0,0};
                leds[177] = CRGB{255,0,0};
                leds[178] = CRGB{255,0,0};
                leds[182] = CRGB{255,0,0};
                leds[183] = CRGB{255,0,0};
                leds[187] = CRGB{255,0,0};
                leds[188] = CRGB{255,0,0};
                return;
            case 7:
                leds[0] = CRGB{255,0,0};
                leds[1] = CRGB{255,0,0};
                leds[4] = CRGB{255,0,0};
                leds[5] = CRGB{255,0,0};
                leds[6] = CRGB{255,0,0};
                leds[7] = CRGB{255,0,0};
                leds[10] = CRGB{255,0,0};
                leds[11] = CRGB{255,0,0};
                leds[14] = CRGB{255,0,0};
                leds[15] = CRGB{255,0,0};
                leds[16] = CRGB{255,0,0};
                leds[17] = CRGB{255,0,0};
                leds[19] = CRGB{255,0,0};
                leds[20] = CRGB{255,0,0};
                leds[21] = CRGB{255,0,0};
                leds[22] = CRGB{255,0,0};
                leds[23] = CRGB{255,0,0};
                leds[24] = CRGB{255,0,0};
                leds[26] = CRGB{255,0,0};
                leds[27] = CRGB{255,0,0};
                leds[29] = CRGB{255,0,0};
                leds[30] = CRGB{255,0,0};
                leds[31] = CRGB{255,0,0};
                leds[32] = CRGB{255,0,0};
                leds[33] = CRGB{255,0,0};
                leds[35] = CRGB{255,0,0};
                leds[36] = CRGB{255,0,0};
                leds[39] = CRGB{255,0,0};
                leds[40] = CRGB{255,0,0};
                leds[42] = CRGB{255,0,0};
                leds[43] = CRGB{255,0,0};
                leds[45] = CRGB{255,0,0};
                leds[46] = CRGB{255,0,0};
                leds[48] = CRGB{255,0,0};
                leds[49] = CRGB{255,0,0};
                leds[51] = CRGB{255,0,0};
                leds[52] = CRGB{255,0,0};
                leds[55] = CRGB{255,0,0};
                leds[56] = CRGB{255,0,0};
                leds[58] = CRGB{255,0,0};
                leds[59] = CRGB{255,0,0};
                leds[61] = CRGB{255,0,0};
                leds[62] = CRGB{255,0,0};
                leds[64] = CRGB{255,0,0};
                leds[65] = CRGB{255,0,0};
                leds[71] = CRGB{255,0,0};
                leds[72] = CRGB{255,0,0};
                leds[74] = CRGB{255,0,0};
                leds[75] = CRGB{255,0,0};
                leds[80] = CRGB{255,0,0};
                leds[81] = CRGB{255,0,0};
                leds[86] = CRGB{255,0,0};
                leds[87] = CRGB{255,0,0};
                leds[88] = CRGB{255,0,0};
                leds[90] = CRGB{255,0,0};
                leds[91] = CRGB{255,0,0};
                leds[96] = CRGB{255,0,0};
                leds[97] = CRGB{255,0,0};
                leds[101] = CRGB{255,0,0};
                leds[102] = CRGB{255,0,0};
                leds[103] = CRGB{255,0,0};
                leds[106] = CRGB{255,0,0};
                leds[107] = CRGB{255,0,0};
                leds[111] = CRGB{255,0,0};
                leds[112] = CRGB{255,0,0};
                leds[113] = CRGB{255,0,0};
                leds[117] = CRGB{255,0,0};
                leds[118] = CRGB{255,0,0};
                leds[122] = CRGB{255,0,0};
                leds[123] = CRGB{255,0,0};
                leds[127] = CRGB{255,0,0};
                leds[128] = CRGB{255,0,0};
                leds[129] = CRGB{255,0,0};
                leds[133] = CRGB{255,0,0};
                leds[134] = CRGB{255,0,0};
                leds[138] = CRGB{255,0,0};
                leds[139] = CRGB{255,0,0};
                leds[143] = CRGB{255,0,0};
                leds[160] = CRGB{255,0,0};
                leds[161] = CRGB{255,0,0};
                leds[165] = CRGB{255,0,0};
                leds[166] = CRGB{255,0,0};
                leds[170] = CRGB{255,0,0};
                leds[171] = CRGB{255,0,0};
                leds[175] = CRGB{255,0,0};
                leds[176] = CRGB{255,0,0};
                leds[177] = CRGB{255,0,0};
                leds[181] = CRGB{255,0,0};
                leds[182] = CRGB{255,0,0};
                leds[186] = CRGB{255,0,0};
                leds[187] = CRGB{255,0,0};
                leds[191] = CRGB{255,0,0};
                return;
            case 8:
                leds[0] = CRGB{255,0,0};
                leds[3] = CRGB{255,0,0};
                leds[4] = CRGB{255,0,0};
                leds[5] = CRGB{255,0,0};
                leds[6] = CRGB{255,0,0};
                leds[9] = CRGB{255,0,0};
                leds[10] = CRGB{255,0,0};
                leds[13] = CRGB{255,0,0};
                leds[14] = CRGB{255,0,0};
                leds[15] = CRGB{255,0,0};
                leds[16] = CRGB{255,0,0};
                leds[18] = CRGB{255,0,0};
                leds[19] = CRGB{255,0,0};
                leds[20] = CRGB{255,0,0};
                leds[21] = CRGB{255,0,0};
                leds[22] = CRGB{255,0,0};
                leds[23] = CRGB{255,0,0};
                leds[25] = CRGB{255,0,0};
                leds[26] = CRGB{255,0,0};
                leds[28] = CRGB{255,0,0};
                leds[29] = CRGB{255,0,0};
                leds[30] = CRGB{255,0,0};
                leds[31] = CRGB{255,0,0};
                leds[32] = CRGB{255,0,0};
                leds[34] = CRGB{255,0,0};
                leds[35] = CRGB{255,0,0};
                leds[38] = CRGB{255,0,0};
                leds[39] = CRGB{255,0,0};
                leds[41] = CRGB{255,0,0};
                leds[42] = CRGB{255,0,0};
                leds[44] = CRGB{255,0,0};
                leds[45] = CRGB{255,0,0};
                leds[48] = CRGB{255,0,0};
                leds[50] = CRGB{255,0,0};
                leds[51] = CRGB{255,0,0};
                leds[54] = CRGB{255,0,0};
                leds[55] = CRGB{255,0,0};
                leds[57] = CRGB{255,0,0};
                leds[58] = CRGB{255,0,0};
                leds[60] = CRGB{255,0,0};
                leds[61] = CRGB{255,0,0};
                leds[64] = CRGB{255,0,0};
                leds[70] = CRGB{255,0,0};
                leds[71] = CRGB{255,0,0};
                leds[73] = CRGB{255,0,0};
                leds[74] = CRGB{255,0,0};
                leds[80] = CRGB{255,0,0};
                leds[85] = CRGB{255,0,0};
                leds[86] = CRGB{255,0,0};
                leds[87] = CRGB{255,0,0};
                leds[89] = CRGB{255,0,0};
                leds[90] = CRGB{255,0,0};
                leds[95] = CRGB{255,0,0};
                leds[96] = CRGB{255,0,0};
                leds[100] = CRGB{255,0,0};
                leds[101] = CRGB{255,0,0};
                leds[102] = CRGB{255,0,0};
                leds[105] = CRGB{255,0,0};
                leds[106] = CRGB{255,0,0};
                leds[110] = CRGB{255,0,0};
                leds[111] = CRGB{255,0,0};
                leds[112] = CRGB{255,0,0};
                leds[116] = CRGB{255,0,0};
                leds[117] = CRGB{255,0,0};
                leds[121] = CRGB{255,0,0};
                leds[122] = CRGB{255,0,0};
                leds[126] = CRGB{255,0,0};
                leds[127] = CRGB{255,0,0};
                leds[128] = CRGB{255,0,0};
                leds[132] = CRGB{255,0,0};
                leds[133] = CRGB{255,0,0};
                leds[137] = CRGB{255,0,0};
                leds[138] = CRGB{255,0,0};
                leds[142] = CRGB{255,0,0};
                leds[143] = CRGB{255,0,0};
                leds[160] = CRGB{255,0,0};
                leds[164] = CRGB{255,0,0};
                leds[165] = CRGB{255,0,0};
                leds[169] = CRGB{255,0,0};
                leds[170] = CRGB{255,0,0};
                leds[174] = CRGB{255,0,0};
                leds[175] = CRGB{255,0,0};
                leds[176] = CRGB{255,0,0};
                leds[180] = CRGB{255,0,0};
                leds[181] = CRGB{255,0,0};
                leds[185] = CRGB{255,0,0};
                leds[186] = CRGB{255,0,0};
                leds[190] = CRGB{255,0,0};
                leds[191] = CRGB{255,0,0};
                return;
            case 9:
                leds[2] = CRGB{255,0,0};
                leds[3] = CRGB{255,0,0};
                leds[4] = CRGB{255,0,0};
                leds[5] = CRGB{255,0,0};
                leds[8] = CRGB{255,0,0};
                leds[9] = CRGB{255,0,0};
                leds[12] = CRGB{255,0,0};
                leds[13] = CRGB{255,0,0};
                leds[14] = CRGB{255,0,0};
                leds[15] = CRGB{255,0,0};
                leds[17] = CRGB{255,0,0};
                leds[18] = CRGB{255,0,0};
                leds[19] = CRGB{255,0,0};
                leds[20] = CRGB{255,0,0};
                leds[21] = CRGB{255,0,0};
                leds[22] = CRGB{255,0,0};
                leds[24] = CRGB{255,0,0};
                leds[25] = CRGB{255,0,0};
                leds[27] = CRGB{255,0,0};
                leds[28] = CRGB{255,0,0};
                leds[29] = CRGB{255,0,0};
                leds[30] = CRGB{255,0,0};
                leds[31] = CRGB{255,0,0};
                leds[33] = CRGB{255,0,0};
                leds[34] = CRGB{255,0,0};
                leds[37] = CRGB{255,0,0};
                leds[38] = CRGB{255,0,0};
                leds[40] = CRGB{255,0,0};
                leds[41] = CRGB{255,0,0};
                leds[43] = CRGB{255,0,0};
                leds[44] = CRGB{255,0,0};
                leds[47] = CRGB{255,0,0};
                leds[49] = CRGB{255,0,0};
                leds[50] = CRGB{255,0,0};
                leds[53] = CRGB{255,0,0};
                leds[54] = CRGB{255,0,0};
                leds[56] = CRGB{255,0,0};
                leds[57] = CRGB{255,0,0};
                leds[59] = CRGB{255,0,0};
                leds[60] = CRGB{255,0,0};
                leds[63] = CRGB{255,0,0};
                leds[69] = CRGB{255,0,0};
                leds[70] = CRGB{255,0,0};
                leds[72] = CRGB{255,0,0};
                leds[73] = CRGB{255,0,0};
                leds[79] = CRGB{255,0,0};
                leds[84] = CRGB{255,0,0};
                leds[85] = CRGB{255,0,0};
                leds[86] = CRGB{255,0,0};
                leds[88] = CRGB{255,0,0};
                leds[89] = CRGB{255,0,0};
                leds[94] = CRGB{255,0,0};
                leds[95] = CRGB{255,0,0};
                leds[99] = CRGB{255,0,0};
                leds[100] = CRGB{255,0,0};
                leds[101] = CRGB{255,0,0};
                leds[104] = CRGB{255,0,0};
                leds[105] = CRGB{255,0,0};
                leds[109] = CRGB{255,0,0};
                leds[110] = CRGB{255,0,0};
                leds[111] = CRGB{255,0,0};
                leds[115] = CRGB{255,0,0};
                leds[116] = CRGB{255,0,0};
                leds[120] = CRGB{255,0,0};
                leds[121] = CRGB{255,0,0};
                leds[125] = CRGB{255,0,0};
                leds[126] = CRGB{255,0,0};
                leds[131] = CRGB{255,0,0};
                leds[132] = CRGB{255,0,0};
                leds[136] = CRGB{255,0,0};
                leds[137] = CRGB{255,0,0};
                leds[141] = CRGB{255,0,0};
                leds[142] = CRGB{255,0,0};
                leds[163] = CRGB{255,0,0};
                leds[164] = CRGB{255,0,0};
                leds[168] = CRGB{255,0,0};
                leds[169] = CRGB{255,0,0};
                leds[173] = CRGB{255,0,0};
                leds[174] = CRGB{255,0,0};
                leds[179] = CRGB{255,0,0};
                leds[180] = CRGB{255,0,0};
                leds[184] = CRGB{255,0,0};
                leds[185] = CRGB{255,0,0};
                leds[189] = CRGB{255,0,0};
                leds[190] = CRGB{255,0,0};
                return;
            default:
                Serial.println("NYI");
                assert(0);
        }
    }

    Surprise():Frame_set(10,100){}
};

#endif
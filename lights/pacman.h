#ifndef PACMAN_H
#define PACMAN_H

#include "frame_set.h"

struct Pacman: public Frame_set {
    void set_leds(CRGB leds[Lights_constants::NUMBER_OF_LEDS])const{
		leds[0] = CRGB{0,0,85};
		leds[1] = CRGB{0,0,85};
		leds[2] = CRGB{0,0,85};
		leds[3] = CRGB{0,0,85};
		leds[4] = CRGB{0,0,85};
		leds[5] = CRGB{0,0,85};
		leds[6] = CRGB{0,0,85};
		leds[7] = CRGB{0,0,85};
		leds[8] = CRGB{0,0,85};
		leds[9] = CRGB{0,0,85};
		leds[10] = CRGB{0,0,85};
		leds[11] = CRGB{0,0,85};
		leds[12] = CRGB{0,0,85};
		leds[13] = CRGB{0,0,85};
		leds[14] = CRGB{0,0,85};
		leds[15] = CRGB{0,0,85};
		leds[16] = CRGB{0,0,85};
		leds[31] = CRGB{0,0,85};
		leds[32] = CRGB{0,0,85};
		leds[34] = CRGB{0,0,85};
		leds[35] = CRGB{0,0,85};
		leds[37] = CRGB{0,0,85};
		leds[38] = CRGB{0,0,85};
		leds[39] = CRGB{0,0,85};
		leds[40] = CRGB{0,0,85};
		leds[41] = CRGB{0,0,85};
		leds[43] = CRGB{0,0,85};
		leds[44] = CRGB{0,0,85};
		leds[45] = CRGB{0,0,85};
		leds[47] = CRGB{0,0,85};
		leds[48] = CRGB{0,0,85};
		leds[50] = CRGB{0,0,85};
		leds[60] = CRGB{0,0,85};
		leds[61] = CRGB{0,0,85};
		leds[63] = CRGB{0,0,85};
		leds[64] = CRGB{0,0,85};
		leds[66] = CRGB{0,0,85};
		leds[68] = CRGB{0,0,85};
		leds[69] = CRGB{0,0,85};
		leds[70] = CRGB{0,0,85};
		leds[71] = CRGB{0,0,85};
		leds[73] = CRGB{0,0,85};
		leds[74] = CRGB{0,0,85};
		leds[76] = CRGB{0,0,85};
		leds[77] = CRGB{0,0,85};
		leds[79] = CRGB{0,0,85};
		leds[82] = CRGB{0,0,85};
		leds[84] = CRGB{0,0,85};
		leds[90] = CRGB{0,0,85};
		leds[92] = CRGB{0,0,85};
		leds[93] = CRGB{0,0,85};
		leds[98] = CRGB{0,0,85};
		leds[100] = CRGB{0,0,85};
		leds[102] = CRGB{0,0,85};
		leds[103] = CRGB{0,0,85};
		leds[104] = CRGB{0,0,85};
		leds[106] = CRGB{0,0,85};
		leds[108] = CRGB{0,0,85};
		leds[109] = CRGB{0,0,85};
		leds[112] = CRGB{0,0,85};
		leds[114] = CRGB{0,0,85};
		leds[116] = CRGB{0,0,85};
		leds[118] = CRGB{0,0,85};
		leds[119] = CRGB{0,0,85};
		leds[120] = CRGB{0,0,85};
		leds[122] = CRGB{0,0,85};
		leds[124] = CRGB{0,0,85};
		leds[125] = CRGB{0,0,85};
		leds[127] = CRGB{0,0,85};
		leds[128] = CRGB{0,0,85};
		leds[130] = CRGB{0,0,85};
		leds[143] = CRGB{0,0,85};
		leds[144] = CRGB{0,0,85};
		leds[146] = CRGB{0,0,85};
		leds[147] = CRGB{0,0,85};
		leds[148] = CRGB{0,0,85};
		leds[149] = CRGB{0,0,85};
		leds[150] = CRGB{0,0,85};
		leds[151] = CRGB{0,0,85};
		leds[152] = CRGB{0,0,85};
		leds[153] = CRGB{0,0,85};
		leds[155] = CRGB{0,0,85};
		leds[156] = CRGB{0,0,85};
		leds[157] = CRGB{0,0,85};
		leds[159] = CRGB{0,0,85};
		leds[160] = CRGB{0,0,85};
		leds[175] = CRGB{0,0,85};
		leds[176] = CRGB{0,0,85};
		leds[177] = CRGB{0,0,85};
		leds[178] = CRGB{0,0,85};
		leds[179] = CRGB{0,0,85};
		leds[180] = CRGB{0,0,85};
		leds[181] = CRGB{0,0,85};
		leds[182] = CRGB{0,0,85};
		leds[183] = CRGB{0,0,85};
		leds[184] = CRGB{0,0,85};
		leds[185] = CRGB{0,0,85};
		leds[186] = CRGB{0,0,85};
		leds[187] = CRGB{0,0,85};
		leds[188] = CRGB{0,0,85};
		leds[189] = CRGB{0,0,85};
		leds[190] = CRGB{0,0,85};
		leds[191] = CRGB{0,0,85};
        switch(current_frame){
            case 0:
                leds[22] = CRGB{0,255,255};
                leds[28] = CRGB{255,204,204};
                leds[107] = CRGB{255,255,0};
                leds[132] = CRGB{255,136,0};
                leds[145] = CRGB{255,0,0};
                leds[174] = CRGB{255,255,255};
                return;
            case 1:
                leds[23] = CRGB{0,255,255};
                leds[29] = CRGB{255,204,204};
                leds[123] = CRGB{255,255,0};
                leds[133] = CRGB{255,136,0};
                leds[161] = CRGB{255,0,0};
                return;
            case 2:
                leds[24] = CRGB{0,255,255};
                leds[30] = CRGB{255,204,204};
                leds[134] = CRGB{255,136,0};
                leds[139] = CRGB{255,255,0};
                leds[162] = CRGB{255,0,0};
                leds[174] = CRGB{255,255,255};
                return;
            case 3:
                leds[25] = CRGB{0,255,255};
                leds[46] = CRGB{255,204,204};
                leds[135] = CRGB{255,136,0};
                leds[140] = CRGB{255,255,0};
                leds[163] = CRGB{255,0,0};
                return;
            case 4:
                leds[26] = CRGB{0,255,255};
                leds[62] = CRGB{255,204,204};
                leds[136] = CRGB{255,136,0};
                leds[141] = CRGB{255,255,0};
                leds[164] = CRGB{255,0,0};
                leds[174] = CRGB{255,255,255};
                return;
            case 5:
                leds[42] = CRGB{0,255,255};
                leds[78] = CRGB{255,204,204};
                leds[137] = CRGB{255,136,0};
                leds[142] = CRGB{255,255,0};
                leds[165] = CRGB{255,0,0};
                return;
            case 6:
                leds[58] = CRGB{0,255,255};
                leds[94] = CRGB{255,204,204};
                leds[138] = CRGB{255,136,0};
                leds[158] = CRGB{255,255,0};
                leds[166] = CRGB{255,0,0};
                leds[174] = CRGB{255,255,255};
                return;
            case 7:
                leds[59] = CRGB{0,255,255};
                leds[110] = CRGB{255,204,204};
                leds[154] = CRGB{255,136,0};
                leds[167] = CRGB{255,0,0};
                leds[174] = CRGB{255,255,0};
                return;
            case 8:
                leds[59] = CRGB{0,0,255};
                leds[110] = CRGB{0,0,255};
                leds[154] = CRGB{0,0,255};
                leds[167] = CRGB{0,0,255};
                leds[173] = CRGB{255,255,0};
                return;
            case 9:
                leds[58] = CRGB{0,0,255};
                leds[94] = CRGB{0,0,255};
                leds[138] = CRGB{0,0,255};
                leds[166] = CRGB{0,0,255};
                leds[172] = CRGB{255,255,0};
                return;
            case 10:
                leds[58] = CRGB{0,0,255};
                leds[94] = CRGB{0,0,255};
                leds[138] = CRGB{0,0,255};
                leds[166] = CRGB{0,0,255};
                leds[171] = CRGB{255,255,0};
                return;
            case 11:
                leds[42] = CRGB{0,0,255};
                leds[78] = CRGB{0,0,255};
                leds[137] = CRGB{0,0,255};
                leds[165] = CRGB{0,0,255};
                leds[170] = CRGB{255,255,0};
                return;
            case 12:
                leds[42] = CRGB{0,0,255};
                leds[78] = CRGB{0,0,255};
                leds[137] = CRGB{0,0,255};
                leds[154] = CRGB{255,255,0};
                leds[165] = CRGB{0,0,255};
                return;
            case 13:
                leds[26] = CRGB{0,0,255};
                leds[62] = CRGB{0,0,255};
                leds[136] = CRGB{0,0,255};
                leds[138] = CRGB{255,255,0};
                leds[164] = CRGB{0,0,255};
                return;
            case 14:
                leds[26] = CRGB{0,0,255};
                leds[62] = CRGB{0,0,255};
                leds[136] = CRGB{0,0,255};
                leds[137] = CRGB{255,255,0};
                leds[164] = CRGB{0,0,255};
                return;
            case 15:
                leds[27] = CRGB{0,0,255};
                leds[46] = CRGB{0,0,255};
                leds[135] = CRGB{0,0,255};
                leds[136] = CRGB{255,255,0};
                leds[163] = CRGB{0,0,255};
                return;
            case 16:
                leds[27] = CRGB{0,0,255};
                leds[46] = CRGB{0,0,255};
                leds[135] = CRGB{255,255,0};
                leds[163] = CRGB{0,0,255};
                return;
            case 17:
                leds[28] = CRGB{0,0,255};
                leds[30] = CRGB{0,0,255};
                leds[134] = CRGB{255,255,0};
                leds[135] = CRGB{0,255,255};
                leds[162] = CRGB{0,0,255};
                return;
            case 18:
                leds[28] = CRGB{0,0,255};
                leds[30] = CRGB{0,0,255};
                leds[133] = CRGB{255,255,0};
                leds[162] = CRGB{0,0,255};
                return;
            default:
                Serial.println("NYI");
                assert(0);
        }
    }

    Pacman():Frame_set(19,400){}
};

#endif
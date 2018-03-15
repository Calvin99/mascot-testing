#ifndef NEUTRAL_H
#define NEUTRAL_H

#include "frame_set.h"

struct Neutral: public Frame_set {
    void set_leds(CRGB leds[Lights_constants::NUMBER_OF_LEDS])const{
        switch(current_frame){
            case 0:
                leds[21] = CRGB{255,0,0};
                leds[22] = CRGB{255,0,0};
                leds[25] = CRGB{255,0,0};
                leds[26] = CRGB{255,0,0};
                leds[37] = CRGB{255,0,0};
                leds[38] = CRGB{255,0,0};
                leds[41] = CRGB{255,0,0};
                leds[42] = CRGB{255,0,0};
                leds[53] = CRGB{255,0,0};
                leds[54] = CRGB{255,0,0};
                leds[57] = CRGB{255,0,0};
                leds[58] = CRGB{255,0,0};
                leds[69] = CRGB{255,0,0};
                leds[70] = CRGB{255,0,0};
                leds[73] = CRGB{255,0,0};
                leds[74] = CRGB{255,0,0};
                leds[85] = CRGB{255,0,0};
                leds[86] = CRGB{255,0,0};
                leds[89] = CRGB{255,0,0};
                leds[90] = CRGB{255,0,0};
                leds[130] = CRGB{255,0,0};
                leds[131] = CRGB{255,0,0};
                leds[132] = CRGB{255,0,0};
                leds[133] = CRGB{255,0,0};
                leds[134] = CRGB{255,0,0};
                leds[135] = CRGB{255,0,0};
                leds[136] = CRGB{255,0,0};
                leds[137] = CRGB{255,0,0};
                leds[138] = CRGB{255,0,0};
                leds[139] = CRGB{255,0,0};
                leds[140] = CRGB{255,0,0};
                leds[141] = CRGB{255,0,0};
                leds[146] = CRGB{255,0,0};
                leds[147] = CRGB{255,0,0};
                leds[148] = CRGB{255,0,0};
                leds[149] = CRGB{255,0,0};
                leds[150] = CRGB{255,0,0};
                leds[151] = CRGB{255,0,0};
                leds[152] = CRGB{255,0,0};
                leds[153] = CRGB{255,0,0};
                leds[154] = CRGB{255,0,0};
                leds[155] = CRGB{255,0,0};
                leds[156] = CRGB{255,0,0};
                leds[157] = CRGB{255,0,0};
                return;
            default:
                Serial.println("NYI");
                assert(0);
        }
    }

    Neutral():Frame_set(1,100){}
};

#endif
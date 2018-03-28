#include "colors.h"
#include "design_selector.h"

SevSeg sevseg;
CRGB leds[NUMBER_OF_LEDS];
uint8_t design_selection = 0;

const uint8_t ACTIVATE_SWITCH_PIN = 1;

void setup() {
	{//set up led matrix
		FastLED.addLeds <LED_CONTROLLER, LED_STRIP_DATA_PIN, COLOR_ORDER>(leds, NUMBER_OF_LEDS);
		FastLED.setBrightness(BRIGHTNESS);
	}
	{//set up design selector io
		const uint8_t DIGIT_COUNT = 3;
		uint8_t digit_pins[3] = {//which digit to light up, pins on arduino map to pins on display
			11, //Dig 1 - 12
			12, //Dig 2 - 9
			13  //Dig 3 - 8
		};
		uint8_t segment_pins[8] = {//pins on arduino which map to A through G plus DP on the display, comments are the pins on the display
			2, //A  - 11
			4, //B  -  7
			5, //C  -  4
			6, //D  -  2
			7, //E  -  1
			8, //F  - 10 
			9, //G  -  5
			10 //DP -  3
		};
		const bool RESISTORS_ON_SEGMENTS = true;
		const uint8_t HARDWARE_CONFIG = COMMON_CATHODE;
	
		sevseg.begin(HARDWARE_CONFIG, DIGIT_COUNT, digit_pins, segment_pins, RESISTORS_ON_SEGMENTS);
		sevseg.setBrightness(100);//0-100 note: 0 is not off
	}
	Serial.begin(9600);
}

void loop(){
	uint8_t new_design_selection = get_design_selection();
	Serial.println(new_design_selection);
	if(new_design_selection >= NUMBER_OF_DESIGNS){
		new_design_selection  = 0;
		set_seven_segment_display("err",sevseg);
	} else {
		set_seven_segment_display(get_scaled_design_selection(),sevseg);
	}
	if(digitalRead(ACTIVATE_SWITCH_PIN)){
		design_selection = new_design_selection;
	}
	
	for(unsigned frame_index = DESIGNS[design_selection][0]; frame_index < (DESIGNS[design_selection][1] + 1); frame_index++){
		for(unsigned led_index = 0; led_index < NUMBER_OF_LEDS; led_index++){
			const uint8_t* i = &(FRAMES[frame_index][led_index]);
			uint8_t pixel = pgm_read_byte(i);
			leds[led_index] = index_to_color(pixel);
		}
		FastLED.show();
		delay(DESIGNS[design_selection][2]);
	}
	
}


//
// Created by jin on 4/4/20.
//

#include "mbed.h"

DigitalInOut LED_1(D2);
DigitalInOut LED_2(D3);

DigitalInOut button_1(D4, PIN_INPUT, PullUp, 1);
DigitalInOut button_2(D5);



int main() {
    LED_1.output();
    LED_2.output();

    button_2.input();
    button_2.mode(PullDown);

    while(1) {
        LED_1 = button_1;
        LED_2 = button_2;
    }
}

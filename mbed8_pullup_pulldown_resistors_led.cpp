//
// Created by jin on 4/4/20.
//

#include "mbed.h"

DigitalOut LED_1(D2);
DigitalOut LED_2(D3);

DigitalIn button_1(D4, PullUp);
DigitalIn button_2(D5, PullDown);

int main() {
    while(1) {
        LED_1 = button_1;
        LED_2 = button_2;
    }
}

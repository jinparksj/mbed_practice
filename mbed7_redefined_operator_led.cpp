//
// Created by jin on 4/4/20.
//

#include "mbed.h"

DigitalOut LED_1(D2);
DigitalOut LED_2(D3);

int main() {
    bool state = true;

    while(1) {
        LED_1 = state;
        LED_2 = !LED_1;

        LED_1.write(state);
        LED_2.write(!LED_1.read());

        state = !state;

        wait(1);
    }
}

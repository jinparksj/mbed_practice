//
// Created by jin on 4/4/20.
//

#include "mbed.h"

int main(){
    DigitalOut led_pin(PA_5);

    while (true) {
        led_pin.write(1);
        wait(1);

        led_pin.write(0);
        wait(1);

    }
}
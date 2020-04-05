//
// Created by jin on 4/4/20.
//


#include "mbed.h"

int main(){
    gpio_t LED_pin;

    //assign port A pin 5 to GPIO object, connecting LED
    gpio_init(&LED_pin, PA_5);

    //output mode
    gpio_dir(&LED_pin, PIN_OUTPUT);

    while (true) {
        gpio_write(&LED_pin, 1);
        wait(3);

        gpio_write(&LED_pin, 0);
        wait(1);

    }

}
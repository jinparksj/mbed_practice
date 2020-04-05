//
// Created by jin on 4/4/20.
//

#include "mbed.h"

int main(){
    //port A pin 5 control
    unsigned int mask_pin5 = 1 << 5;
    unsigned int mask_pin5_1 = 0b11 << 20; //mode 5
    unsigned int mask_pin5_2 = ~(0b11 << 22); //CNf5

    //port A pin5 output mode
    GPIOA -> CRL |= mask_pin5_1;
    GPIOA -> CRL &= mask_pin5_2;

    while(true) {
        GPIOA -> BSRR |= mask_pin5;
        wait(1);

        GPIOA -> BSRR |= (mask_pin5 << 16);
        wait(3);
    }
}
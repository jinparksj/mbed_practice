//
// Created by jin on 4/4/20.
//


#include "mbed.h"

int main() {

    //mask to control port A pin 5
    unsigned int mask_pin5 = 1 << 5; //100000, Set(ON), Reset(Off)
    unsigned int mask_pin5_1 = 0b11 << 20; //MODE5
    unsigned int mask_pin5_2 = ~(0b11 << 22); // CNF5

    unsigned int *port_A_addr = (unsigned int*)0x40010800;

    //port A pin5 digital output setting
    *port_A_addr |= mask_pin5_1; // maximum 50MHz clock speed output mode
    *port_A_addr &= mask_pin5_2; // general purpose push-pull output mode

    unsigned int *port_A_set_reset_addr = (unsigned int*)0x40010810;

    while(true) {
        //HIGH - port A pin 5 : Set
        *port_A_set_reset_addr |= mask_pin5;
        wait(0.5);

        *port_A_set_reset_addr |= (mask_pin5 << 16);
        wait(0.5);
    }


}
//
// Created by jin on 4/5/20.
//

#include "mbed.h"

Serial PC(USBTX, USBRX);
DigitalOut LED(LED1);

void blink_callback() {
    PC.putc(PC.getc());
}

int main() {
    PC.attach(&blink_callback);

    while(1) {
        LED = !LED;
        wait(1);
    }
}

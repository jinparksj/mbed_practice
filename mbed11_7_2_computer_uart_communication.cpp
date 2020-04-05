//
// Created by jin on 4/4/20.
//

#include "mbed.h"

Serial PC(SERIAL_TX, SERIAL_RX, 115200);
//Serial PC(D1, D0, 115200);

int main() {
    int sec = 1;

    PC.printf("Hello World\n");

    while(1) {
        wait(1);
        PC.printf("This program runs since %d seconds.\n", sec++);
    }
}

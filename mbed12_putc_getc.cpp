//
// Created by jin on 4/5/20.
//

#include "mbed.h"

Serial PC(USBTX, USBRX);

//ctrl + a, > input
int main() {
    while(1) {
        PC.putc(PC.getc());
    }
}

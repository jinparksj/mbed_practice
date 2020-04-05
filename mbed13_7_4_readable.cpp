//
// Created by jin on 4/5/20.
//

#include "mbed.h"

Serial PC(USBTX, USBRX);

int main() {
    while(1) {
        if (PC.readable()) {
            PC.putc(PC.getc());
        }
    }
}


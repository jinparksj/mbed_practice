//
// Created by jin on 4/5/20.
//

#include "mbed.h"
AnalogIn v_resistor(A0);

int main() {
    while(1) {
        printf("%f\n", v_resistor.read());
        wait(1);
    }
}

//
// Created by jin on 4/4/20.
//
#include "mbed.h"

Serial pc(SERIAL_TX, SERIAL_RX); //connect PC and UART
DigitalOut connectedPin(LED1);
DigitalOut notConnectedPin(NC);

int main() {
    if (connectedPin.is_connected()) {
        pc.printf("Connected...\n");
    }
    else {
        pc.printf("Not connected...\n");
    }

    if (notConnectedPin.is_connected()) {
        pc.printf("Connected...\n");
    }
    else {
        pc.printf("Not connected...\n");
    }

    while(1) {
    }
}


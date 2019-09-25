#include <mbed.h>

DigitalOut myled(PC_13);

int main()
{

    // Blink LED
    while(1) {
        myled = 1;          // set LED1 pin to high
        wait(5);

        myled  = 0;     // set LED1 pin to low
        wait(5);
    }
}
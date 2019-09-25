#include <mbed.h>
//#include "rtos.h"
//#include <thread.h>

DigitalOut led1(LED1);
DigitalOut led2(A7);
Thread thread;
 
void led2_thread() {
    while (true) {
        led2 = !led2;
        wait(0.5);
    }
}
 
int main() {
    thread.start(led2_thread);
    led1 = 1;
    while (true) {
        led1 = !led1;
        wait(0.5);
    }
}
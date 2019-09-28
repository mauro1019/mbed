#include <mbed.h>

 
Timer t;
DigitalIn mybutton(A0);
Serial device(PA_9, PA_10, 9600); // tx, rx, baud
 
int main() { 

    //device.baud(9600);
    device.printf("TIMER + SERIAL!\n\r");
    while(1){
        if (mybutton){
                t.start();
                device.printf("Timer init!\n\r");
        }
    t.stop();
    device.printf("The time taken was %f seconds\n", t.read());

    }
    
}

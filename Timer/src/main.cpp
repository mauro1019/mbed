#include <mbed.h>

 
Timer t;
Serial pc(PA_9, PA_10); // tx, rx
 
int main() { 

    //device.baud(9600);

    while(1){

    t.start();
    pc.printf("Hello World!\n\r");
    t.stop();
    pc.printf("The time taken was %f seconds\n", t.read());

    }
    
}

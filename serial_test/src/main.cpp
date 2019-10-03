#include <mbed.h>
DigitalIn mybutton(A0);
DigitalOut led(PC_13);
Serial pc_serial(PA_9, PA_10, 9600); // tx, rx, baud
//Serial dev_serial(PA_9, PA_10, 9600);

int main()
{
    int i = 0;
    pc_serial.printf("Press '1' to turn LED1 ON, '0' to turn it OFF\n");
    while(1) {
        char c = pc_serial.getc(); // Read hyperterminal
        if (c == '0') {
            i++;
            led = 0; // OFF
            pc_serial.printf("int: %d \n", i);
        }
        if (c == '1') {
            i--;
            led = 1; // ON
            pc_serial.printf("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
            pc_serial.printf("int: %d \n", i);

        }
    }
}

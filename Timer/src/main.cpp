#include <mbed.h>
#include "Adafruit_SSD1306.h"
 
DigitalOut myled(LED1);


 

// an I2C sub-class that provides a constructed default
class I2CPreInit : public I2C
{
public:
    I2CPreInit(PinName sda, PinName scl) : I2C(sda, scl)
    {
        frequency(400000);
        start();
    };
};
 
//SPIPreInit gSpi(p5,NC,p7);
//Adafruit_SSD1306_Spi gOled1(gSpi,p26,p25,p24);
 
I2CPreInit gI2C(PB_11, PB_10);
Adafruit_SSD1306_I2c gOled2(gI2C,PA_0);
 
int main()
{   uint16_t x=0;
 
    gOled2.printf("%ux%u OLED Display\r\n", gOled2.width(), gOled2.height());
    
    while(1)
    {
        myled = !myled;

        gOled2.printf("%u\r",x);
        gOled2.display();
        x++;
        wait(5.0);
    }
}
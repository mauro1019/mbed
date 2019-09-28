
#include <mbed.h>

PwmOut ledPWM(A7);

int main() {

    ledPWM.period(0.01f);
    ledPWM=0.0f;
    while(true) {

        for(float val = 0.0f; val < 1.0f; val +=0.05f){
            ledPWM = val;
            wait(0.05f);
        }
        for(float val = 1.0f; val < 1.0f; val -=0.05f){
            ledPWM = val;
            wait(0.05f);
        }

        }
    }

#include "mbed.h"

Ticker timeup;
DigitalOut redLED(LED1);

void blink()
{
    redLED = !redLED;
}

int main()
{
    timeup.attach(&blink, 0.2);
    while(1){
    }
}
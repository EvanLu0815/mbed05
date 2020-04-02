#include "mbed.h"

Serial pc(USBTX, USBRX);
Timer t;

int main()
{
    t.start();
    pc.printf("Hello from the other side\n");
    t.stop();
    pc.printf("The time taken was %f seconds\n", t.read());
}
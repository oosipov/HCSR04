#include <HCSR04.h>

HCSR04 hc(2,new int[6]{5,6,7,8,9,10},6);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    for (int i = 0; i < 6; i++ ) {
        Serial.println( hc.dist(i) );
    }
}
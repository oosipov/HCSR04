#include <HCSR04.h>

HCSR04 hc(5,6);

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    Serial.println( hc.dist() );
}
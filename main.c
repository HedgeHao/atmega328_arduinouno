#include <arduinoUno.h>
#include <atmega328p.h>

#define F_CPU 16000000
#include <util/delay.h>

int main(void)
{
    pinMode(13, OUTPUT);
    while (1)
    {
        digitalWrite(13, 1);
        _delay_ms(1000);
        digitalWrite(13, 0);
        _delay_ms(1000);
    }
}
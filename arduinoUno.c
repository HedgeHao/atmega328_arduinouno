#include <arduinoUno.h>
#include <atmega328p.h>

void pinMode(int pin, int value)
{
    if (pin >= 8 && pin <= 13)
    {
        if (value == OUTPUT)
        {
            DDRB |= (1 << (pin - 8));
        }
    }
}

void digitalWrite(int pin, int value)
{
    if (pin >= 8 && pin <= 13)
    {
        value == 1 ? (PORTB |= (1 << (pin - 8))) : (PORTB &= ~(1 << (pin - 8)));
    }
}
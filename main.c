#include <arduinoUno.h>
#include <atmega328p.h>

#define F_CPU 16000000
#include <util/delay.h>

void test_digitalRead(){
    pinMode(2, INPUT);
    pinMode(11, OUTPUT);
    while(1){
        digitalWrite(11, digitalRead(2));
        _delay_ms(50);
    }
}

void test_digitalWrite(){
    pinMode(11, OUTPUT);
    while (1)
    {
        digitalWrite(11, 1);
        _delay_ms(1000);
        digitalWrite(11, 0);
        _delay_ms(1000);
    }
}

int main(void)
{
    // test_digitalWrite();
    test_digitalRead();

}
#include <digital_out.h>
#include <Arduino.h>

Digital_out::Digital_out(int pin)
{
    pinMask = pin;
}

void Digital_out::init()
{
    pinMode(pinMask, OUTPUT);
}

void Digital_out::set_light()
{
    int photocellInput = (analogRead(0)/4);
    analogWrite(pinMask, photocellInput);
}

void Digital_out::set_lo()
{
    analogWrite(pinMask,0);
}

void Digital_out::toggle()
{
}

void Digital_out::reset()
{
    set_lo();
    delay(1000);
}

void Digital_out::pre_operational(){
    int i = 0;
    while(i<10){
        analogWrite(pinMask,0);
        delay(500);
        analogWrite(pinMask,255);
        delay(500);
        i = i +1;
    }
}
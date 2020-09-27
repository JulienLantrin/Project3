#include <Arduino.h>
#include <digital_out.h>

int ledPin = 3;

Digital_out led(ledPin);

void setup()  {
  led.init();
}

void loop()  {
  int i = 0;
  while (i<500){
    led.set_light();
    delay(20);
    i = i +1;
  }
  led.reset();
  led.pre_operational();
}
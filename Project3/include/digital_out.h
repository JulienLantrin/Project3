#include <avr/io.h>

class Digital_out
{
    public:
        Digital_out(int pin);
        void init();
        void set_light();
        void set_lo();
        void toggle();
        void reset();
        void pre_operational();
    private:
        uint8_t pinMask;
};
#ifndef RELAY_MANAGER_H

#define RELAY_MANAGER_H

#include <Arduino.h>

class RelayManager

{

public:

    void begin();

    void on(uint8_t relay);

    void off(uint8_t relay);

    bool state(uint8_t relay);

private:

    bool relayState[4];

};

#endif
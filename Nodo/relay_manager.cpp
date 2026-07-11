#include "relay_manager.h"

#include "config.h"

void RelayManager::begin()

{

    pinMode(RELAY1, OUTPUT);

    pinMode(RELAY2, OUTPUT);

    pinMode(RELAY3, OUTPUT);

    pinMode(RELAY4, OUTPUT);

    off(1);

    off(2);

    off(3);

    off(4);

}

void RelayManager::on(uint8_t relay)

{

    switch (relay)

    {

    case 1:

        digitalWrite(RELAY1, HIGH);

        relayState[0] = true;

        break;

    case 2:

        digitalWrite(RELAY2, HIGH);

        relayState[1] = true;

        break;

    case 3:

        digitalWrite(RELAY3, HIGH);

        relayState[2] = true;

        break;

    case 4:

        digitalWrite(RELAY4, HIGH);

        relayState[3] = true;

        break;

    }

}

void RelayManager::off(uint8_t relay)

{

    switch (relay)

    {

    case 1:

        digitalWrite(RELAY1, LOW);

        relayState[0] = false;

        break;

    case 2:

        digitalWrite(RELAY2, LOW);

        relayState[1] = false;

        break;

    case 3:

        digitalWrite(RELAY3, LOW);

        relayState[2] = false;

        break;

    case 4:

        digitalWrite(RELAY4, LOW);

        relayState[3] = false;

        break;

    }

}

bool RelayManager::state(uint8_t relay)

{

    if (relay < 1 || relay > 4)

        return false;

    return relayState[relay - 1];

}
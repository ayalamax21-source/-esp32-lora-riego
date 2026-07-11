#ifndef LORA_MANAGER_H

#define LORA_MANAGER_H

#include <Arduino.h>

class LoRaManager

{

public:

    bool begin();

    void loop();

    bool sendMessage(uint8_t node, String command, String value);

    bool sendACK(uint8_t node);

    void receiveMessage();

private:

    unsigned long lastPacket = 0;

};

#endif
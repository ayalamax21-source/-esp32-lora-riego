#ifndef LORA_MANAGER_H

#define LORA_MANAGER_H

#include <Arduino.h>

class LoRaManager

{

public:

    bool begin();

    void loop();

private:

    void processMessage(String message);

    void sendACK();

};

#endif
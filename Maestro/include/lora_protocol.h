#ifndef LORA_PROTOCOL_H

#define LORA_PROTOCOL_H

#include <Arduino.h>

enum MessageType {

    MSG_PING = 0,

    MSG_PONG,

    MSG_COMMAND,

    MSG_ACK,

    MSG_STATUS

};

struct LoRaPacket {

    uint8_t source;

    uint8_t destination;

    uint8_t type;

    uint16_t id;

    char command[16];

    char value[16];

};

#endif
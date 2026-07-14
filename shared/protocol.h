#ifndef PROTOCOL_H

#define PROTOCOL_H

#include <Arduino.h>

#define MSG_MAX_LENGTH 64

enum MessageType {

    MSG_COMMAND = 1,

    MSG_STATUS  = 2,

    MSG_ACK     = 3,

    MSG_ERROR   = 4

};

struct LoRaMessage {

    uint8_t sender;

    uint8_t receiver;

    MessageType type;

    char command[16];

    char value[32];

};

#endif
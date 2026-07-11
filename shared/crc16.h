#ifndef PROTOCOL_H

#define PROTOCOL_H

#include <Arduino.h>

#define MASTER_ID 0

enum CommandType : uint8_t

{

    CMD_ON = 1,

    CMD_OFF,

    CMD_STATUS,

    CMD_ACK,

    CMD_SENSOR,

    CMD_ERROR,

    CMD_PING,

    CMD_PONG

};

struct LoRaPacket

{

    uint8_t destination;

    uint8_t source;

    CommandType command;

    uint8_t valve;

    uint16_t value;

    uint16_t crc;

};

#endif
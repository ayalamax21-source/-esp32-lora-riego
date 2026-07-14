#ifndef PROTOCOL_H

#define PROTOCOL_H

#include <Arduino.h>

// Tipos de mensajes entre Maestro y Nodos

enum MessageType : uint8_t

{

    MSG_HEARTBEAT = 1,

    MSG_STATUS = 2,

    MSG_OPEN_VALVE = 3,

    MSG_CLOSE_VALVE = 4,

    MSG_ACK = 5,

    MSG_ERROR = 6

};

// Paquete estándar de comunicación LoRa

struct LoRaPacket

{

    uint8_t source;

    uint8_t destination;

    uint8_t type;

    uint8_t valve;

    uint8_t value;

    uint16_t crc;

};

#endif
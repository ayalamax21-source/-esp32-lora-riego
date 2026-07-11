#include "crc16.h"

uint16_t calculateCRC16(const uint8_t *data, size_t length)

{

    uint16_t crc = 0xFFFF;

    while (length--)

    {

        crc ^= *data++;

        for (uint8_t i = 0; i < 8; i++)

        {

            if (crc & 1)

                crc = (crc >> 1) ^ 0xA001;

            else

                crc >>= 1;

        }

    }

    return crc;

}
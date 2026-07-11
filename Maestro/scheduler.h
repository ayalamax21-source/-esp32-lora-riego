#ifndef SCHEDULER_H

#define SCHEDULER_H

#include <Arduino.h>

struct IrrigationProgram

{

    bool enabled;

    uint8_t node;

    uint8_t valve;

    uint8_t hour;

    uint8_t minute;

    uint16_t duration;

};

class Scheduler

{

public:

    void begin();

    void loop();

    void addProgram(IrrigationProgram program);

    void removeProgram(uint8_t index);

    void printPrograms();

private:

    static const uint8_t MAX_PROGRAMS = 50;

    IrrigationProgram programs[MAX_PROGRAMS];

};

#endif
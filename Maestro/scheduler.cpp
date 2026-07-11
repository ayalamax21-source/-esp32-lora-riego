#include "scheduler.h"

void Scheduler::begin()

{

    for (int i = 0; i < MAX_PROGRAMS; i++)

    {

        programs[i].enabled = false;

    }

    Serial.println("Scheduler iniciado.");

}

void Scheduler::loop()

{

    // Aquí se revisarán los horarios cada minuto

}

void Scheduler::addProgram(IrrigationProgram program)

{

    for (int i = 0; i < MAX_PROGRAMS; i++)

    {

        if (!programs[i].enabled)

        {

            programs[i] = program;

            programs[i].enabled = true;

            Serial.println("Programa agregado.");

            return;

        }

    }

    Serial.println("No hay espacio para más programas.");

}

void Scheduler::removeProgram(uint8_t index)

{

    if (index >= MAX_PROGRAMS)

        return;

    programs[index].enabled = false;

}

void Scheduler::printPrograms()

{

    Serial.println("===== Programas =====");

    for (int i = 0; i < MAX_PROGRAMS; i++)

    {

        if (programs[i].enabled)

        {

            Serial.print("Programa ");

            Serial.print(i + 1);

            Serial.print(" Nodo ");

            Serial.print(programs[i].node);

            Serial.print(" Valvula ");

            Serial.print(programs[i].valve);

            Serial.print(" Hora ");

            if (programs[i].hour < 10)

                Serial.print("0");

            Serial.print(programs[i].hour);

            Serial.print(":");

            if (programs[i].minute < 10)

                Serial.print("0");

            Serial.print(programs[i].minute);

            Serial.print(" Duracion ");

            Serial.print(programs[i].duration);

            Serial.println(" min");

        }

    }

}
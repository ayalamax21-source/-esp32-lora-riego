#include <Arduino.h>

#include "config.h"

void setup()

{

    Serial.begin(115200);

    Serial.println();

    Serial.println("==============================");

    Serial.println("ESP32 LoRa Nodo");

    Serial.print("Nodo ID: ");

    Serial.println(NODE_ID);

    Serial.print("Versión: ");

    Serial.println(VERSION);

    Serial.println("==============================");

    // Configuración de relevadores

    pinMode(RELAY1, OUTPUT);

    pinMode(RELAY2, OUTPUT);

    pinMode(RELAY3, OUTPUT);

    pinMode(RELAY4, OUTPUT);

    // Inicialmente todas las válvulas apagadas

    digitalWrite(RELAY1, LOW);

    digitalWrite(RELAY2, LOW);

    digitalWrite(RELAY3, LOW);

    digitalWrite(RELAY4, LOW);

    // Aquí iniciaremos LoRa

}

void loop()

{

    // Aquí escucharemos continuamente los mensajes del Maestro

}
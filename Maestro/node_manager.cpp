#include <Arduino.h>

#include "config.h"

#include "lora_manager.h"

#include "node_manager.h"

LoRaManager loraManager;

NodeManager nodeManager;

unsigned long lastStatusPrint = 0;

void setup()

{

    Serial.begin(115200);

    Serial.println();

    Serial.println("====================================");

    Serial.println(PROJECT_NAME);

    Serial.print("Version: ");

    Serial.println(VERSION);

    Serial.println("Inicializando sistema...");

    Serial.println("====================================");

    nodeManager.begin();

    Serial.println("Administrador de nodos iniciado");

    if (!loraManager.begin())

    {

        Serial.println("Error al iniciar LoRa");

    }

    else

    {

        Serial.println("LoRa iniciado correctamente");

    }

    // Aquí posteriormente iniciaremos:

    // WiFi

    // Servidor Web

    // Programador de riego

}

void loop()

{

    loraManager.loop();

    // Mostrar estado de los nodos cada 10 segundos

    if (millis() - lastStatusPrint >= 10000)

    {

        lastStatusPrint = millis();

        nodeManager.printStatus();

    }

    // Aquí se ejecutarán continuamente:

    // Servidor Web

    // Monitoreo de nodos

    // Programación de riego

    // Sensores

}
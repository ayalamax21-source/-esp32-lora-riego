#include "lora_manager.h"

#include "config.h"

bool LoRaManager::begin()

{

    Serial.println("Inicializando LoRa...");

    // Aquí se inicializará el módulo SX1276/SX1278

    Serial.println("LoRa listo.");

    return true;

}

void LoRaManager::loop()

{

    // Aquí escucharemos continuamente paquetes LoRa

}

void LoRaManager::processMessage(String message)

{

    Serial.print("Mensaje recibido: ");

    Serial.println(message);

    // Aquí interpretaremos los comandos

}

void LoRaManager::sendACK()

{

    Serial.print("Enviando ACK desde Nodo ");

    Serial.println(NODE_ID);

    // Aquí enviaremos el ACK al Maestro

}
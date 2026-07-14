#include "lora_manager.h"

#include "config.h"

bool LoRaManager::begin()

{

    Serial.println("Inicializando LoRa...");

    // Aquí posteriormente inicializaremos la librería LoRa

    Serial.println("LoRa listo.");

    return true;

}

void LoRaManager::loop()

{

    receiveMessage();

}

bool LoRaManager::sendMessage(uint8_t node, String command, String value)

{

    Serial.print("Enviando a Nodo ");

    Serial.print(node);

    Serial.print(" -> ");

    Serial.print(command);

    Serial.print(" ");

    Serial.println(value);

    // Aquí enviaremos el paquete LoRa

    return true;

}

bool LoRaManager::sendACK(uint8_t node)

{

    Serial.print("ACK enviado al Nodo ");

    Serial.println(node);

    return true;

}

void LoRaManager::receiveMessage()

{

    // Aquí recibiremos y procesaremos los mensajes LoRa

    // En la siguiente etapa agregaremos la librería LoRa

    // y el código para interpretar los paquetes.

}
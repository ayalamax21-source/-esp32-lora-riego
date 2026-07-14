#include <Arduino.h>

#include "config.h"

#include "lora_manager.h"

LoRaManager loraManager;

void setup() {

  Serial.begin(115200);

  Serial.println();

  Serial.println("====================================");

  Serial.println(PROJECT_NAME);

  Serial.print("Version: ");

  Serial.println(VERSION);

  Serial.println("Inicializando sistema...");

  Serial.println("====================================");

  if (!loraManager.begin()) {

    Serial.println("Error al iniciar LoRa");

  } else {

    Serial.println("LoRa iniciado correctamente");

  }

  // Aquí posteriormente iniciaremos:

  // WiFi

  // Servidor Web

  // Programador de riego

}

void loop() {

  loraManager.loop();

  // Aquí se ejecutarán continuamente:

  // Servidor Web

  // Monitoreo de nodos

  // Programación de riego

  // Sensores

}
  
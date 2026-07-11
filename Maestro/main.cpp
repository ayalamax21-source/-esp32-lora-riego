#include <Arduino.h>

#include "config.h"

void setup() {

  Serial.begin(115200);

  Serial.println();

  Serial.println("====================================");

  Serial.println(PROJECT_NAME);

  Serial.print("Version: ");

  Serial.println(VERSION);

  Serial.println("Inicializando sistema...");

  Serial.println("====================================");

  // Aquí posteriormente iniciaremos:

  // WiFi

  // LoRa

  // Servidor Web

  // Programador de riego

}

void loop() {

  // Aquí se ejecutarán continuamente:

  // Comunicación LoRa

  // Servidor Web

  // Monitoreo de nodos

  // Programación de riego

  // Sensores

}
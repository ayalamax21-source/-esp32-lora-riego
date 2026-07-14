#ifndef CONFIG_H

#define CONFIG_H

//====================================================

// CONFIGURACIÓN GENERAL DEL PROYECTO

//====================================================

//------------ WiFi ----------------

#define WIFI_SSID      "TU_WIFI"

#define WIFI_PASSWORD  "TU_PASSWORD"

//------------ LoRa ----------------

#define LORA_FREQUENCY 433E6

//#define LORA_FREQUENCY 433E6     // Descomentar si usas 433 MHz

// Pines ESP32 -> LoRa SX1276/#define LORA_SCK   18

#define LORA_MISO  19

#define LORA_MOSI  23

#define LORA_SS     5

#define LORA_RST   14

#define LORA_DIO0  26



//------------ Sistema ----------------

#define MAX_NODES          120

#define MAX_VALVES_NODE      8

#define ACK_TIMEOUT       3000

#define RETRY_COUNT          3

//------------ Versión ----------------

#define PROJECT_NAME    "ESP32 LoRa Riego"

#define VERSION         "1.0.0"

#endif
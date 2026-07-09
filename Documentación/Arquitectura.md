# Arquitectura del Sistema ESP32 LoRa Riego

## Objetivo

Desarrollar un sistema de riego inteligente basado en ESP32 y LoRa capaz de controlar válvulas, recibir información de sensores y comunicarse con un controlador maestro.

## Componentes

- ESP32 Maestro

- ESP32 Nodo

- Módulos LoRa SX1276/SX1278

- Sensores

- Relevadores

- Electroválvulas

- Fuente de alimentación

- Interfaz Web

## Flujo del sistema

Usuario

↓

Interfaz Web

↓

ESP32 Maestro

↓

LoRa

↓

ESP32 Nodo

↓

Relevador

↓

Electroválvula

## Funciones

- Activación remota de válvulas

- Recepción del estado de los nodos

- Confirmación de mensajes

- Comunicación de largo alcance

- Escalable para decenas de nodos
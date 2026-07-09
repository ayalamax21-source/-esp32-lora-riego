# Conexión del ESP32 Maestro

## Objetivo

El ESP32 Maestro será el cerebro del sistema de riego. Su función es recibir órdenes desde la interfaz web y enviarlas mediante LoRa a los nodos remotos.

## Componentes

- ESP32 DevKit V1

- Módulo LoRa SX1276/SX1278

- Antena LoRa

- Fuente de alimentación 5V

- Router Wi-Fi o Starlink

## Conexión ESP32 ↔ LoRa

| ESP32 | LoRa |

|-------|------|

| 3.3V | VCC |

| GND | GND |

| GPIO18 | SCK |

| GPIO19 | MISO |

| GPIO23 | MOSI |

| GPIO5 | NSS (CS) |

| GPIO14 | RST |

| GPIO26 | DIO0 |

> **Nota:** Estos pines pueden modificarse en el software si se utiliza otra tarjeta ESP32.

## Funciones del Maestro

- Conectarse a la red Wi-Fi.

- Alojar la interfaz web.

- Enviar comandos LoRa.

- Recibir confirmaciones (ACK).

- Registrar eventos.

- Monitorear el estado de los nodos.

- Administrar múltiples zonas de riego.

## Comunicación

ESP32 Maestro

↓

Wi-Fi

↓

Interfaz Web

↓

LoRa

↓

Nodos Remotos
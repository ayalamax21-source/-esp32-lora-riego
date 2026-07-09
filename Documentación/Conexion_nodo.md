# Conexión del ESP32 Nodo

## Objetivo

El ESP32 Nodo recibe comandos del Maestro mediante LoRa y controla las electroválvulas o relevadores instalados en campo. También puede enviar información de sensores al Maestro.

## Componentes

- ESP32 DevKit V1

- Módulo LoRa SX1276/SX1278

- Módulo de relevadores

- Fuente de alimentación

- Electroválvulas

- Sensores (opcionales)

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

## Conexión de Relevadores

| ESP32 | Función |

|-------|---------|

| GPIO25 | Relevador 1 |

| GPIO33 | Relevador 2 |

| GPIO32 | Relevador 3 |

| GPIO27 | Relevador 4 |

> Los pines pueden modificarse según las necesidades del proyecto.

## Funciones del Nodo

- Recibir comandos LoRa.

- Activar o desactivar relevadores.

- Enviar confirmación (ACK).

- Reportar el estado de las salidas.

- Leer sensores.

- Informar fallas o alarmas.

## Flujo de operación

ESP32 Maestro

↓

LoRa

↓

ESP32 Nodo

↓

Relevador

↓

Electroválvul
# Protocolo de Comunicación LoRa

## Objetivo

Definir el formato de comunicación entre el ESP32 Maestro y los Nodos para garantizar una transmisión confiable y escalable.

## Estructura del Mensaje

| Campo | Descripción |

|--------|-------------|

| ID | Identificador del nodo |

| COMANDO | Acción a realizar |

| VALOR | Estado o dato |

| CRC | Verificación de errores |

## Comandos

| Código | Acción |

|---------|--------|

| ON | Activar salida |

| OFF | Desactivar salida |

| STATUS | Solicitar estado |

| ACK | Confirmación de recepción |

| SENSOR | Enviar datos de sensores |

| ERROR | Reportar fallo |

## Ejemplos

Activar válvula 3 del Nodo 05

```

05,ON,03

```

Apagar válvula 3

```

05,OFF,03

```

Solicitar estado

```

05,STATUS

```

Respuesta correcta

```

05,ACK

```

## Flujo de Comunicación

1. El Maestro envía un comando.

2. El Nodo recibe el mensaje.

3. El Nodo ejecuta la acción.

4. El Nodo responde con ACK.

5. El Maestro registra el resultado.

## Características

- Comunicación bidireccional.

- Confirmación de recepción.

- Identificación única de nodos.

- Fácil expansión a múltiples dispositivos.

- Compatible con futuras actualizaciones OTA.
void setup() {

  Serial.begin(115200);

  Serial.println("Receptor LoRa iniciado");

}

void loop() {

  Serial.println("Esperando mensajes...");

  delay(2000);

}

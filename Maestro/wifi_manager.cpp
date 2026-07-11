#include "wifi_manager.h"

#include "config.h"

bool WiFiManager::begin()

{

    WiFi.mode(WIFI_STA);

    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

    Serial.print("Conectando a WiFi");

    unsigned long start = millis();

    while (WiFi.status() != WL_CONNECTED && millis() - start < 15000)

    {

        delay(500);

        Serial.print(".");

    }

    if (WiFi.status() == WL_CONNECTED)

    {

        Serial.println();

        Serial.println("WiFi conectado");

        Serial.print("IP: ");

        Serial.println(WiFi.localIP());

        return true;

    }

    Serial.println();

    Serial.println("No fue posible conectar al WiFi");

    return false;

}

bool WiFiManager::isConnected()

{

    return WiFi.status() == WL_CONNECTED;

}

void WiFiManager::reconnect()

{

    if (WiFi.status() == WL_CONNECTED)

        return;

    if (millis() - lastReconnectAttempt < 10000)

        return;

    lastReconnectAttempt = millis();

    Serial.println("Reconectando WiFi...");

    WiFi.disconnect();

    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

}

void WiFiManager::loop()

{

    reconnect();

}
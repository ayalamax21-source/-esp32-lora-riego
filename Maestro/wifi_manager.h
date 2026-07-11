#ifndef WIFI_MANAGER_H

#define WIFI_MANAGER_H

#include <WiFi.h>

class WiFiManager

{

public:

    bool begin();

    bool isConnected();

    void reconnect();

    void loop();

private:

    unsigned long lastReconnectAttempt = 0;

};

#endif
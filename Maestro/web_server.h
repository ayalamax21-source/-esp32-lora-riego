#ifndef WEB_SERVER_H

#define WEB_SERVER_H

#include <Arduino.h>

class WebServerManager

{

public:

    bool begin();

    void loop();

private:

    void configureRoutes();

};

#endif
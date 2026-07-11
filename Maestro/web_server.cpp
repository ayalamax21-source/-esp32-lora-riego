#include "web_server.h"

bool WebServerManager::begin()

{

    Serial.println("Iniciando servidor web...");

    configureRoutes();

    Serial.println("Servidor web listo.");

    return true;

}

void WebServerManager::configureRoutes()

{

    Serial.println("Configurando rutas...");

    

    // Aquí agregaremos:

    // Página principal

    // Estado de nodos

    // Control de válvulas

    // Configuración

    // API REST

}

void WebServerManager::loop()

{

    // Aquí atenderemos las solicitudes del navegador

}
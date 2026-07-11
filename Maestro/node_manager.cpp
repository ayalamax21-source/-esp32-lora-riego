#include "node_manager.h"

void NodeManager::begin()

{

    for (int i = 0; i < MAX_NODES; i++)

    {

        nodes[i].id = i + 1;

        nodes[i].online = false;

        nodes[i].valves = 0;

        nodes[i].rssi = 0;

        nodes[i].lastSeen = 0;

    }

}

void NodeManager::updateNode(uint8_t id, int rssi)

{

    if (id == 0 || id > MAX_NODES)

        return;

    nodes[id - 1].online = true;

    nodes[id - 1].rssi = rssi;

    nodes[id - 1].lastSeen = millis();

}

bool NodeManager::isOnline(uint8_t id)

{

    if (id == 0 || id > MAX_NODES)

        return false;

    return nodes[id - 1].online;

}

void NodeManager::printStatus()

{

    Serial.println("===== Estado de Nodos =====");

    for (int i = 0; i < MAX_NODES; i++)

    {

        if (nodes[i].online)

        {

            Serial.print("Nodo ");

            Serial.print(nodes[i].id);

            Serial.print(" | RSSI: ");

            Serial.print(nodes[i].rssi);

            Serial.print(" | Último contacto: ");

            Serial.print(nodes[i].lastSeen);

            Serial.println(" ms");

        }

    }

}
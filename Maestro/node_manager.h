#ifndef NODE_MANAGER_H

#define NODE_MANAGER_H

#include <Arduino.h>

#include "config.h"

struct Node

{

    uint8_t id;

    bool online;

    uint8_t valves;

    int rssi;

    unsigned long lastSeen;

};

class NodeManager

{

public:

    void begin();

    void updateNode(uint8_t id, int rssi);

    bool isOnline(uint8_t id);

    void printStatus();

private:

    Node nodes[MAX_NODES];

};

#endif
#pragma once
#include <string>

#include "cmpkt.h"

struct cConnection
{
    char StartNode;
    char EndNode;
    float Weight;

    cConnection(char startNode, char endNode, float weight) : StartNode(startNode), EndNode(endNode), Weight(weight){}

    std::string Serialize();
};

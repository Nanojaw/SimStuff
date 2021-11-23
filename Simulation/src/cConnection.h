#pragma once
#include <string>

struct cConnection
{
    char StartNode;
    char EndNode;
    short Weight;

    cConnection(char startNode, char endNode, short weight) : StartNode(startNode), EndNode(endNode), Weight(weight){}

    std::string Serialize() const;
};

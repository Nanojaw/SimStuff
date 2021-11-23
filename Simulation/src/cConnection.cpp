#include "cConnection.h"
#include "cmpkt.h"

std::string cConnection::Serialize() const
{
    return cmpkt::Serialize_Primitives(*this);
}

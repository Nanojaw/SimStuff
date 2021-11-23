#include "cCoord.h"
#include "cmpkt.h"

std::string cCoord::Serialize()
{
    return cmpkt::Serialize_Primitives(*this);
}

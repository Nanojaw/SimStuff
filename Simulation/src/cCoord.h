#pragma once
#include <cstdint>
#include <string>

struct cCoord
{
   uint8_t X;
   uint8_t Y;

   cCoord(uint8_t x, uint8_t y) : X(x), Y(y) {}

   std::string Serialize();
};

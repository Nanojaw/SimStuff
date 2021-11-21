#include <iostream>
#include "../vector.h"

int main()
{
    std::cout << "Gello, World!" << std::endl;

    cVecotor3F createTest1{};
    cVecotor3F createTest2(2, 3, 4);
    cVecotor3F createTest3(8);

    cVecotor3F copyTest = createTest2;
    
    cVecotor3F moveTest = std::move(createTest3);
    
    return 0;
}
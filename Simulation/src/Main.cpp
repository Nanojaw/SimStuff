#include <iostream>
#include "cSpecimen.h"

int main(const int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
	{
		std::cout << argv[i] << std::endl;
	}
	
	cSpecimen specimen = {cCoord(123, 134), {cConnection('a', 'b', 24930), cConnection('b', 'c', 25930)}};

	std::cout << specimen.Genome[0].Serialize() << std::endl;

	return 0;
}
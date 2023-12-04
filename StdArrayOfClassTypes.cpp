// StdArrayOfClassTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

struct House
{
	int number{};
	int stories{};
	int rooms{};
};


int main()
{
	constexpr std::array<House, 3> houses{{ // note double braces
		{11,4,5},
		{12,3,4},
		{13,2,7}
		}};

	for (const auto& house : houses)
	{
		std::cout << "House number " << house.number << " has " << house.stories * house.rooms << " rooms.\n";
	}

	return 0;
}


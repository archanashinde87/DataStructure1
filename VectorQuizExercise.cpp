// VectorQuizExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string_view>
#include <cassert>

namespace Items
{
	enum Type
	{
		health_potions, 
		torches, 
		arrows,
		max_items
	};
}

int countTotalItems(const std::vector<int>& numberOfItems)
{
	int totalItems{ 0 };
	for (auto count : numberOfItems)
	{
		totalItems += count;
	}

	return totalItems;
}

std::string_view getItemNameSingular(Items::Type type) 
{
	switch (type)
	{
	case Items::health_potions :
		return "health potion";
	case Items::torches:
		return "torch";
	case Items::arrows:
		return "arrow";
	default:
		return "Unknown";

	}
}
std::string_view getItemNamePlural(Items::Type type)
{
	switch (type)
	{
	case Items::health_potions:
		return "health potions";
	case Items::torches:
		return "torches";
	case Items::arrows:
		return "arrows";
	default:
		return "Unknown";

	}

}

void printItems(const std::vector<int>& numberOfItems, Items::Type type)
{
	bool plural{ numberOfItems[type] != 1 };
	std::cout << "You have " << numberOfItems[type] << ' ';
	std::cout << (plural ? getItemNamePlural(type) : getItemNameSingular(type)) <<'\n';
}
int main()
{
	// Vector Definitions for different requirements
	using namespace std::string_view_literals;
	std::vector evenNums{ 2,4,6,8,10,12 };
	const std::vector values{ 1.2, 3.4, 5.6,7.8 };
	const std::vector names{"Alex"sv, "Brad"sv, "Charles"sv,"Dave"sv};
	std::vector single{ 12 };
	std::vector<int> twelveValues(12);

	//
	std::vector numberOfItems{ 1, 5, 10 };
	assert(std::size(numberOfItems)==Items::max_items);

	for (int i{ 0 }; i < Items::max_items; ++i)
	{
		auto item{ static_cast<Items::Type>(i) };
		printItems(numberOfItems, item);
	}
	std::cout << "You have " << countTotalItems(numberOfItems) << " total items\n";

	return 0;
}


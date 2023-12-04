// RangeBasedForLoops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<string>
#include<array>
#include<ranges> // C++20

int main()
{
	// Range-based for loops
	std::vector fibonacci{ 0,1,1,2,3,5,8,13,21,34,55,89 };
	for (int num : fibonacci) // iterate over array fibonacci and copy each value into `num`
		std::cout << num << ' '; // print the current value of `num`
	std::cout << '\n';

	// Range-based for loops and type deduction using the auto keyword
	std::vector fibonacci1{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	for (auto num1 : fibonacci1) // compiler will deduce type of num to be `int`
		std::cout << num1 << ' ';
	std::cout << '\n';

	// Avoid element copies using references
	using namespace std::literals;
	std::vector words{ "archana"s, "likes"s, "frozen"s, "yoghurt"s }; // std::vector<std::string>

	for (const auto& word : words)
	{
		std::cout << word << ' ';
	}
	std::cout << '\n';

	// Range-based for loops in reverse C++20 feature from ranges header
	for (const auto& word : std::views::reverse(words)) // create a reverse view
		std::cout << word << ' ';
	std::cout << '\n';


	// Range-based for loops and other standard container types
	std::array fibonacci2{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 }; // note use of std::array here
	for (auto number2 : fibonacci2)
	{
		std::cout << number2 << ' ';
	}

	std::cout << '\n';

	return 0;
}


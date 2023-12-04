// FizzBuzzGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<string_view>
#include<cassert>

void fizzbuzz(int num)
{
	using namespace std::literals::string_view_literals;

	const std::vector divisors{ 3,5,7,11,13,17,19 };
	const std::vector words{ "fizz"sv,"buzz"sv, "pop"sv, "bang"sv, "jazz"sv, "pow"sv, "boom"sv };

	assert(divisors.size() == words.size() && "fizzbuzz: array sizes don't match");

	for (int count{ 1 }; count <= num; ++count)
	{
		bool printed{ false };
		for (std::size_t index{ 0 }; index < divisors.size(); ++index)
		{
			if (count % divisors[index] == 0)
			{
				std::cout << words[index];
				printed = true;
			}
		}

			if (!printed)
				std::cout << count;
			std::cout << '\n';
	}
}

int main()
{
	fizzbuzz(150);

	return 0;
}
// CStyleBuiltInArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

constexpr int perfectSquares[]{ 0,1,4,9 };
int main()
{
	while (true)
	{
		std::cout << "Enter a single digit integer, or -1 to quit : ";
		int input{};
		std::cin >> input;

		if (!std::cin) // handle bad data
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			continue;
		}

		if (input == -1) // if user entered -1 then quit
		{
			std::cout << "Bye\n";
			break;
		}
		
		bool inputPS{ false };
		for (auto i : perfectSquares)
		{
			if (input == i)
				inputPS = true;
		}

		if (inputPS)
			std::cout << input << " is a perfect square\n";
		else
			std::cout << input << " is not a perfect square\n";

	}

	return 0;
}


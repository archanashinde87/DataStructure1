// ReturningStdArrayByValue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

template<typename T, size_t N>
std::array<T, N> inputArray() // return by value in cases element type is cheap to copy, not used in performance sensitive context, array isn't huge
{
	std::array<T, N> arr{};
	size_t index{ 0 };
	while (index < N)
	{
		std::cout << "Enter value #" << index << ": ";
		std::cin >> arr[index];

		if (!std::cin)  // handle bad input
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			continue;
		}
		++index;
	}
	return arr;
}

int main()
{
	std::array<int, 5> arr{inputArray<int, 5>()};
	std::cout << "The value of element 2 is: " << arr[2] << '\n';

	return 0;
}


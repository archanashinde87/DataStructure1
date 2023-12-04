// TwoDimensionalArrayExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
	constexpr int numofrows{ 10 };
	constexpr int numofcols{ 10 };

	// Declare a 10x10 array
	int product[numofrows][numofcols]{};

	// Calculate a multiplication table
	// We don't need to calc row and col 0 since mult by 0 always is 0
	for (std::size_t row{ 1 }; row < numofrows; ++row)
	{
		for (std::size_t col{ 1 }; col < numofcols; ++col)
		{
			product[row][col] = static_cast<int>(row * col);
		}
	}

	for (std::size_t row{ 1 }; row < numofrows; ++row)
	{
		for (std::size_t col{ 1 }; col < numofcols; ++col)
		{
			std::cout << product[row][col] << '\t';
		}
		std::cout << '\n';
	}

	return 0;
}

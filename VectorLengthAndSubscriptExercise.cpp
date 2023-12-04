// VectorLengthAndSubscriptExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector hello{ 'h','e','l','l','o' };
	std::cout << "The array has " << std::size(hello) << " elements.\n";
	std::cout << hello[1] << hello.at(1) << '\n';

	return 0;
}

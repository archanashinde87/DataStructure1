// SimpleVectorContainerExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector Squares{ 1,4,9,16,25 };
	std::vector<int> inputs(3); // create a vector of length 3

	std::cout << "Enter 3 integers: ";
	std::cin >> inputs[0] >> inputs[1] >> inputs[2];

	std::cout << "The sum is : " << inputs[0] + inputs[1] + inputs[2] << '\n';
	std::cout << "The product is : " << inputs[0] * inputs[1] * inputs[2] << '\n';

	return 0;
}


// LengthVsCapacityOfVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void printCapLength(const std::vector<int>& vec)
{
	std::cout << "Capacity: " << vec.capacity() << " Length: " << vec.size() << '\n';
}

int main()
{
	std::vector v{ 0,1,2 }; // length is initially 3

	printCapLength(v);

	for (int i : v)
		std::cout << i << ' ';
	std::cout << '\n';

	v.resize(5); // resize to 5 elements

	printCapLength(v);

	for (int i : v)
		std::cout << i << ' ';
	std::cout << '\n';

	// Why differentiate Length and Capacity
	// Create a vector with length 5
	std::vector v1{ 5,6,7,8,9 };
	printCapLength(v1);
	for (int i : v1)
		std::cout << i << ' ';
	std::cout << '\n';

	// resize vector to 3 elements
	v1.resize(3);
	printCapLength(v1);

	for (int i : v1)
		std::cout << i << ' ';
	std::cout << '\n';

	// resize vector back to 5 elements
	v1.resize(3);
	printCapLength(v1);

	for (int i : v1)
		std::cout << i << ' ';
	std::cout << '\n';

	return 0;
}


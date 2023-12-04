// ResizingStdVectorAtRuntime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

int main()
{
	std::vector v{ 0,1,2 }; // creates vector with 3 elements
	std::cout << "The length is: " << v.size() << '\n';
	for (int num : v)
		std::cout << num << ' ';
	std::cout << '\n';

	// Resize vector to bigger
	v.resize(5);
	std::cout << "The length is: " << v.size() << '\n';
	for (int num : v)
		std::cout << num << ' ';
	std::cout << '\n';

	//Vectors may also be resized to be smaller :
	std::vector v1{ 3,4,5,6,7,8 };
	std::cout << "The length is: " << v1.size() << '\n';
	for (auto i : v1)
		std::cout << i << ' ';
	std::cout << '\n';

	// Resize vector to smaller
	v1.resize(3);
	std::cout << "The length is:  " << v1.size() << '\n';
	for (auto i : v1)
		std::cout << i << ' ';
	std::cout << '\n';

	return 0;
}


// ArraysOfReferencesThroughReerenceWrapper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <functional> //reference_wrapper

int main()
{
	int x{ 1 };
	int y{ 2 };
	int z{ 3 };

	std::array<std::reference_wrapper<int>, 3> arr{ x,y,z };
	arr[1].get() = 7; // modify the object in array element 1
	std::cout << arr[1] << y << '\n'; // show that we modified arr[1] and y, prints 77

	return 0;

}


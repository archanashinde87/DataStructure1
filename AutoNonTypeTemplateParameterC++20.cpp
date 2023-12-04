// AutoNonTypeTemplateParameterC++20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

template<typename T, auto N>
void passByRef(const std::array<T, N>& arr)
{
	std::cout << arr[0] << '\n';
}

int main()
{
	std::array arr1{ 1,2,3,4,5,6 }; // CTAD deduces type to std::array<int,6>
	passByRef(arr1); // compiler instantiates passByRef(const std::array<int,6>& arr)

	std::array arr2{ 6,7,8,4,5,3,2,1 }; // CTAD deduces type to std::array<int,8>
	passByRef(arr2); // compiler instantiates passByRef(const std::array<int,8>& arr)

	std::array arr3{ 1.2,2.3,3.4,4.5,5.6 }; // CTAD deduces type to std::array<double,5>
	passByRef(arr3); // compiler instantiates passByRef(const std::array<double,5>& arr)

	return 0;
}


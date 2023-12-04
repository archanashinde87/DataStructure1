// FunctionTemplatesWithStdArrayOfDifferentElementTypesOrLengths.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

template<typename T, size_t N> // note that this template parameter declaration matches the one for std::array
void passByRef(const std::array<T, N>& arr) 
{
	std::cout << arr[0] << '\n';
}

template<size_t N> // Only length has been templated here
void passByRef1(const std::array<int, N>& arr)
{
	std::cout << arr[0] << '\n';
}

int main()
{
	std::array arr1{ 9,7,5,3,1 }; // CTAD deduces type to std::array<int, 5>
	passByRef(arr1); // compiler will instantiate passByRef(const std::array<int, 5>& arr)

	std::array arr2{ 1,2,3,4,5,6 }; // CTAD deduces type to std::array<int, 6>
	passByRef(arr2); // compiler will instantiate passByRef(const std::array<int, 6>& arr)

	std::array arr3{ 1.2,2.3,3.4,4.5,5.6,6.7,7.8 }; // CTAD deduces type to std::array<double,7>
	passByRef(arr3); //compiler will instantiate passByRef(const std::array<double, 7>& arr)

	std::array arr4{ 9,7,5,3,1,0,8,6 }; // CTAD deduces type to std::array<int, 8>
	passByRef1(arr4); // compiler will instantiate passByRef1(const std::array<int, 8>& arr)

	std::array arr5{ 1,2,3,4,5,6,7,8,9 }; // CTAD deduces type to std::array<int, 9>
	passByRef1(arr5); // compiler will instantiate passByRef1(const std::array<int, 9>& arr)

	std::array arr6{ 1.2, 3.4, 5.6, 7.8, 9.9 }; // CTAD to infer std::array<double, 5>
	//passByRef1(arr3); // error: compiler can't find matching function

	return 0;
}


// PassingAndReturningStdVectorContainer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

void passByRef(const std::vector<int>& arr) // we must explicitly specify <int> here
{
	std::cout << arr[0] << '\n';
}

template<typename T>
void passByReference(const std::vector<T>& arr) 
{
	std::cout << arr[0] << '\n';
}

void passByReference2(const auto& arr) // abbreviated function template
{
	std::cout << arr[0] << '\n';
}
int main()
{
	std::vector primes{ 2,3,5,7,11 };
	passByRef(primes);

	// Passing std::vector of different element types
	std::vector nums{ 2, 3, 5, 7, 11 };
	passByReference(nums); // ok: compiler will instantiate passByReference(const std::vector<int>&)

	std::vector dbl{ 1.1, 2.2, 3.3 };
	passByReference(dbl);    // ok: compiler will instantiate passByReference(const std::vector<double>&)


	// Passing std::vector of different element types to abbreviated function template
	std::vector nums2{ 2, 3, 5, 7, 11 };
	passByReference2(nums2); // ok: compiler will instantiate passByReference(const std::vector<int>&)

	std::vector dbl2{ 1.1, 2.2, 3.3 };
	passByReference2(dbl2);    // ok: compiler will instantiate passByReference(const std::vector<double>&)

	return 0;
}


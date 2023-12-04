// VectorUnsignedLengthAndSubscriptProblem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
int main()
{
	std::vector prime{ 2,3,5,7,11 };
	std::cout << "length: " << prime.size() << '\n'; // returns length as type `size_type` (alias for `std::size_t`)
	std::cout << "length: " << std::size(prime) << '\n'; // returns length as type `size_type` (alias for `std::size_t`)
	
	int length{ static_cast<int>(prime.size()) }; // static_cast return value to int
	std::cout << "length: " << length << '\n';

	// C++20, returns length as a large signed integral type
	std::cout << "length: " << std::ssize(prime) << '\n';
	int length1{ static_cast<int>(std::ssize(prime)) }; // static_cast return value to int
	std::cout << "length: " << length1 << '\n';
	auto length2{ std::ssize(prime) }; // use auto to deduce signed type, as returned by std::ssize()
	std::cout << "length: " << length2 << '\n';

	//operator[] does no bounds checking
	std::cout << prime[3] << '\n';// print the value of element with index 3 (7)
	//std::cout << prime[9] << '\n'; // invalid index (undefined behavior) crash so commenting it

	//Accessing array elements using the at() member function does runtime bounds checking
	std::cout << prime.at(3) << '\n'; // print the value of element with index 3 (7)
	//std::cout << prime.at(9) << '\n'; // invalid index(vector subscript) (throws exception)

	return 0;
}


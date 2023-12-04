// SimpleVectorContainerExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector primes{ 2,3,5,7,11 }; // hold the first 5 prime numbers (as int)

	std::cout << "The first prime number is: " << primes[0] << '\n';
	std::cout << "The second prime number is: " << primes[1] << '\n';
	std::cout << "The sum of the first 5 prime numbers is: " << primes[0] + primes[1] + primes[2] + primes[3] + primes[4] << '\n';
	std::cout << '\n';

	//Arrays are contiguous in memory
	std::cout << "An int is " << sizeof(int) << " bytes\n";
	std::cout << &(primes[0]) << '\n';
	std::cout << &(primes[1]) << '\n';
	std::cout << &(primes[2]) << '\n';

	//List Constructors takes precedence over other constructors
	// Copy init
	//std::vector<int> v1 = 10;     // 10 not an initializer list, copy init won't match explicit constructor: compilation error

	// Direct init
	std::vector<int> v2(10);      // 10 not an initializer list, matches explicit single-argument constructor

	// List init
	std::vector<int> v3{ 10 };    // { 10 } interpreted as initializer list, matches list constructor

	// Copy list init
	std::vector<int> v4 = { 10 }; // { 10 } interpreted as initializer list, matches list constructor
	std::vector<int> v5({ 10 });  // { 10 } interpreted as initializer list, matches list constructor


	return 0;
}


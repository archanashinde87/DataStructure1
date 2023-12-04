// CStyleStringArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void printCString(const char* str)
{
	// While we haven't encountered a null terminator
	while (*str != '\0')
	{
		// print the current character
		std::cout << *str;

		// and use pointer arithmetic to move str to the next character
		++str;
	}
}

void printCStringBackwards(const char* str)
{
	// We can't modify str this time (we need it later)
	// So we'll define a new pointer with the same address as str
	const char* ptr{ str };

	// Find the null terminator
	while (*ptr != '\0')
		++ptr;

	// Now walk backwards and print characters until ptr reaches str again
	while (ptr-- != str)
		std::cout << *ptr;
}
int main()
{
	printCString("Hello World!");
	std::cout << '\n';
	printCStringBackwards("Hello World!");
	std::cout << '\n';

	return 0;
}


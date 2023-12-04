// FindMinMaxFromVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

template<typename T>
void printArray(const std::vector<T>& arr)
{
	std::cout << "With array ( ";
	bool comma{false};
	for (const auto& i : arr)
	{
		if (comma)
			std::cout << ", ";
		std::cout << i;
		comma = true;
	}
	std::cout << "):\n";

}

template<typename T>
std::pair<std::size_t, std::size_t> findMinMaxIndices(const std::vector<T>& arr)
{
	std::size_t min{ 0 };
	std::size_t max{ 0 };
	for (std::size_t index{ 0 }; index < arr.size(); ++index)
	{
		if (arr[index] < arr[min])
			min = index;
		if (arr[index] > arr[max])
			max = index;
	}
	return{ min,max };
}
int main()
{
	std::vector v1{ 3, 8, 2, 5, 7, 8, 3 };
	printArray(v1);
	auto m1{ findMinMaxIndices(v1) };
	std::cout << "The min element has index " << m1.first << " and value " << v1[m1.first] << '\n';
	std::cout << "The max element has index " << m1.second << " and value " << v1[m1.second] << '\n';

	std::vector v2{ 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 };
	printArray(v2);
	auto m2{ findMinMaxIndices(v2) };
	std::cout << "The min element has index " << m2.first << " and value " << v2[m2.first] << '\n';
	std::cout << "The max element has index " << m2.second << " and value " << v2[m2.second] << '\n';

	std::vector<int> v3{};
	while (true)
	{
		std::cout << "Enter numbers to add(use - 1 to stop) :";
		int input{};
		std::cin >> input;

		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		if (input == -1)
			break;

		v3.emplace_back(input);
	}

	printArray(v3);
	auto m3{ findMinMaxIndices(v3) };
	std::cout << "The min element has index " << m3.first << " and value " << v3[m3.first] << '\n';
	std::cout << "The max element has index " << m3.second << " and value " << v3[m3.second] << '\n';

	return 0;

}


// PassingAndReturningStdVectorExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

// printElement function here
template <typename T>
void printElement(const std::vector<T>& arr, int index)
{
    int length{ static_cast<int>(arr.size())};
    if (index < 0 || index >= length)
        std::cout << "Invalid index\n";
    else
        std::cout << "The element has value " << arr[static_cast<std::size_t>(index)] << '\n';

}

int main()
{
    std::vector v1{ 0, 1, 2, 3, 4 };
    printElement(v1, 2);
    printElement(v1, 5);

    std::vector v2{ 1.1, 2.2, 3.3 };
    printElement(v2, 0);
    printElement(v2, -1);

    return 0;
}


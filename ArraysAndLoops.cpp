// ArraysAndLoops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

template<typename T>
void printArray(const std::vector<T>& arr)
{
    std::size_t length{ arr.size() };
    for (std::size_t index{ 0 }; index < length; ++index)
    {
        std::cout << arr[index] << ' ';
    }
    std::cout << '\n';
}

int getValidNumber()
{
    int input{};
    do
    {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> input;

        // if the user entered an invalid character
        if (!std::cin)
            std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any extra characters in the input buffer (regardless of whether we had an error or not)

    } while (input <= 0 || input > 9);

    return input;
}

template<typename T>
int findArrayIndex(const std::vector<T>& arr, int num)
{
    int length{ static_cast<int>(arr.size()) };
    for (std::size_t index{ 0 }; index < length; ++index)
    {
        if(arr[index] == num)
            return static_cast<int>(index);
    }
     
    return -1;
 
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    int num{ getValidNumber() };

    printArray(arr); // use function template to print array

    int index{ findArrayIndex(arr, num) };

    if (index != -1)
        std::cout << "The number " << num << " has index " << index << '\n';
    else
        std::cout << "The number " << num << " was not found\n";


    return 0;
}

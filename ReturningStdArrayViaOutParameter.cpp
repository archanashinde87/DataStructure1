// ReturningStdArrayViaOutParameter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

template<typename T, size_t N>
void inputArray(std::array<T, N>& arr) //pass by non-const reference 
{
    size_t index{ 0 };
    while (index < N)
    {
        std::cout << "Enter value #" << index << ": ";
        std::cin >> arr[index];

        if (!std::cin)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        ++index;
    }
}

int main()
{
    std::array<int, 6> arr{};
    inputArray(arr);

    std::cout << "The value of element 2 is " << arr[2] << '\n';

    return 0;
}

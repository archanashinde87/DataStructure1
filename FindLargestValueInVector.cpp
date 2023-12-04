// FindLargestValueInVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int findMax(const std::vector<int>& arr)
{
    int max{0};
    std::size_t length{ std::size(arr) };
    for (std::size_t index{ 0 }; index < length; ++index)
    {
        if (arr[index] > max)
            max = arr[index];
    }

    return max;
    
}
int main()
{
    std::vector testScore{ 84, 92, 76, 81, 56 };
    std::cout << "The max score is: " << findMax(testScore) << '\n'; // prints 92

    return 0;
}

// StaticAssertingOnArrayLength.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

template<typename T, size_t N>
void printElement3(const std::array<T, N>& arr)
{
    static_assert(N > 3);
    std::cout << arr[3] << '\n';
}

int main()
{
    std::array arr1{1,2,3,4,5,6};
    printElement3(arr1);

    std::array arr2{ 1.2,2.3,3.4,4.5,5.6 };
    printElement3(arr2);

    std::array arr3{ 9,7 };
    //printElement3(arr3); // It won't compile as static assert on length will assert at compile time

    return 0;
}

// ShrinkingStdVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void printCapLength(const std::vector<int>& v)
{
    std::cout << "Capacity: " << v.capacity() << " Length: " << v.size() << '\n';
}
int main()
{
    std::vector<int> v(1000); // allocate room for 1000 elements
    printCapLength(v);

    v.resize(0); // resize to 0 elements
    printCapLength(v);

    v.shrink_to_fit();
    printCapLength(v);

    return 0;
}


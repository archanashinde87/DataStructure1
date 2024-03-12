/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    for(int i=0; i<32; i++)
    {
        vec.push_back(i);
        std::cout << "size of vector: " << vec.size() << " capacity of vector: " << vec.capacity() <<'\n';
    }
    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <array>


int main()
{
    std::array<int, 5> myArray{1,2,3,4,5};
    std::cout << "Element at position 2 is : "<< myArray[2] << '\n'; // operator[] does not do bound checking
    std::cout << "Element at position 3 is : "<< myArray.at(3) << '\n'; // at() does bound checking
    std::cout << "Element at front/first position is : "<< myArray.front() <<'\n';
    std::cout << "Element at back/end/last position is : " << myArray.back() << '\n';
    int* ptr = myArray.data();
    for(int i=0; i<myArray.size();i++)
        {
            std::cout << ptr[i] << " ";
        }
    std::cout << '\n';
    return 0;
}

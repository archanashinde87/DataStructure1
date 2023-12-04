// ArrayIndexingAndLengthUsingEnumarators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cassert>
#include <iostream>
#include <vector>

namespace Animals
{
    enum Names
    {
        chicken, 
        dog,
        cat, 
        elephant, 
        duck, 
        snake,
        max_animals
    };
}
int main()
{
    std::vector animalsLegs{2,4,4,4,2,0};

    // Ensure the number of animals legs is the same as the number of animals
    assert(std::size(animalsLegs) == Animals::max_animals && "Number of animals and animalLegs array should be same.");
    std::cout << "Elephant has " << animalsLegs[Animals::elephant] << " number of legs.\n";
    std::cout << "Snake has " << animalsLegs[Animals::snake] << " number of legs.\n";
    std::cout << "Duck has " << animalsLegs[Animals::duck] << " number of legs.\n";

    return 0;
}


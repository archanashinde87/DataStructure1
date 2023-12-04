// StdArrayAndEnumerationsQuiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <string_view>

namespace Animal
{
    enum Type
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

struct Data
{
    std::string_view name{};
    int legs{};
    std::string_view sound{};     
};

int main()
{
    using namespace std::string_view_literals;
    std::array animalsData{ Data{"chicken"sv,2,"cluck"sv}, Data{"dog"sv,4,"woof"sv}
    ,Data{"cat"sv,4,"meow"sv}, Data{"elephant"sv,4,"pawoo"sv}
    ,Data{"duck"sv,2,"quack"sv}, Data{"snake"sv,0,"hisss"sv} };


    return 0;
}


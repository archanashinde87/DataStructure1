// StdArrayOfClassTypeQuiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include<string_view>

struct Item
{
    std::string_view name{};
    int gold;
};
int main()
{
    using namespace std::string_view_literals;
    std::array items{ Item{"sword"sv,5},Item{"dagger"sv,3}, Item{"club"sv,2}, Item{"spear"sv,7} }; // CTAD, single brace due to brace elision
    for (const auto& item : items)
    {
        std::cout << "A " << item.name << " costs " << item.gold << " gold.\n";
    }

    std::array<Item,4> items1{{
        {"sword"sv,5},
        {"dagger"sv,3},
        {"club"sv,2}, 
        {"spear"sv,7} 
        }}; // NO CTAD, must use double braces
    for (const auto& item : items1)
    {
        std::cout << "A " << item.name << " costs " << item.gold << " gold.\n";
    }


    return 0;
}


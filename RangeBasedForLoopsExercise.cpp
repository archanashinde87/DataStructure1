// RangeBasedForLoopsExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <string_view>
#include <vector>

template<typename T>
bool isValueInArray(const std::vector<T>& names, std::string_view value)
{
    for (std::string_view name : names)
    {
        if (name == value)
            return true;
    }
    return false;

}
int main()
{
    using namespace std::literals;
    std::vector names{ "Alex"s, "Betty"s, "Caroline"s, "Dave"s,
        "Emily"s, "Fred"s, "Greg"s, "Holly"s };

    std::cout << "Enter a name: ";
    std::string username{};
    std::cin >> username;

    bool found{ isValueInArray(names, username) };
    if (found)
        std::cout << username << " was found.\n";
    else
        std::cout << username << " was not found.\n";

     return 0;
}


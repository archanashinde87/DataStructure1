// StdArrayOfClassTypesAndBraceElision.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <string_view>

struct Student
{
    int id{};
    std::string_view name{};
};

// Our array of 3 students (single braced since we mention Student with each initializer)
constexpr std::array students{ Student{1,"Archana"},Student{2,"Shankar"}, Student{3,"Yugan"} };

const Student* findStudentById(int id)
{
    for (const auto& s : students)
    {
        if (id == s.id)
            return &s;
    }

    return nullptr;
}
int main()
{
    constexpr std::string_view nobody{ "nobody" };

    const Student* s1{ findStudentById(1) };
    std::cout << "You found: " << (s1 ? s1->name : nobody) << '\n';

    const Student* s2{ findStudentById(4) };
    std::cout << "You found: " << (s2 ? s2->name : nobody) << '\n';

    return 0;

}


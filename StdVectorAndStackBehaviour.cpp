// StdVectorAndStackBehaviour.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void printStack(const std::vector<int>& stack)
{
    if (stack.empty()) // if stack.size()=0
        std::cout << "Empty";
    for (auto element : stack)
        std::cout << element << ' ';

    std::cout << "\tCapacity: " << stack.capacity() << " Length: " << stack.size() << '\n';
}
int main()
{
    std::vector<int> stack{}; // empty stack

    printStack(stack);

    stack.push_back(1); // pushes one element on stack vector
    printStack(stack);

    stack.push_back(2); // pushes one more element on stack vector
    printStack(stack);

    stack.push_back(3); // pushes one more element on stack vector
    printStack(stack);

    std::cout << "Top: " << stack.back() << '\n'; // back() returns the last element

    stack.pop_back(); // pop_back() pops an element off the stack
    printStack(stack);

    stack.pop_back(); // pop_back() pops an element off the stack
    printStack(stack);

    stack.pop_back(); // pop_back() pops an element off the stack
    printStack(stack);

    return 0;
}


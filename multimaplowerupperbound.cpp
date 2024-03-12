/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <map>

int main()
{
    std::multimap<char, int> myMultimap;
    myMultimap.insert(std::pair<char, int>('a',2));
    myMultimap.insert(std::pair<char, int>('a',1));
    myMultimap.insert(std::pair<char, int>('a',3));
    myMultimap.insert(std::pair<char, int>('b',4));
    myMultimap.insert(std::pair<char, int>('c',5));
    
    for(auto& elm : myMultimap)
        std::cout << elm.first << " " << elm.second << '\n';
        
    auto it = myMultimap.upper_bound('a');
    std::cout << '\n' << (*it).first << " " << (*it).second << '\n';
    auto it1 = myMultimap.lower_bound('a');
    std::cout << '\n' << (*it1).first << " " << (*it1).second << '\n';
   
    return 0;
}

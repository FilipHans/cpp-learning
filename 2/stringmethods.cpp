#include <iostream>


int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.empty()) 
    {
        std::cout << "you didnt enter your name";
    } else {
        std::cout << "Hello " << name << '\n';
    }

    name.erase(1,3);
    std::cout << name.append(" Is a loser");
    std::cout << name.insert(1, "@");
}
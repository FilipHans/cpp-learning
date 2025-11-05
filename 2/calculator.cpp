#include <iostream>
#include <cmath>

int main() 
{
    char op;
    double num1;
    double num2;

    std::cout << "*************** CALCULATOR ***************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;
    std::cout << "Enter a number: ";
    std::cin >> num1;
    std::cout << "Enter a number: ";
    std::cin >> num2;

    switch(op)
    {
        case '+':
        std::cout << num1 + num2 << '\n';
        break;
        case '-':
        std::cout << num1 - num2 << '\n';
        break;
        case '*':
        std:: cout << num1 * num2 << '\n';
        break;
        case '/':
        std:: cout << num1/num2 << '\n';
        break;
        default:
        std::cout << "Non valid input";
    }

    std::cout << "*******************************************";



    return 0;
}
#include <iostream>
#include <cmath>


int main()
{
    double temp;
    double converted;
    char unit;
    


    std::cout << "***** Temperature conversion *****\n";
    std::cout << "F = Fahrenhet\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;
    std::cout << "Enter a temperature: ";
    std::cin >> temp;
    if (unit == 'F' || unit == 'f')
    {
        converted = (temp * 9/5) + 32;
        std::cout << temp << "C is " << converted << " Fahrenheit\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        converted = (temp - 32) * 5/9;
        std::cout << temp << "F is " << converted << " Celsius\n";
    }


    std::cout << "**********************************************";
    return 0;
}
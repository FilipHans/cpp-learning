#include <iostream>
#include <cmath>
#include <vector>
#include <string>

int main() {

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The hypotenus of a triangle with sides " << a << "cm and " << b << "cm " << "is " << c << "cm";    



    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(2, 4);
    // z = sqrt(9);
    // z = abs(3);
    // z = round(x);
    // c = ceil(x);


    // std::cout << z << '\n';
    // std::cout << c;
    return 0;
}
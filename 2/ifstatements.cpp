#include <iostream>


int main(){

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 28)
    {
    std::cout << "unc"  << '\n';
    } 
    else if (age == 27)
    {
        std::cout << "just like me frfr"  << '\n';
    } 
    else {
        std::cout << "dont talk to me kid" << '\n';
    }
    

    int month;

    std::cout << "Enter the month(1-12): ";
    std::cin >> month;


    switch(month)
    {
        case 1:
            std::cout << "It is january";
            break;
        case 2:
            std::cout << "It is February";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is Juli";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;
            default: 
            std::cout << "you didnt enter a number between 1-12 you donkey";
    }


    return 0;
}
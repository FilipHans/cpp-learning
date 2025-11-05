#include <iostream>

using number_t = int;
using double_t = double;
int main() {
    using std::cout;

    number_t students = 20;
    
    // students +=1;

    number_t remainder = students % 3;
    double_t gradepoints = 5;
    gradepoints = gradepoints / 2;

    double y = 5;
    double a = 4;
    double v = 3;
    double n = 2;

    double x = 6 - (y + a) * v / n;

    cout << x << '\n';
    cout << students << '\n';
    cout << gradepoints << '\n';
    cout << remainder << '\n';
    return 0;
}
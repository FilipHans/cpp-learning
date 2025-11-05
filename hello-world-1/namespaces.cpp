#include <iostream>

namespace first {

    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    using namespace second;
    using std::cout;
    using std::string;

    string name = "Filip";

    cout << name << '\n';


    cout << x << '\n';
    // std::cout << first::x;
    return 0;
}
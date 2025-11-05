#include <iostream>
#include <vector>


typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string text_t;
// typedef int number_t;
/*
    Using more common instead of typedef
    because its more sutable for templates(?)
*/
using text_t = std::string;
using number_t = int;
int main() {

    using std::cout;

    pairlist_t pairlist;

    text_t name = "Filip";

    number_t age = 27;

    cout << name;
    cout << age;

    return 0;
}
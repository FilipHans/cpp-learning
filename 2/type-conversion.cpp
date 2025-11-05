#include <iostream>

using string_t = std::string ;
int main() {


    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    // std::cout << (char) 100;
    return 0;
}
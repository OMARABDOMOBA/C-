#include <iostream>

// increment and compund
// postfix , prefix


int main()
{
    int number = 0; // define an integer var

    // number++; // postfix
    // ++number; // prefix

    int y = ++number;

    std::cout << number++ << std::endl;
    std::cout << ++number << std::endl;
    std::cout << y << std::endl;
    return 0;
}
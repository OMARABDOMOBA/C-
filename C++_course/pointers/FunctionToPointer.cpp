#include <iostream>

void display()
{
    std::cout << "Hello, World" << std::endl;
}

int main()
{
    void (*functionPtr)();

    functionPtr = &display;

    std::cout << &display << std::endl;
    std::cout << functionPtr << std::endl;

    (*functionPtr)();
    display();

    return 0;
}
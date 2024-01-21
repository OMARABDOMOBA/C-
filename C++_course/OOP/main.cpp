#include <iostream>
#include "car.h"

// Constructor and Destructor

int main()
{
    Car C1;

    C1.set_maker("BMW");
    C1.set_color("Black");
    C1.set_model(2019);
    C1.set_max(220);

    std::cout << "Maker is : " << C1.get_maker() << std::endl;
    std::cout << "Color is : " << C1.get_color() << std::endl;
    std::cout << "Model is : " << C1.get_model() << std::endl;
    std::cout << "Max Speed is : " << C1.get_max() << std::endl;

    return 0;
}
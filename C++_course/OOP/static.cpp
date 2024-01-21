#include <iostream>

class Car
{
    private:
        std::string factory;
        std::string color;
        int model;
        static int counter;
    public:
        Car() : factory("Mini"), color("Red"), model(2019)
        {
            counter++;
        }
        Car(std::string fac, std::string col, int m) : factory(fac), color(col), model(m)
        {
            counter++;
        }
        int get_count()
        {
            return counter;
        }
};

int Car::counter = 0;

int main()
{   
    Car C1;
    Car C2;
    Car C3;

    std::cout << C2.get_count() << std::endl;
    std::cout << C3.get_count() << std::endl;

    return 0;
}
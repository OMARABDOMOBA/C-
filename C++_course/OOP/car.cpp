#include "car.h"

void Car::set_maker(std::string m)
{
    maker = m;
}

std::string Car::get_maker()
{
    return maker;
}

void Car::set_color(std::string c)
{
    color = c;
}

std::string Car::get_color()
{
    return color;
}

void Car::set_model(int m)
{
    model = m;
}
int Car::get_model()
{
    return model;
}

void Car::set_max(int max)
{
    maxSpeed = max;
}
int Car::get_max()
{
    return maxSpeed;
}

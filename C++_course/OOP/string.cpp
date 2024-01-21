#include <iostream>

struct Car
{
    std::string Name;
    std::string color;
    int model;
    int maxSpeed;
};

int main()
{
    Car C;
    C.Name = "BMW";
    C.color = "Black";
    C.model = 2022;
    C.maxSpeed = 300;

    std::cout << C.Name << std::endl;
    std::cout << C.color << std::endl;
    std::cout << C.model << std::endl;
    std::cout << C.maxSpeed << std::endl;

    std::string x = "omar abdo";
    std::string y = "abdo";
    std::string v = "2014";


    std::cout << x.find("a") << std::endl;
    std::cout << x.length() << std::endl;
    std::cout << x.size() << std::endl;
    std::cout << x.at(1) << std::endl;
    std::cout << x.erase(0,3) << std::endl;
    std::cout << x << std::endl;

    x.swap(y);

    std::cout << y << std::endl;
    std::cout << x << std::endl;

    // nullptr not null character \0
    //for each
    for(auto v : y)
    {
        std::cout << v << std::endl;
    }

    return 0;
}
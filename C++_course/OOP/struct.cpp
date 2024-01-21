#include <iostream>

struct Car
{
    std::string name;
    std::string color;
    int maxSpeed;
    int model;

    void fun()
    {
        std::cout << name << std::endl;
    }
};

struct Name
{
    std::string f_name;
    std::string s_name;
    std::string l_name;
};

struct Student
{
    Name stdName;
    int id;
    int age;
};


Car fun(Car &C)
{
    std::cin >> C.name;
    std::cin >> C.color;
    std::cin >> C.maxSpeed;
    std::cin >> C.model;
    
    return C;
}

void printCar(Car C)
{
    std::cout << C.name << std::endl;
    std::cout << C.color << std::endl;
    std::cout << C.maxSpeed << std::endl;
    std::cout << C.model << std::endl;
}

Car userInput(Car &S)
{
    std::cin >> S.name >> S.color >> S.maxSpeed >> S.model;

    return S;
}

int main()
{   
    Car x;

    userInput(x);

    printCar(x);

    x.fun();


    Car y;
    y = x;

    Car *h;
    h = &x;

    std::cout << h->name << std::endl;    

    // std::cout << h->name << std::endl;

    // Car C;
    // fun(C);
    // std::cout << C.name << std::endl;
    // std::cout << C.color << std::endl;
    // std::cout << C.maxSpeed << std::endl;
    // std::cout << C.model << std::endl;

    Car V;
    V.name = "ckaldm";
    V.fun();

    Student ahmed;
    ahmed.stdName.f_name = "ahmed";
    ahmed.stdName.l_name = "mohammed";
    ahmed.age = 23;
    std::cout << ahmed.stdName.f_name << " " << ahmed.stdName.l_name << std::endl;
    std::cout << ahmed.age << std::endl;


    return 0;
}
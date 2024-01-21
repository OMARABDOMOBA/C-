#include <iostream>


struct Car
{
    std::string name;
    std::string color;
    int model;
    int maxSpeed;

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
    Name name;
    int age;
    int id;
};

Car input(Car &C)
{
    std::cin >> C.name >> C.color >> C.model >> C.maxSpeed;

    return C;
}

void display(Car x)
{
    std::cout << "Car Type is : " << x.name << std::endl;
    std::cout << "Car Color is : " << x.color << std::endl;
    std::cout << "Car Model is : " << x.model << std::endl;
    std::cout << "Car Max Speed is : " << x.maxSpeed << std::endl;
}

int main()
{
    // Car x;
    // input(x);
    // display(x);

    // x.fun();

    // Car y;
    // input(y);
    // display(y);

    Student s;
    s.name.f_name = "Mohammed";
    s.name.l_name = "Abdo";
    s.age = 22;
    s.id = 2342;

    std::cout << s.name.f_name << " " << s.name.l_name << " " << s.age << " " << s.id << std::endl;

    return 0;
}
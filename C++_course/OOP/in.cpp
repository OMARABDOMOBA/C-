#include <iostream>

class Employee
{
    protected:
        int num;
        std::string name;
        int id;
        int slalry;

    public:
        setName();
        getName();

        setNum();
        getNum();

};

class Manager : public Employee
{
    private:

    public:
};

class Developer : public Employee
{

};

class D : public Manager
{
    
};

int main()
{
    

    return 0;
}
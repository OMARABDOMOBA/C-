#include <iostream>
//default agruments
int sum(int num1, int num2 = 15, int num3 = 12)
{
    return num1 + num2 + num3;
}

//inline function
inline void print()
{
    std::cout << "Hello" << std::endl;
}

//Static keyword
void fun()
{
    static int x = 0;
    x++;
    std::cout << x << std::endl;
}

int main()
{
    std::cout << sum(10) << std::endl;

    print();

    fun();
    fun();
    fun();
    return 0;
}
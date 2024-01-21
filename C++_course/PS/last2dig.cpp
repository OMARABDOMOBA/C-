#include <iostream>

int main()
{
    int num1, num2, num3, num4;

    std::cin >>num1 >> num2 >> num3 >> num4;

    int newNum1 = num1 % 100;
    int newNum2 = num2 % 100;
    int newNum3 = num3 % 100;
    int newNum4 = num4 % 100;
    
    int result = newNum1 * newNum2 * newNum3 * newNum4;
    int rem = result % 100;

    if(rem <= 9)
    {
        std::cout << "0" << rem << std::endl;
    }
    else
    {
        std::cout << rem << std::endl;
    }

    return 0;
}
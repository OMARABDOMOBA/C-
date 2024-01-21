#include <iostream>
#include <math.h>

int main()
{
    long long num1, num2, num3, num4;

    std::cin >> num1 >> num2 >> num3 >> num4;

    if((pow(num1, num2)) > (pow(num3,num4)))
        std::cout << "YES" << std::endl;
    else if((num1^num2) < (num3^num4))
        std::cout << "NO" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}
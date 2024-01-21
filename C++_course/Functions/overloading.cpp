#include <iostream>

int sum(int x, int y)
{
    return x + y;
}

float sum(float x, float y)
{
    return x + y;
}

std::string sum(std::string first, std::string second)
{
    return first + second;
}

int main()
{
    int num1, num2;
    float x, y;
    std::string f_name, s_name;

    std::cin >> f_name >> s_name >> num1 >> num2 >> x >> y;

    std::cout << sum(num1, num2) << std::endl;
    std::cout << sum(x, y) << std::endl;
    std::cout << sum(f_name, s_name) << std::endl;
    std::cout << std::endl;

    return 0;
}
#include <iostream>

int main()
{
    int num1, num2, num3, num4;
    
    std::cin >> num1 >> num2 >> num3 >> num4;

    int start, end;

    // when there is no intesection
    if(num3 < num1 && num4 < num1 || num3 > num2 && num4 > num2)
    {
        std::cout << -1 << std::endl;
    }
    else
    {
        if(num1 > num3)
        {
            start = num1;
        }
        else
        {
            start = num3;
        }
        if(num2 < num4)
        {
            end = num2;
        }
        else
        {
            end = num4;
        }

        std::cout << start << " " << end << std::endl;
    }

    return 0;
}
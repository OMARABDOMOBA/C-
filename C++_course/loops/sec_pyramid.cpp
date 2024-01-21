#include <iostream>


int main()
{
    int rows, i, j;

    std::cin >> rows;
    
    for(i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows; j++)
        {
            if(j <= i)
            {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }

    return 0;
}
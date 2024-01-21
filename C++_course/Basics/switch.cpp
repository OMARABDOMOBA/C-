#include <iostream>

/*
    syntax :
        switch(operator)
        {
            case codition1:
                statement;
                break;
            case codition1:
                statement;
                break;

            --
            --
            --
            default:
                statement;
                break;
        }
*/

int main()
{
    int x,y;
    char op; // + - * /

    std::cin >> x >> op >> y;

    switch (op)
    {
    case '+':
        std::cout << x + y << std::endl;
        break;
    
    
    default:
        std::cout << "Not Aval" << std::endl;
        break;
    }

    return 0;
}
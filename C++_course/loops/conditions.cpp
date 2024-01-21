//control flow
#include <iostream>

/*
if:
    syntax : 
        if(condition)
        {
            code
        }
        else
        {
            code
        }

        --------------------------------

        if(codition)
        {
            //nested if
            if(codition)
            {

            }
            else if(---)
            {

            }
            else
            {

            }
        }
        else if(codition)
        {

        }
        else
        {

        }

*/

int main()
{
    int num1, num2;
    char op;

    std::cout << "Enter operation : ";
    std::cin >> num1 >> op >> num2;

    switch(op)
    {
        case '+':
            std::cout << num1 + num2 << std::endl;
            break;
        default:
            std::cout << "Wrong Ex" << std::endl;
            break;

    }


    return 0;
}
//Loops in C++
#include <iostream>

/*
1- for loop
    - for(init; condition;iteration)
        {
            code
        }
2- While loop
    - while(condition)
    {
        code
    }
3- do while loop
    - do{
        code
    }while(condition);

*/

/*
Global variable 
Local Variable
*/

int main()
{
    //for loop
    for(int i = 0; i <= 20; ++i)
    {
        std::cout << "number is : " << i << "\n";
    }

    std::cout << "\n";

    // While loop
    int i = 1;
    while(i <= 10)
    {
        std::cout << "number is : " << i << std::endl;
        i++;
    }
    std::cout << i << "\n";

    do{
        std::cout << "number is : " << i << std::endl;
        i++;
    }while(i <= 10);
    std::cout << i << "\n";

    return 0;
}
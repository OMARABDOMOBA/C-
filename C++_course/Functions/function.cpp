#include <iostream>

/*
Function : 
    syntax : 
        return_type name_of_function(parameter_type parameter){

        }

    Example :
        1- void func(){

        }
        2- void func(int y){

        }
        3- int func(){

        }
        4- int func(int x, int y){
            
        }
*/


//function prototype
int sum(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}

void empty()
{
    std::cout << "Hello, Mohammed";
}

int main()
{   
    int num1;
    int num2;

    std::cin >> num1 >> num2;
    //function calling
    int num3 = sum(num1, num2);
    std::cout << num3 << std::endl;
    std::cout << sub(num1, num2) << std::endl;

    empty();

    return 0;
}
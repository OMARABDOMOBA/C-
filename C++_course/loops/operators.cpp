//   Operators in C++

/*
Arathmatic operators : + - * / %

relation operators :
== != >= <= > <

logical operators : 
&& || !

assignment operators:
= += *= ...

++ , -- prefix --> ++a
++ , -- postfix --> a++

& | ^ ~ << >>                                 1 | 1 0 1 1 1 0 0 0

*/


#include <iostream>



int main()
{
    int a = 5; // 0 0 0 0 0 1 0 1
    int b = 7; // 0 0 0 0 0 1 1 1

    int number = 12345;
    int rem = number % 10;
    number /= 10;


    int c =  a | b; // a = a * 3
    std::cout << c << std::endl; // 0 0 0 0 0 1 0 1 = 5

    std::cout << number << std::endl;
    std::cout << rem << std::endl; 

    return 0;
}
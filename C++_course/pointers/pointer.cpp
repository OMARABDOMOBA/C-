#include <iostream>


int main()
{
    //Pointers
    /*
    Syntax :   
        dataType *pointerName;

    * operator 
    first with initialization : int * ptr;
    second is dereference : *ptr = value inside the variable
    */

    int var = 10;
    int * ptr;
    ptr = &var;

    std::cout << var << std::endl;
    std::cout << &var << std::endl;
    std::cout << ptr << std::endl;

    char str[] = "Abdo";

    str[0] = 'B';

    std::cout << str << std::endl;


    int arr[] = {9, 4, 2, 3, 4, 5};

    arr[0] = 5;

    std::cout << arr << " " << &arr[0] << std::endl;

    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    int *ptr2 = arr;

    std::cout << &arr[0] << std::endl;
    std::cout << ptr2 << std::endl;

    ptr2++;

    /*
        prt++ = 1000 + 1 * 4 = 1004
    
    */

    std::cout << ptr2 << std::endl;
    std::cout << *ptr2 << std::endl;

    //Dynamic memory allocation
    int * dynaicPointer = new int;
    *dynaicPointer = 10;
    

    std::cout << *dynaicPointer << std::endl;

    delete dynaicPointer;
    
    return 0;
}
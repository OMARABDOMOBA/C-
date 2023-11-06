/*
- I/O functions library
- First project
- Escape Sequence
    - \n --> new line
    - \t --> tap
    - \b
    - \
- Variables and Naming Conventions
- Data Types
    - int --> 1, 2, 3, 4 byts (32 bits)
    - float --> 1.5 , 1.6 etc.. , 0.22333, 7  numbers after . operator only, 4 byts (32 bits)
    - double --> 1.5 , 1.6 etc.. , 0.22333, 15  numbers after . operator only, 8 bytes (64 bits)
    - char --> 'a', 'B' etc.., 1 byte = 8 bits
        - Every char has its own ASCII code
    - string --> array (list) of characters

*/
#include <iostream>
#include "hello.h"

#define firstName "omar" // macro
int main()
{
    std::cout << "Hello, " << firstName << std::endl;
    function("Mohammed");
    return 0;
}
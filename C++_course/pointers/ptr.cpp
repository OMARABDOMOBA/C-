#include <iostream> 

void fun(int *x, int *y)
{
    x = y;
    *x = 2;
}

int i = 0, j = 1;

int main()
{
    int *ptr = &i;
    *ptr = 5;

    fun(&i, &j);
    
    std::cout << i << " " << j << std::endl;

    return 0;
}

/*
a - 2 2
b - 2 1
c - 0 1
d - 0 2
*/
#include <stdio.h>
#include "test.h"
#include "led.h"

int main()
{
    Display();
    ledon();
    printf("Hello Brother\n");

    return 0;
}
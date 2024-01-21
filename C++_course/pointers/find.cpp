#include <iostream>

int *findMid(int arr[], int size)
{
    return &arr[size/2];
}

int *func()
{
    int x = 5;
    return &x;//Not allowed
}

int main()
{
    int arr[] = {1,2,3,4,5};

    int *ptr = func();

    std::cout << *ptr << std::endl; // undefine Behavior

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int *mid = findMid(arr, arrSize);

    std::cout << *mid << std::endl;


    return 0;
}
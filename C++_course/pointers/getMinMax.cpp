#include <iostream>

int getMin(int arr[], int size)
{
    int Min = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    return Min;
}

int getMax(int arr[], int size)
{
    int Max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}

int main()
{
    int arr[] = {1,5,7,8,4,-1,-6,20};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Minimum number is : " << getMin(arr, arrSize) << std::endl;
    std::cout << "Maximum number is : " << getMax(arr, arrSize) << std::endl;

    return 0;
}
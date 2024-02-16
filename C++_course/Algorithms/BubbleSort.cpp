#include <iostream>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            //Compare between elements inside the array
            if(arr[j] < arr[j + 1])
            {
                // swapping the elements if it's not the correct position
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr[] = {1,5,7,8,4,9,25,34,21};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before Sorting : ";
    printArray(arr, arrSize);

    bubbleSort(arr, arrSize);

    std::cout << "After Sorting : ";
    printArray(arr, arrSize);

    return 0;
}
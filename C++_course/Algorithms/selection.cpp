#include <iostream>

void selcetionSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++) // n + 1
    {
        int minIndex = i; // n * 1
        for(int j = i + 1; j < n; j++) // n * n +1
        {
            if(arr[j] < arr[minIndex]) // n * n
            {
                minIndex = j; // n * n
            }
        }
        std::swap(arr[i], arr[minIndex]); // n
    }
}

// Complexity is O(n^2)

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
    int arr[] = {1, 2, 8, 13, 5, 6, 19, 10, 9};

    int arraySize = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before Sotring : ";
    printArray(arr, arraySize);

    selcetionSort(arr,arraySize);

    std::cout << "After Sotring : ";
    printArray(arr, arraySize);

    return 0;
}
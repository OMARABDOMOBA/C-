#include <iostream>



int main()
{
    int arraySize = 6;
    // syntax : 
    //  dataType arrayName[arraySize];
    //  dataType arrayName[arraySize] = {value1, value2, .....};
    //  dataType arrayName[] = {value1, value2, .....};

    //array declaration and Initialization
    int numbers[arraySize] = {1, 2, 3, 4, 5, 6};

    
    //Array Accessing
    std::cout << "First Element : " << numbers[0] << std::endl;
    std::cout << "sec Element : " << numbers[1] << std::endl;
    std::cout << "thired Element : " << numbers[4] << std::endl;
    
    //modifying the Array
    numbers[1] = 10;

    std::cout << "sec Element : " << numbers[1] << std::endl;


    int num[] = {2,5,6,7,3,7,9,6,8,9,5};
    int arrSize = sizeof(num) / sizeof(num[0]);
    std::cout << "size = " << arrSize << std::endl;
    //loop for array
    for(int i = 0; i < arrSize; i++)
    {
        std::cout << num[i] << " ";
    }
    std::cout << "\n";

    int matrixDim = 3;
    
    int matrix[matrixDim][matrixDim] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };

    // int size2 = sizeof(matrix) / sizeof(matrix[0]);    
    for(int i = 0; i < matrixDim; ++i) // n + 1
    {
        for(int j = 0; j < matrixDim; ++j) // n * n + 1
        {
            std::cout << matrix[i][j] << " "; // n * n
        }
        std::cout << "\n";
    }
    std::cout << "\n";


    return 0;
}
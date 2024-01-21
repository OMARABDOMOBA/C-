#include <iostream>
#include <vector>
// int binarySearch(int arr[], int left, int right, int key)
// {
//     int middel = (left + right) / 2;
//     while(left <= right)
//     {
//         if(arr[middel] == key)
//         {
//             return middel;
//         }

//         if(key <= arr[middel])
//         {
//             right = middel - 1;
//             middel = (left + right) / 2;
//         }
//         else
//         {
//             left = middel + 1;
//             middel = (left + right) / 2;
//         }
//     }
//     return -1;
// }

int binarySearchRecursive(std::vector<int> arr, int target, int low, int high) {
    if (low <= high) {
        int mid = (low + high) / 2;

        // Check if the middle element is the target
        if (arr[mid] == target) {
            return mid;
        }
        // If the target is smaller, search in the left half
        else if (arr[mid] > target) {
            return binarySearchRecursive(arr, target, low, mid - 1);
        }
        // If the target is larger, search in the right half
        else {
            return binarySearchRecursive(arr, target, mid + 1, high);
        }
    } else {
        // Target is not in the array
        return -1;
    }
}


int main()
{
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    std::cout << "Enter key number : ";
    std::cin >> key;

    int left = 0;
    int right = size - 1;

    int result = binarySearchRecursive(arr, key,left, right);

    if(result == -1)
    {
        std::cout << "key not founde" << std::endl;
    }
    else
    {
        std::cout << "Key " << arr[result] << " founed at " << result << " index" << std::endl;
    }

    return 0;
}
#include <iostream>
#include <array>

void linear(std::array<int, 6> arr, int key)
{
    int i = 0;
    for(i = 0; i < arr.size(); i++) // --> n + 1
    {
        if(key == arr[i])
        {
            std::cout << "The key value : " << arr[i] << " founded at " << i << " index " << std::endl;
            break;
        }
    }
    
    
}
int main()
{
    std::array<int, 6> list = {3, 5, 8, 9, 1, 6};
    int key = 0;
    std::cout << "Enter the element : ";
    std::cin >> key;

    linear(list, key);

    return 0;
}
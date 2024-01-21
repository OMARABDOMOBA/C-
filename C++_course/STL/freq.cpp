#include <iostream>
#include <unordered_map>
#include <vector>
#include <map>

int main() {
    // int arr[] = {1, 2, 3, 4, 5, 5, 5, 1, 2, 1, 3, 4, 2, 6};
    // int sizeArr = sizeof(arr) / sizeof(arr[0]);
    // int y[sizeArr] = {0};
    // for(int i = 0; i < sizeArr; i++)
    // {
    //     y[arr[i]]++;
    // }

    // for(int i = 1; i < sizeArr; i++)
    // {
    //     std::cout << i << " : " << y[i] << std::endl;
    // }

    // Example array
    std::vector<int> array = {1, 2, 3, 4, 1, 2, 1, 3, 4, 5};

    // Use an map to store the frequency of each element
    std::unordered_map<int, int> frequency;

    // Count the frequency of each element in the array
    for (int element : array) {
        // If the element is not present in the map, initialize its frequency to 1
        // Otherwise, increment its frequency
        frequency[element]++;
    }

    // Print the frequencies
    std::cout << "Element frequencies:\n";
    for (const auto& pair : frequency) {
        std::cout << "Element " << pair.first << ": " << pair.second << " times\n";
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Creating a vector of integers
    std::vector<int> myVector = {1, 4, 2, 6, 35, 23, 7};
    std::vector<int> vec(6);

    myVector.push_back(6);
    myVector.push_back(8);


    // Accessing elements using range-based for loop
    std::cout << "Vector Elements: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }

    std::cout << std::endl;

    std::cout << myVector.at(1) << std::endl;

    auto it = std::find(myVector.begin(), myVector.end(), 6);
    std::cout << *it << std::endl;

    std::sort(myVector.begin(), myVector.end());

    std::cout << "Vector Elements: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }

    return 0;
}

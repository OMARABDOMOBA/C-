#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> myVector;

    myVector = {10, 5, 7, 15, 20, 8};

    std::sort(myVector.begin(), myVector.end());

    std::cout << "Sorted Vector: ";
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    auto searchResult = std::find(myVector.begin(), myVector.end(), 15);
    if (searchResult != myVector.end()) {
        std::cout << "Value 15 found in the vector." << std::endl;
    } else {
        std::cout << "Value 15 not found in the vector." << std::endl;
    }   

    std::transform(myVector.begin(), myVector.end(), myVector.begin(), [](int x) { return x * x; });

    std::cout << "Transformed Vector: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    int sum = std::accumulate(myVector.begin(), myVector.end(), 0);
    std::cout << "Sum of Transformed Vector Elements: " << sum << std::endl;

    return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // Using std::transform to double each element
    std::transform(myVector.begin(), myVector.end(), myVector.begin(), [](int x) { return x * 2; });

    // Display the transformed vector
    std::cout << "Transformed Vector: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}

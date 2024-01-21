#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<std::string> myVector(5); // Vector of size 5

    // Using std::fill to set all elements to 42
    std::fill(myVector.begin(), myVector.end(), "abdo");

    // Display the vector after filling
    std::cout << "Filled Vector: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}

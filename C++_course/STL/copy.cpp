#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination(5); // Vector of the same size

    // Using std::copy to copy elements from source to destination
    std::copy(source.begin(), source.end(), destination.begin());

    // Display the destination vector after copying
    std::cout << "Copied Vector: ";
    for (auto element : destination) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}

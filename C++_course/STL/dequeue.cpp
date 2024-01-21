#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    // Creating a deque of integers
    std::deque<int> myDeque = {1, 2, 3, 4, 5};

    // Adding an element to the front and back of the deque
    myDeque.push_front(0);
    myDeque.push_back(6);

    // Iterating through the deque using a range-based for loop
    std::cout << "Deque Elements: ";
    for (const auto& element : myDeque) {
        std::cout << element << " ";
    }

    std::cout << std::endl;

    return 0;
}

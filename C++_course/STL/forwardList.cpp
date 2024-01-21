#include <iostream>
#include <forward_list>


int main() {
    // Creating a forward list of integers
    std::forward_list<int> myForwardList = {1, 2, 3, 4, 5};

    // Adding an element to the front of the forward list
    myForwardList.push_front(0);

    // Iterating through the forward list using a range-based for loop
    std::cout << "Forward List Elements: ";
    for (const auto& element : myForwardList) {
        std::cout << element << " ";
    }

    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    // Creating a list of integers
    std::list<int> myList = {2, 4, 1, 7, 5};

    myList.push_back(6);
    myList.push_front(0);

    std::list<int> list = std::move(myList);

    // Accessing elements using range-based for loop
    std::cout << "List Elements: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }

    std::cout << std::endl;

    myList.sort();

    std::cout << "List Elements: ";
    for (const auto& element : myList) {
        std::cout << element << " ";
    }

    return 0;
}

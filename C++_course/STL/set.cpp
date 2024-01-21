#include <iostream>
#include <set>

int main() {
    //Complexity of logn 
    // Creating a set of integers
    std::set<int> mySet = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    std::multiset<int> s = {3, 1, 4, 1, 5, 9, 2, 6, 5};


    // Inserting elements
    mySet.insert(8);
    mySet.insert(7);

    // Iterating over elements
    for (int element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    s.insert(8);
    s.insert(7);

    // Iterating over elements
    for (int element : s) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}

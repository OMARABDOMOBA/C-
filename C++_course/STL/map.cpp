#include <iostream>
#include <map>
#include <unordered_map>

int main() {
    // Creating a map of strings to integers
    std::map<std::string, int> myMap;

    // Inserting key-value pairs
    myMap["one"] = 1;
    myMap["two"] = 2;
    myMap["three"] = 3;
    myMap["four"] = 4;
    myMap["one"] = 1;

    // Accessing elements using range-based for loop
    std::cout << "Map Elements: ";
    for (const auto& pair : myMap) {
        std::cout << pair.first << " : " << pair.second << " " << std::endl;
    }

    std::cout << std::endl;

    return 0;
}

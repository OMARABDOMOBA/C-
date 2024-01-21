#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Creating an unordered_map with int keys and string values
    std::unordered_map<int, std::string> myMap;

    // Inserting key-value pairs
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";
    myMap[4] = "Four";

    // Accessing elements
    std::cout << "Value for key 2: " << myMap[2] << std::endl;

    // Iterating over the elements
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}

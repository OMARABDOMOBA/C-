#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    // Creating an unordered_set of strings
    std::unordered_set<std::string> mySet;
    std::unordered_set<int> set = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    std::unordered_multiset<int>set2 = {3, 1, 4, 1, 5, 9, 2, 6, 5};

    // Inserting elements
    mySet.insert("Apple");
    mySet.insert("Banana");
    mySet.insert("Orange");

    
    std::string target = "Apple";
    if (mySet.find(target) != mySet.end()) {
        std::cout << target << " exists in the set." << std::endl;
    } else {
        std::cout << target << " does not exist in the set." << std::endl;
    }

    
    for (const auto& element : mySet) {
        std::cout << element << std::endl;
    }

    std::unordered_set<std::string> mSet= {"Sun", "Mon", "Tue", "Wen", "Thu", "Fri", "Sat", "Sun"};
    for(const auto & s : mSet)
    {
        std::cout << s << std::endl;
        std::cout << s << " is in the Bucket : #" << mSet.bucket(s) <<  std::endl;
    }

    std::cout << mSet.bucket_count()<< std::endl;

    return 0;
}

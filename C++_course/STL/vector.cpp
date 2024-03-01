#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Creating a vector of integers
    std::vector<int> myVector = {1 , 4, 2, 7, 35, 23};
    std::vector<int> vec(6);

    myVector.push_back(6);
    myVector.push_back(8);

    // auto it = std::find(myVector.begin(), myVector.end(), 45);
    // std::cout << *it << std::endl;

    auto rv = [](int i){return i > 7;};

    auto it = std::find_if(myVector.begin(), myVector.end(), rv);

    std::cout << *it << std::endl;

    for(; it != myVector.end(); it++)
    {
        std::cout << *it << std::endl;
    }

    std::sort(myVector.begin(), myVector.end());

    std::vector<int> v(100);
    v.push_back(10);

    // std::cout << "Vector Elements: ";
    // for (const auto& element : myVector) {
    //     std::cout << element << " ";
    // }

    /*
    add_back = O(1)
    delete_back = O(1)
    add anywhere O(n)
    delete O(n)
    access --> [], at() --> O(1)
    search --> find()--> (logn);
    */

    return 0;
}

#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> d;

    for(int i = 1; i <= 10; i++)
    {
        d.push_back(i);
    }

    std::cout << "Size : " << d.size() << ", Capacity : " << d.capacity() << std::endl;

    d.erase(d.begin() + 5, d.end());

    auto i = d.cbegin();

    for(auto & it: d)
    {
        std::cout << it << std::endl;
    }

    std::cout << "Size : " << d.size() << ", Capacity : " << d.capacity() << std::endl;

    d.shrink_to_fit();

    std::cout << "Size : " << d.size() << ", Capacity : " << d.capacity() << std::endl;
    
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <forward_list>

int main() {
    // Creating a forward list of integers
    std::forward_list<int> myForwardList(10), sencndList;

    myForwardList.assign({1,2,3,4,5,6,7,8,9,10});

    // sencndList.assign(11, 20);

    auto i = myForwardList.begin();
    ++++++i;

    sencndList.assign(i, myForwardList.end());

    for(auto & it : sencndList)
    {
        std::cout << it << std::endl;
    }
    

    return 0;
}

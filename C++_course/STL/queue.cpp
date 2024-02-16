#include <iostream>
#include <queue>

// add and delete : O(1)

int main()
{
    std::queue<int> q;

    q.push(1);
    q.push(3);
    q.emplace(7);
    q.emplace(4);
    q.emplace(52);

    std::cout << q.front() << " " << q.back() << std::endl;

    while(!q.empty())
    {
        std::cout << q.front() << std::endl;
        q.pop();
    }


    return 0;
}
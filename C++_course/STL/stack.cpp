#include <iostream>
#include <stack>

// push, pop, size O(1)
int main()
{
    std::stack<int> s;

    std::stack<int> s1;

    s.push(1);
    s.push(2);
    s.emplace(3);
    s.emplace(4);

    s.swap(s1);

    for(int i = 0; !s1.empty(); i++)
    {
        std::cout << s1.top() << std::endl;
        s1.pop();
    }

    return 0;
}
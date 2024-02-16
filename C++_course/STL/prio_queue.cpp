#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Compare
{
    bool operator()(int l, int r)
    {
        return l > r;
    }
};

int main()
{
    std::priority_queue<int, std::vector<int>, Compare> pq;

    for( int n : {10, 20, 30, 40, 50, 80, 90, 70})
    {
        pq.push(n);
    }

    while(!pq.empty())
    {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << "\n";

    return 0;
}
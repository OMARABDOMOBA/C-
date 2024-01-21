#include <iostream>

int facorial(int num);

int main()
{
    int num;

    std::cin >> num;

    int result = facorial(num);
    
    std::cout << result << "\n";

    return 0;
}

//recursion
int facorial(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    return n * facorial(n - 1);
}
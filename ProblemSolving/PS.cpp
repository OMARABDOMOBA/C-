#include <iostream>


int main()
{
    int A, B, C, D;
    char S, Q;
    
    std::cin >> A >> S >> B >> Q >> C;

    if(S == '+')
        D = A + B;
    else if (S == '-')
        D = A - B;
    else if (S == '*')
        D = A * B;

    if (C == D)
        std::cout << "Yes";
    else
        std::cout << D;

    return 0;
}
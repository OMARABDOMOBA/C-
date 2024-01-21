#include <iostream>

void swap(int &a, int &b);

int main()
{
    int num1 = 5;
    int num2 = 10;

    swap(num1, num2);
    std::cout << num1 << " " << num2 << std::endl;

    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}



/*

Characteristics of algorithms

1 - input : 0, or more
2 - output : at least one output
3 - definitieness : should be known and meaningfull
4 - finiteness : must stop at some point
5 - Effectiveness : should not have unnessecery statements


begin
    temp. = a --> 1 unit of time
    a = b     --> 1 unit of time
    b = temp. --> 1 unit of time
end

f(n) = 3 units of time

O(n) = 1 ---> O(1) constant

==========================

arr [1, 2, 3, 4, 5, 6]

algorithm of finding sum of all elements in an array

algorithm sum(A, n)
{
    s = 0; --> 1
    for(i = 0; i < n; i++) --> n + 1
    {
        s = s + A[i]; --> n
    }
    return s; --> 1
}

f(n) = 2n + 3

Time Complixty:
O(n)

Space Complixty:
A -> n
s -> 1
n -> 1
i -> 1


=================

Finding sum of two matrixe

algorithm add(A, B, n)
{
    for(i = 0; i < n; i++) --> n + 1
    {
        for(j = 0; j < n; j++) --> n * (n + 1)
        {
            C[i, j] = A[i, j] + B[i, j]; --> n * n
        }
    }
}

f(n) = n+1 + n^2 + n + n^2
     = 2n^2 + 2n + 1

O(n^2)


for(i = 100; i > n; i = i / 2)
{
    ----
    ----
    ----
}

i 
----------------------
1
1 * 2 = 2
2 * 2 = 4
4 * 2 = 8


i = 2^k times

i >= n

i = n

i = 2^k

2^k = n

k = log n


O(log n)

*/
#include <iostream>

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    float x = 5.6, y = 10.4;
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    swapValues(x, y);

    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    std::string x1 = "omar";
    std::string y1 = "abdo";
    std::cout << "Before swapping: x = " << x1 << ", y = " << y1 << std::endl;

    swapValues(x1, y1);

    std::cout << "After swapping: x = " << x1 << ", y = " << y1 << std::endl;

    return 0;
}

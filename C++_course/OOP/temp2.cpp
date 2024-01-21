#include <iostream>

template <typename T, typename P>
class Pair {
public:
    Pair(T first, P second) : first(first), second(second) {}

    void display() {
        std::cout << "Pair: |" << first << ", " << second << "|" << std::endl;
    }

private:
    T first;
    P second;
};

int main() {
    Pair<int, std::string> first(1, "omar");
    Pair<double, int> second(3.5, 5);

    first.display();
    second.display();

    return 0;
}

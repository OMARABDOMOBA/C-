#include <iostream>
#include <list>
#include <algorithm>

// using namespace std;

int main() {
    // Creating a list of integers
    std::list<std::string>  employeeList = {"Omar", "Abd El-Rahman", "Abd El-Kareem", "Ahmed", "Mohammed", "Menna", "Donia"};

    std::list<std::string>  list;

    employeeList.swap(list);

    list.sort(std::less<std::string>());

    std::cout << "List Elements: ";
    for (const auto& name : list) {
        std::cout << name << std::endl;
    }

    return 0;
}

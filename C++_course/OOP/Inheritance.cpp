#include <iostream>
#include <string>

// Base class, Super Calss
class Person {
protected:
    std::string name;

public:
    //Constructor
    Person(const std::string& n) : name(n) {}

    void display() const {
        std::cout << "Person: " << name << std::endl;
    }
};

// Derived class inheriting from Person
class Student : public Person {
private:
    int studentID;

public:
    Student(const std::string& n, int id) : Person(n), studentID(id) {}

    void display() const {
        std::cout << "Student: " << name << " (ID: " << studentID << ")" << std::endl;
    }
};

int main() {
    // Creating objects of base and derived classes
    Person first("John");
    Student second("Alice", 123);

    // Calling display methods
    first.display();  // Calls display method of Person class
    second.display(); // Calls display method of Student class

    return 0;
}

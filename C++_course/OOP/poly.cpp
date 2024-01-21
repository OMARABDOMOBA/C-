#include <iostream>

// Base class
class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing a shape" << std::endl;
    }
};

// Derived classes demonstrating polymorphism
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a square" << std::endl;
    }
};

int main() {
    // Creating objects of base and derived classes
    Shape shape;
    Circle circle;
    Square square;

    // Using polymorphism through pointers
    Shape* ptrShape = &shape;
    ptrShape->draw(); // Calls draw method of Shape class

    ptrShape = &circle;
    ptrShape->draw(); // Calls draw method of Circle class

    ptrShape = &square;
    ptrShape->draw(); // Calls draw method of Square class

    return 0;
}

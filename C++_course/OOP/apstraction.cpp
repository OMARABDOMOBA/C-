#include <iostream>
#include <vector>

// Abstract base class
class Shape {
public:
    // Pure virtual function makes the class abstract
    virtual void draw() const = 0;

    virtual ~Shape() = default; // Virtual destructor for proper cleanup
};

// Derived classes providing concrete implementations
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
    // Using abstraction to create a collection of shapes
    std::vector<Shape*> shapes;
    shapes.push_back(new Circle());
    shapes.push_back(new Square());

    // Using polymorphism to draw shapes without knowing their specific types
    for (const auto& shape : shapes) {
        shape->draw();
    }

    // Proper cleanup to avoid memory leaks
    for (const auto& shape : shapes) {
        delete shape;
    }

    return 0;
}

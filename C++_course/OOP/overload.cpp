#include <iostream>

class Person
{
    private:
        std::string name;
        int age;
        
    public:
        //constructor

        Person() : name("Omar"), age(20)
        {}

        Person(std::string Name, int Age) : name(Name), age(Age)
        {
        }

        void print()
        {
            std::cout << name << " " << age << std::endl;
        }

        void setName(std::string newName)
        {
            name = newName;
        }
        std::string getName()
        {
            return name;
        }

        void setAge(int newAge)
        {
            age = newAge;
        }

        int getAge()
        {
            return age;
        }
};

int main()
{
    Person student("Abdo", 25);

    Person student2 = student;

    // student.setName("Abdo");
    // student.setAge(23);
    // std::cout << student.getAge() << std::endl;

    student.print();
    student2.print();

    float x = 5, y = 6;

    std::string m = "om", c ="mosd";

    std::cout << m + c << std::endl;

    return 0;
}
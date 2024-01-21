/*
OOP
1- Encapsulation
2- Inheritance
3- polymorphism
4- abstaction
*/

// modes of inheritance
/*
1 - public : 

2 - protected : 

3 - privete : 


Types of inheritance

single inheritance
multilevel inheritance
multible inheritance
*/

#include <iostream>

class Person
{
private:
    std::string name;
    int age;

public:
    // constructor
    Person() : name("omar"), age(23)
    {
    }

    Person(std::string Name, int Age) : name(Name), age(Age)
    {
    }

    void print()
    {
        std::cout <<"Name = " << name << "\t" << "Age = " << age << std::endl;
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

class Student : public Person
{
private:
    float gpa;
    int studyLevel;
    int studentId;
    std::string department;
public:
    Student(std::string Name, int Age, float g, int sl, int id, std::string dp) : Person(Name, Age)
    {
        gpa = g;
        studyLevel = sl;
        studentId = id;
        department = dp;
    }

    void set_gpa(float gpa)
    {
        this->gpa = gpa;
    }
    float get_gpa()
    {
        return gpa;
    }

    //override
    void print()
    {
        std::cout << "########################################" << std::endl;
        Person::print();
        std::cout << "GPA = " << gpa << "\t" << "Study Level = " << studyLevel << std::endl;
        std::cout << "Student Id = " << studentId << "\t" << "Department = " << department << std::endl;
    }
};

class PostGraduatedStudent : public Student
{
    private:
        std::string research_interest;
    public:
        PostGraduatedStudent(std::string Name, int Age, float g, int sl, int id, std::string dp, std::string rarea) : Student(Name, Age, g, sl, id, dp)
        {
            research_interest = rarea;
        }

        void set_research_interest(std::string rarea)
        {
            research_interest = rarea;
        }

        std::string get_research_interest()
        {
            return research_interest;
        }

        void print()
        {
            Student::print();
            std::cout << "Research Interest = " << research_interest << std::endl;
        }
};

int main()
{
    Person student("Omar Abdo", 23);

    Student s1("Abdelrahman", 22, 3.5, 4, 231, "Mechatronics");

    PostGraduatedStudent p("Ahmed", 23, 4, 4, 400, "Mechatronics", "Robotics");

    // student.setName("Omar Abdo");
    // std::cout << student.getName() << std::endl;
    // std::cout << student.getAge() << std::endl;

    student.print();
    s1.print();
    p.print();

    return 0;
}
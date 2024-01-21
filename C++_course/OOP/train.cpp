#include <iostream>

// OOP (Object Orinted Programming)
/*
- human - pen - chair - student - teacher

Programming paradigm : is a style of programming, a way of thinking about software structre

programming paradigms : Procedural - structured - functional - OO - Event-driven

Oject : is a thing (Tangible , Intangible)

object: 
    Data - Attributes
        Operations() - Behaviors() - methods() --> functions


Ex : Product:
        Attributes
        - name
        - code
        - price
        - producer
    
        Operations()
        Modify_name();
        set_Discount();
        getProductName();
        getProductPrice();

What is class? why do we need class?

class is user define data type
*/

class Smallobj // define a class
{
    private: // access modifire
    int somedata; //class data

    public: // access modifire
    void setData(int d) // member function to set data
    {
        somedata = d;
    }

    void showData() // member function to display data
    {
        std::cout << "Data is : " << somedata << std::endl;
    }
    
};
int main()
{
    Smallobj s1, s2;

    s1.setData(1066); // call member function to set the data
    s2.setData(1776);

    s1.showData(); // call member function to display data
    s2.showData();

    return 0;
}
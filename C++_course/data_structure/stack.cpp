#include <iostream>

const int MAX_SIZE = 100;

template <class T>
class Stack
{
    private:
        int top;
        T item[MAX_SIZE];
    public:
        //Constructor
        Stack() : top(-1)
        {}
        
        //pushing the element
        void push(T element)
        {
            if( top >= MAX_SIZE)
            {
                std::cout << "Stack is full";
            }
            else
            {
                top++;
                item[top] = element;
            }
        }

        bool is_empty()
        {
            return top < 0;
        }

        void pop()
        {
            if(!is_empty())
            {
                top--;
            }
            else
                std::cout << "Stack is empty";
        }

        void popElement(T Element)
        {
            if(!is_empty())
            {
                item[top] = Element;
                top--;
            }
            else
                std::cout << "Stack is empty";
        }

        void getTop()
        {
            if(!is_empty())
            {
                std::cout << item[top] << std::endl;
            }
            else
                std::cout << "Stack is Empty";
        }


        void print()
        {
            std::cout << "[";

            for(int i = top; i >= 0; i--)
            {
                std::cout << item[i] << ", ";
            }
            std::cout << "]";
            std::cout << "\n";
        }
};

int main()
{
    Stack<int> arr;
    
    arr.push(5);
    arr.push(6);
    arr.push(7);
    arr.pop();
    arr.push(9);
    arr.print();

    std::string name;
    std::cout << "Enter name : ";
    std::cin >> name;

    Stack<std::string> arr2;
    arr2.push(name);
    arr2.push("Eslam");
    arr2.push("Dr");
    arr2.push("Yousef");
    arr2.push("Abd El-Rahman");

    arr2.pop();
    arr2.print();

    return 0;
}
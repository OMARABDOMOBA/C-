#include <iostream>

// Stack

const int MAX_SIZE = 100;

template<typename T>
class Stack
{
    private:
        int top;
        T item[MAX_SIZE];
    
    public:
        //Constructor
        Stack() : top(-1)
        {}

        //Methods
        // Push
        void push(T element)
        {
            if(top >= MAX_SIZE)
            {
                std::cout << "Stack is full" << std::endl;
            }
            else
            {
                top++;
                item[top] = element;
            }
        }

        //empty
        bool empty()
        {
            return top < 0;
        }

        //pop
        void pop()
        {
            if(!empty())
            {
                top--;
            }
            else
                std::cout << "Stack is empty" << std::endl;
        }

        void getTop(T &stackTop)
        {
            if(!empty())
            {
                stackTop = item[top];
                std::cout << stackTop << std::endl;
            }
            else
                std::cout << "Stack is empty" << std::endl;
        }

        void print()
        {
            std::cout << "[ ";
            for(auto i = top; i >= 0; i--)
            {
                std::cout << item[i] << ", ";
            }
            std::cout << " ]";
            std::cout << "\n";
        }
};

int main()
{
    Stack<int> arr;

    arr.push(10);
    arr.push(20);
    arr.push(30);
    arr.push(40);
    arr.push(50);

    arr.pop();
    arr.print();

    int item = 0;

    arr.getTop(item);

    std::cout << arr.empty() << std::endl;

    Stack<std::string> str;

    str.push("omar");
    str.push("abdo");
    str.push("karem");

    str.print();
    str.pop();
    str.print();

    std::string item1 = "";

    str.getTop(item1);

    std::cout << str.empty() << std::endl;

    return 0;
}
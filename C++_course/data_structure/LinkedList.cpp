#include <iostream>

//Linked list

template <class T>
class Stack
{
    private:
        struct Node
        {
            T item;
            Node *next;
        };
        Node *top, *current;

    public:
        Stack() : top(NULL)
        {}
        
        void push(T value)
        {
            Node *newItem = new Node;
            if(newItem == NULL)
            {
                std::cout << "Stack push can not allocat memory";
            }
            else
            {
                newItem->item = value;
                newItem->next = top;
                top = newItem;
            }
        }

        bool is_empty()
        {
            return top == NULL;
        }

        void pop()
        {
            if(is_empty())
            {
                std::cout << "Stack is Empty ";
            }
            else
            {
                Node *temp = top;
                top = top->next;

                temp->next = NULL;
                delete temp;
            }
        }

        void getTop(T &topItem)
        {
            if(is_empty())
            {
                std::cout << "Stack is Empty";
            }
            else
            {
                topItem = top->item;
                std::cout << topItem;
            }
        }

        void Display()
        {
            current = top;
            std::cout << "Items in Stack : ";
            std::cout << "[";
            while(current != NULL)
            {
                std::cout << current->item;
                current = current->next;
                std::cout << ", ";
            }
            std::cout << "]";
            std::cout << std::endl;
        }
};
int main()
{
    Stack<int> list;

    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);
    list.push(5);
    list.pop();

    int top = 0;
    std::cout << "the top item is : ";
    list.getTop(top);
    std::cout << std::endl;

    list.Display();

    Stack<std::string> str;
    str.push("omar");
    str.push("Mohammed");
    str.push("mazen");
    str.pop();

    std::string name;

    str.getTop(name);
    std::cout << std::endl;

    str.Display();


    return 0;
}
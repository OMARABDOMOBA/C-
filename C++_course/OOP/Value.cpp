#include <iostream>

class Value
{
    private:
        int *p;
        int memoryCapacity;
    public:
        // Default Constructor
        Value(int capcity) : memoryCapacity(capcity)
        {
            p = new int[capcity];
        }

        void setValue(int capacity)
        {
            for(int i = 0; i < memoryCapacity;i++)
            {
                p[i] = capacity;
            }
        }

        void getValue(int value)
        {
            for(int i = 0; i < memoryCapacity;i++)
            {
                std::cout << "Value number : " << p[i] << std::endl;
            }
        }

        //Destructor
        ~Value()
        {
            delete [] p;
        }
};

void useValue(int value)
{
    Value n_value(value);
    n_value.setValue(value);
    n_value.getValue(value);
}

int main()
{
    for(int i = 1; i <= 10;i++)
    {
        useValue(i);
    }

    return 0;
}
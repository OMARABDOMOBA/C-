#include <iostream>
#include <vector>
/*
class A{
    parametarized con
    copy con
    move con
    move operator
}

*/

class MyClass
{
    private:
        int *data;
        size_t size;

    public:
        //parameterized Constructor
        MyClass(const size_t _size = 1) : data(new int[_size]), size(_size)
        {
            std::cout << "Constructor called" << std::endl;
        }

        //Copy Constructor using copy semantic and l-value reference
        MyClass(const MyClass &obj) : data(new int[obj.size]), size(obj.size)
        {
            std::cout << "Copy Constructor called" << std::endl;
            for(int i = 0; i < obj.size; i++)
            {
                data[i] = obj.data[i];
            }
        }

        //move constructor using move semantic and r-value reference
        MyClass(MyClass && obj) : data(obj.data), size(obj.size)
        {
            std::cout << "move Constructor called" << std::endl;
            obj.data = nullptr;
            obj.size = 0;
        }
        
        MyClass& operator=(MyClass && obj)
        {
            if(this != &obj)
            {
                delete[] data;

                size = obj.size;
                data = obj.data;

                obj.data = nullptr;
                obj.size = 0;
            }
            std::cout << "Move assignment operator Called" << std::endl;

            return *this;
        }

        int get_data()
        {
            return *data;
        }

        ~MyClass()
        {
            std::cout << "Destructor Called" << std::endl;
            if(data != nullptr)
            {
                delete[] data;
                data = nullptr;
            }
        }
};

int main()
{
   MyClass source(5);

   MyClass destination(std::move(source));

   destination = std::move(source);

    return 0;
}
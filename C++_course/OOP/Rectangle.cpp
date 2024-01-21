#include <iostream>
#include <ostream>

class Rectangle
{
    private:
        int length;
        int width;
        int height;
    public:
    // constructor
    Rectangle() : length(0), width(0)
    {}
    Rectangle(int len, int wid) : length(len), width(wid) // Initialization list
    {
    }

    Rectangle(int len, int wid, int hei) : length(len), width(wid) , height(hei)
    {}
    void set_length(int l)
    {
        if(l >= 0)
            length = l;
        else
            std::cout << "Erorr, Please try again" << std::endl;
    }
    int get_length()
    {
        return length;
    }
    void set_width(int w)
    {
        if(w >= 0)
            width = w;
        else
            std::cout << "Erorr, Please try again" << std::endl;
    }
    int get_width()
    {
        return width;
    }

    int get_height()
    {
        return height;
    }

    friend std::ostream& operator <<(std::ostream &output, Rectangle &c1);

    // Rectangle add_rectangle(Rectangle &r1)
    // {
    //     Rectangle r2;
    //     r2.length = length + r1.length;
    //     r2.width = width + r1.width;
    //     r2.height = height + r1.height;

    //     return r2;
    // }

    Rectangle operator+(Rectangle d2)
    {
        int l = length + d2.length;
        int w = width + d2.width;
        int h = height + d2.height;

        return Rectangle(l, w, h);
    }

    //Destructor
    ~Rectangle()
    {
    }
};

std::ostream& operator <<(std::ostream &output, Rectangle &c1)
{
    output << c1.length << " " << c1.height << " " << c1.width;

    return output;
}

int main()
{
    Rectangle r1(5, 7, 5);
    Rectangle r2(7, 3, 3);

    Rectangle r3 = r1 + r2;

    // r1.set_length(2);
    // r1.set_width(5);

    // std::cout << r1.get_length() << std::endl;
    // std::cout << r1.get_width() << std::endl;
    
    // std::cout << r2.get_length() << std::endl;
    // std::cout << r2.get_width() << std::endl;

    // std::cout << r3.get_length() << std::endl;
    // std::cout << r3.get_width() << std::endl;
    // std::cout << r3.get_height() << std::endl;

    std::cout << r3 << std::endl;


    return 0;
}
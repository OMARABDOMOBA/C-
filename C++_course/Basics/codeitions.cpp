#include <iostream>

int y = 5;

int main()
{
    int x = 5;
    int y = 7;

    int sersorRead = 25;

    if(!(sersorRead == 24))
    {   
        std::cout << "reading is high" << std::endl;
    }
    else if(sersorRead <= 25)
    {
        std::cout << "reading is mid" << std::endl;
    }
    else
    {
        std::cout << "reading is low" << std::endl;
    }

    return 0;
}
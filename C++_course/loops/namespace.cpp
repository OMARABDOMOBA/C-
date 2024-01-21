#include <iostream>

namespace Evaluation
{
    //int name_of_function(string parameter)

    void grade(std::uint16_t grade)
    {
        if(grade > 50 && grade <= 65)
        {
            std::cout << "Your Evaluation is : Passed" << std::endl;
        }
        else if(grade > 65 && grade <= 75)
        {
            std::cout << "Your Evaluation is : Good" << std::endl;
        }
        else if(grade > 75 && grade <= 85)
        {
            std::cout << "Your Evaluation is : Very Good" << std::endl;
        }
        else if(grade > 85 && grade <= 100)
        {
            std::cout << "Your Evaluation is : Excellent" << std::endl;
        }
        else 
            std::cout << "Your Evaluation is : Failed" << std::endl;
    }
}

int main()
{
    std::uint16_t grade;

    std::cout << "Enter your grade : ";
    std::cin >> grade;

    Evaluation::grade(grade);

    return 0;
}
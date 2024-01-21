#include <iostream>
#include <string>

class Complex
{
    private:
        float m_real, m_imagin;
    public:
        Complex(float real = 0, float imagin = 0) : m_real(real), m_imagin(imagin)
        {}

    Complex operator+(Complex const &obj)
    {
        Complex result;
        result.m_real = m_real + obj.m_real;
        result.m_imagin = m_imagin + obj.m_imagin;
        
        return result;
    }

    friend std::ostream & operator<<(std::ostream &output, Complex &complex);

    void display()
    {
        std::cout << m_real << " + i" << m_imagin << std::endl;
    }

    void setReal(float rl)
    {
        this->m_real = rl;
    }

    float getReal()
    {
        return this->m_real;
    }

    void serImagin(float img)
    {
        this->m_imagin = img;
    }
    float getImagin()
    {
        return this->m_imagin;
    }

};

std::ostream & operator<<(std::ostream &output, Complex &complex)
{
    output << complex.m_real << " + i" << complex.m_imagin;

    return output;
}

int main()
{
    Complex C1(12.4, 5), C2(13.4, 6), C3;

    C3 = C1 + C2;
    C3.display();

    C1.setReal(4);
    C1.serImagin(3.4);
    C2.setReal(5);

    std::cout << C1.getImagin() << std::endl;
    

    C3 = C1 + C2;
    // C3.display();

    // std::cout << C3 << std::endl;
    std::cout << C3;
    std::cout << std::endl;

    return 0;
}
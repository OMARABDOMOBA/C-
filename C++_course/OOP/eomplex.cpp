#include <iostream>

class Counter
{
    private:
        unsigned int count;
    public:
        Counter(): count(0)
        {}
        Counter(int c) : count(c)
        {}

        void set_count(int count)
        {
            this->count = count;
        }

        unsigned int get_count()
        {
            return count;
        }

        Counter operator++()
        {
            ++count;
            return *this;
        }
        Counter operator ++(int)
        {
            count++;
            return Counter(count);
        }
        
};

int main()
{
    Counter c1, c2;
    // std::cout << c1.get_count() << std::endl;
    // std::cout << c2.get_count() << std::endl;

    ++c1;
    c1++;

    std::cout << c1.get_count() << std::endl;
    return 0;
}
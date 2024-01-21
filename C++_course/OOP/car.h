#include <iostream>

class Car
{
    private:
        std::string maker;
        std::string color;
        int model;
        int maxSpeed;
    public:
        void set_maker(std::string m); // to set maker name
        std::string get_maker(); // get maker name

        void set_color(std::string c);
        std::string get_color();

        void set_model(int mo);
        int get_model();

        void set_max(int max);
        int get_max();

};
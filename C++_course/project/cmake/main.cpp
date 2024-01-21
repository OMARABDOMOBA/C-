#include <iostream>
#include "include/calc.hpp"
#include "wifi.hpp"
#include "./build/defaultconfig.h"

int main()
{
    #ifdef DEBUG_INFO
        std::cout << "This is " << DEBUG_INFO << std::endl;
    #endif

    std::cout << "Hello World : " << sum(10, 6)<< std::endl;

    wifi_init();

    std::cout << "Software Version is : " << HELLOAPP_VERSION_MAJOR << "." << HELLOAPP_VERSION_MINOR << std::endl;
    std::cout << "Product type is : " << productType << std::endl;
    std::cout << "Product year is : " << PRODUCT_YEAR << std::endl;
    std::cout << STD_CXX << std::endl;

    return 0;
}
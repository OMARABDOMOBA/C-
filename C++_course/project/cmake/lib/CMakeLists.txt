cmake_minimum_required(VERSION 3.16.3)
message("Hello from inside library")

add_library(wifi_lib
    wifi.cpp
    wifi.hpp
)
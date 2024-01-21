cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
project(PackageProject)

#################################################3

set(CMAKE_PREFIX_PATH "")

find_package(uniofficial-sqlite3 CONFIG REQUESTED)
find_package(fmt CONFIG REQUEST)

add_executable(runbinary main.cpp)

target_link_libraries(runbinary PRIVATE uniofficial::sqlite3::sqlite3)
target_link_libraries(runbinary PRIVATE fmt::fmt)
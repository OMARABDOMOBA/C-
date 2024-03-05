cmake_minimum_required(VERSION 3.16.3)

project(HELLOAPP VERSION 3.11)

set(SRC_FILES
    main.cpp
    source/calc.cpp)

#To print the Variable
message(STATUS "Source file has ${SRC_FILES}")
message("Path form root to cmake is ${CMAKE_SOURCE_DIR}")

#using if statement
if(EXISTS ${CMAKE_SOURCE_DIR}/main.cpp)
    message("File Exists")

else()
    message(FATAL_ERORR "File does not Exists")

endif()

#calling cmake in another library
add_subdirectory(${CMAKE_SOURCE_DIR}/lib)

add_executable(hellobinary ${SRC_FILES})

target_include_directories(hellobinary PUBLIC include/ lib/)

target_link_libraries(hellobinary PUBLIC wifi_lib)


###################################################

#1-Important Builtin Variables

message(STATUS "CMAKE_SOURCE_DIR ${CMAKE_SOURCE_DIR}")
message(STATUS "CMAKE_CURRENT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}")

message(STATUS "CMAKE_BINARY_DIR ${CMAKE_BINARY_DIR}")
message(STATUS "CMAKE_CURRENT_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}")

message(STATUS "CMAKE_GENERATOR ${CMAKE_GENERATOR}")

# ###################################################
# #2- Set values in builtin variables
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

message(STATUS "Show C++ standard : ${CMAKE_CXX_STANDARD}")
message(STATUS "Show C++ standard : ${CMAKE_CXX_STANDARD_REQUIRED}")

# #3- Commands can be lower case or upper case
# MESSAGE(STATUS "Do what you want")

#4- Assign on variables
# set(SRC_FILES
#     main.cpp
#     src/calc.cpp)
#it can be like this    
# set(SRC_FILES "main.cpp;src/calc.cpp")

# 5- Envirnment variables
set(P $ENV{PATH})
message(STATUS "PATH : ${P}")

#6- set a value to argument options
message(STATUS "Argument value is : ${Myvalue}")

#7- configur file

set(PRODUCT_YEAR "2024")
configure_file(defaultconfig.h.in defaultconfig.h)
target_include_directories(hellobinary PUBLIC ${PROJECT_BINARY_DIR})

# Set DEBUGINFO if DEBUG is defined
#OFF 0 NO N FALSE "NOTFOUND" "IGNORE" --> Flase
if(DEBUG)
    set(DEBUG_INFO "Software Engineer Omar Abdo")
endif()


if(TARGET wifi_lib)
    message("wifi is avilable")
else()
    message(FATAL_ERORR "File not found")
endif()

#For loop
foreach(F IN ITEMS O M A R)
    message(STATUS ${F})
endforeach()

set(lst A B D O)
foreach(F IN LISTS lst)
    message(STATUS ${F})
endforeach()


#While loop
# set(variable 10)
# while(variable)
#     message(${variable})
#     math(EXPR variable "${variable} - 1")
# endwhile()

function(happy arg1)
    message("ARG1 ${arg1}") # Name of the variable
    message("ARG1 ${${arg1}}") # Show the content of the variable
    message("ARG1 ${ARGN}") # show extra arguments
    message("ARG1 ${ARGC}") # number of arguments called
endfunction()

set(var 2 0 2 4)
happy(var jan omar)


#CMake Cash
option(CVar "Boolean Variable" TRUE) #saved in Cmake Cash file
set(Variable 17 CACHE BOOL "Boolean Vaiable with set") #saved in Cmake Cash file with set function
message("Var is ${CVar}")


# Compiler information
target_compile_definitions(hellobinary PUBLIC "STD_CXX=17")
target_compile_options(hellobinary PUBLIC -march=native)

# Install

install(FILES "${PROJECT_BINARY_DIR}/hellobinary"
    DESTINATION "${PROJECT_BINARY_DIR}/executable"
)

install(FILES
    "${CMAKE_SOURCE_DIR}/lib/wifi.hpp"
    "${CMAKE_SOURCE_DIR}/include/calc.hpp"
    DESTINATION "${PROJECT_BINARY_DIR}/includes"
)

##########################################

# File
# FILE(READ "main.cpp" MAIN_Text)
# Message("${MAIN_Text}")
# message("---------------------------------------------")
# FILE(STRINGS "main.cpp" MAIN_Text)
# Message("${MAIN_Text}")
# message("---------------------------------------------")
# FILE(STRINGS "main.cpp" MAIN_Text REGEX "^int.")
# message("${MAIN_Text}")
# message("---------------------------------------------")
# file(GLOB_RECURSE SRCS "*.cpp")
# message("${SRCS}")

##########################################


# String
file(READ "main.cpp" Main_Text)
STRING(REGEX REPLACE "int" "void" OUT ${Main_Text})
message("${OUT}")

##########################################

# MAcro

set(global_variable 10)
macro(funcname x)
    message("${x}")
    message("${${x}}")
    set(global_variable 15)
endmacro()

#with function
# function(funcname x)
#     message("${x}")
#     message("${${x}}")
#     set(global_variable 15 PARENT_SCOPE)
# endfunction()

message("${global_variable}")
funcname(global_variable)
message("${global_variable}")

#########################################

# break and continue
set(variable 10)
while(variable)
    message(${variable})
    math(EXPR variable "${variable} - 1")
    if(${variable} LESS_EQUAL 5)
        break()
    endif()
endwhile()

#########################################

# Execute process
execute_process(COMMAND "ls")

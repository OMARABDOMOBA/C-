# !/bin/bash

# x="ahmed"
# echo "Hello world"
# printf "hi ${x}\n"

#===================================================================#

#input

# read -p "Enter your name : " input

# printf "${input}\n"

# read -sp "Enter password : " pass
# echo "${pass}"

#===================================================================#

#for loop

# for i in 1 2 3 4 5 6
# do
# echo $i
# done


# for i in {1..10}
# do
# echo "The number is : ${i}"
# done


# learn="hello omar welcome to bash"
# for str in $learn
# do
# echo $str
# done

# var=`ls`
# echo "$var"

# x=`ls`
# for i in $x
# do
# echo "the file name is : ${i}"
# done

#===================================================================#

#while loop
# x=0
# while [ $x -lt 10 ]
# do 
#     echo hello $x
#     ((x++))
# done

# #===================================================================#

# #Until Loop
# echo "Enter your name : "
# read counter
# until [ $counter -eq 0 ]
# do
#     counter=$((counter - 1))
#     echo $counter
# done

#===================================================================#

#Conditions

# test "omar" = "oma" && echo tmam || echo this is false

# test 001 = 1 && echo true || echo false
# test 001 -eq 1 && echo true || echo false

# if [ 01 -eq 1 ]
# then
#     echo the value is 1
# else
#     echo the value cannot be determined
# fi

# read -p "Enter any string : " str

# if [ -z $str ]
# then
# echo the string is empty
# else
# echo the string is ${str}
# fi

# read -p "Enter number : " number
# if [ $number -lt 125 ]
# then
#     echo the value is less than 125
# elif [ $number -lt 200 ]
# then
#     echo the value is between 125 and 200
# else
#     echo the value is grater than 200
# fi

# read -p "Enter value : " x
# test -z $x  && echo empty || echo not empty

# test -f "./test.sh" && echo "File exists"

# if [ -f "./test.sh" ]
# then
#     echo "File exists"
# else
#     echo "File does not exist"
# fi

# if [ 1 -eq 1 -a 4 -gt 3 ]
# then
# echo "#rule 1"
# fi

# if [ 1 -eq 1 ] && [ 4 -gt 3 ]
# then
# echo "#rule 2"
# fi

# if [[ 1 -eq 1  &&  4 -gt 3 ]]
# then
# echo "#rule 3"
# fi

# #C Style
# if ((001 == 1))
# then
# echo "#rule 4"
# fi

# x=0
# if (( ++x ))
# then
# echo "#rule 5"
# else
# echo "No"
# fi

#===================================================================#

#mathimatical expretions

# x=8
# y=3
# z= expr 1 + 2
# echo $z
# let sum=3+10
# echo $sum

# ((x++))
# echo $x
# echo "x=8, y=2"
# echo "Additional of x & y"
# echo $(( $x + $y))
# echo "Subtraction of x & y"
# echo $(( $x - $y))
# echo "Munltiplication of x & y"
# echo $(( $x * $y))
# echo "Divition of x & y"
# echo $(( $x - $y))

# ((x += 5))
# echo $x

# ((y -= 5))
# echo $y

#===================================================================#

#Comments
# <<comment
# mltiline
# mul
# omad
# comment

# var1="Hello world"
# var2="omar"
# echo ${var1} ${var2}

#===================================================================#

#Funcions
# print_function()
# {
#     echo "Hello from Function"
# }

# print_function

# print_planet()
# {
#     echo hello $1

# }

# print_planet earth

# print()
# {
#     return 5
# }
# print
# echo "$?"
#===================================================================#

#Array

# var1="1"
# var2="2"

# echo $(($var1 + $var2))

#===================================================================#

#Switch case

# echo "Do you want me?"
# read -p "Answer is : " Answer

# case $Answer in
# Yes|yes|YES|y)
# echo "Hello world"
# ;;
# NO|No|no|n)
# echo "No HW"
# ;;
# *)
# echo "default"
# ;;
# esac


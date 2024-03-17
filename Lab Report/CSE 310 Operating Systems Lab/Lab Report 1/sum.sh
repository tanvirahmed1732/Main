#!/bin/bash

sum_odd=0
sum_even=0
read -p "Enter 1st number: " n1
read -p "Enter 2nd number: " n2
read -p "Enter 3rd number: " n3
read -p "Enter 4th number: " n4

# For the first variable
if [ $(( n1 % 2 )) == 0 ]
then
    sum_even=$(( sum_even + n1 ))
else
    sum_odd=$(( sum_odd + n1 ))
fi

#second variable
if [ $(( n2 % 2 )) == 0 ]
then
    sum_even=$(( sum_even + n2 ))
else
    sum_odd=$(( sum_odd + n2 ))
fi

#third variable
if [ $(( n3 % 2 )) == 0 ]
then
    sum_even=$(( sum_even + n3 ))
else
    sum_odd=$(( sum_odd + n3 ))
fi

#fourth variable
if [ $(( n4 % 2 )) == 0 ]
then
    sum_even=$(( sum_even + n4 ))
else
    sum_odd=$(( sum_odd + n4 ))
fi

echo "The sum of even: $sum_even"
echo "The sum of odd: $sum_odd"

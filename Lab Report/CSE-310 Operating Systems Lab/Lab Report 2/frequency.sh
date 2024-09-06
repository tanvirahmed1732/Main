#!/bin/bash

read -p "Enter the number: " k
n1=0
n2=0
n3=0
n4=0
n5=0
n6=0
n7=0
n8=0
n9=0
n0=0
i=0
while [ $i -lt ${#k[0]} ]
do
    if [ ${k:i:1} == 1 ]
    then
        n1=$(( n1+1 ))
    fi
    if [ ${k:i:1} == 2 ]
    then
        n2=$(( n2+1 ))
    fi
    if [ ${k:i:1} == 3 ]
    then
        n3=$(( n3+1 ))
    fi
    if [ ${k:i:1} == 4 ]
    then
        n4=$(( n4+1 ))
    fi
    if [ ${k:i:1} == 5 ]
    then
        n5=$(( n5+1 ))
    fi
    if [ ${k:i:1} == 6 ]
    then
        n6=$(( n6+1 ))
    fi
    if [ ${k:i:1} == 7 ]
    then
        n7=$(( n7+1 ))
    fi
    if [ ${k:i:1} == 8 ]
    then
        n8=$(( n8+1 ))
    fi
    if [ ${k:i:1} == 9 ]
    then
        n9=$(( n9+1 ))
    fi
    if [ ${k:i:1} == 0 ]
    then
        n0=$(( n0+1 ))
    fi
    
    i=$(( i+1 ))
    
done

if [ $n0 != 0 ]
then
    echo "0 = $n0 times"
fi
if [ $n1 != 0 ]
then
    echo "1 = $n1 times"
fi
if [ $n2 != 0 ]
then
    echo "2 = $n2 times"
fi
if [ $n3 != 0 ]
then
    echo "3 = $n3 times"
fi
if [ $n4 != 0 ]
then
    echo "4 = $n4 times"
fi
if [ $n5 != 0 ]
then
    echo "5 = $n5 times"
fi
if [ $n6 != 0 ]
then
    echo "6 = $n6 times"
fi
if [ $n7 != 0 ]
then
    echo "7 = $n7 times"
fi
if [ $n8 != 0 ]
then
    echo "8 = $n8 times"
fi
if [ $n9 != 0 ]
then
    echo "9 = $n9 times"
fi

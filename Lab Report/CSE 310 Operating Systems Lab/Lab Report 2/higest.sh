#!/bin/bash

highest()
{
    x=0
    y=0
    z=0
    i=1
    while [ $i -le $1 ]
    do
        read -p "Enter the number: " k
        if [ $k -ge $x ]
        then
            z=$y
            y=$x
            x=$k
        elif [ $k -ge $y ]
        then
            z=$y
            x=$k
        elif [ $k -ge $z ]
        then
            z=$k
        fi
        i=$(( i+1 ))
    done
    sum $x $y $z

}

sum()
{
    s=$(( $2+$3 ))
    echo "The sum of second and third highest number is: ($2+$3) = $s"
}
read -p "Enter the number of elements: " n

highest $n
#echo "$x $y $z"

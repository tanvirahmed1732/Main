#!/bin/bash

read -p "Enter the first side:" s1
read -p "Enter the second side:" s2
read -p "Enter the third side:" s3
if [ $(( $s1 + $s2 )) -gt $s3 ] && [ $(( $s2 + $s3 )) -gt $s1 ] && [ $(( $s1 + $s3 )) -gt $s2 ]
then
    echo "The triangle is possible."
else
    echo "The triangle is not possible."
fi
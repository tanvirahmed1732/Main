#include<stdio.h>
int main()
{
    float mark;
    printf("Enter your mark: ");
    scanf("%f", &mark);
    if (mark>=0 && mark<40)
        printf("Grade: F");
    else if (mark>=40 && mark <45)
        printf("Grade: D");
    else if (mark>=45 &&  mark<50)
        printf("Grade: C");
     else if (mark>=50 &&  mark<55)
        printf("Grade: C+");
    else if (mark>=55 &&  mark<60)
        printf("Grade: B-");
    else if (mark>=60 &&  mark<65)
        printf("Grade: B");
    else if (mark>=65 &&  mark<70)
        printf("Grade: B+");
    else if (mark>=70 &&  mark<75)
        printf("Grade: A-");
    else if (mark>=75 &&  mark<80)
        printf("Grade: A");
    else if (mark>=80 &&  mark<=100)
        printf("Grade: A+");
    else
        printf("Wrong mark provided.");
    return 0;
}

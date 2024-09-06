#include<stdio.h>
int main()
{
    int x;
    printf("Enter the position of fibonacci series: ");
    scanf("%d", &x);
    int m=0, n=1, next, sum=0;
    for(int i=0; i<x; i++)
    {
        if(i <=1)
            next =i;
        else
        {
            next = n+m;
            m=n;
            n = next;
        }
        sum+=next;
        printf("%d ", next);
        if(i<x-1)
            printf("+ ");
    }
    printf("= %d", sum);
}

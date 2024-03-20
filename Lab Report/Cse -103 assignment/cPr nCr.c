#include<stdio.h>
int fact(int n)
{
    int F=1;
    if(n>0)
    F = n*fact(n-1);
    return F;
}
int main()
{
    int n, r, C, P;
    printf("Enter n & r: ");
    scanf("%d %d", &n, &r);
    P = fact(n)/fact(n-r);
    C = fact(n)/ (fact(r)*fact(n-r));
    printf("%dC%d = %d\n",n,r,C);
    printf("%dP%d = %d",n,r,P);
}

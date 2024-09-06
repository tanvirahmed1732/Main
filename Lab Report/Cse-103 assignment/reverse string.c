#include<stdio.h>
int main()
{
    char ar[100], rar[100];
    printf("Enter a string: ");
    gets(ar);
    int i;
    for(i=0; ar[i]!='\0'; i++);
    i--;
    for(int j=0; ar[j]!='\0'; j++)
    {
        rar[i] = ar[j];
        i--;
    }
    puts(rar);
    return 0;
}

#include<stdio.h>
int main()
{
    char f[100], s[100];
    printf("Enter first string: ");
    gets(f);
    printf("Enter second string: ");
    gets(s);
    int i;
    for(i=0; f[i]!='\0'; i++);
    f[i] = ' ';
    i++;
    for(int j=0; s[j]!='\0'; j++)
    {
        f[i] = s[j];
        i++;
    }
    puts(f);
}

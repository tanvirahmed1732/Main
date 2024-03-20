#include<stdio.h>
int main()
{
    char ar[100];
    printf("Enter a string: ");
    gets(ar);
    for(int i=0; ar[i]!='\0'; i++)
    {
        if(ar[i]>='A' && ar[i]<='Z')
            ar[i] +=32;
        else if(ar[i]>='a' && ar[i]<='z')
            ar[i] -=32;
    }
    puts(ar);
    return 0;
}

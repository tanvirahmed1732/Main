#include<stdio.h>
int main()
{
    char ar[100];
    printf("Enter a message: ");
    gets(ar);
    for(int i=0; ar[i]!='\0'; i++)
        ar[i] += 5;
    printf("Encrypted message: ");
    for(int j=0; ar[j]!='\0'; j++)
    printf("%c", ar[j]);
    printf("\n");
    for(int i=0; ar[i]!='\0'; i++)
        ar[i] -=5;
    printf("Decrypted message: ");
    for(int j=0; ar[j]!='\0'; j++)
    printf("%c", ar[j]);
    return 0;
}

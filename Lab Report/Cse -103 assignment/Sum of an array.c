#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many numbers you want to sum: ");
    scanf("%d", &n);
    int ar[n];
    printf("Enter the numbers: ");
    for(int i=0; i<n; i++)
        scanf("%d", &ar[i]);
    int sum=0;
    for(int j=0; j<n; j++)
            sum += ar[j];
    printf("Sum of all numbers is: %d", sum);
    return 0;
}

#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    int ar[n];
    for(int i=0; i<n; i++)
        scanf("%d", &ar[i]);
    int max = ar[0], min = ar[0];
    float sum=0;
    for(int j=0; j<n; j++)
    {
        sum += ar[j];
        if(max<ar[j])
            max = ar[j];
        if(min>ar[j])
            min = ar[j];
    }
    float avg = sum/n;
    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);
    printf("Average: %.2f\n", avg);
}

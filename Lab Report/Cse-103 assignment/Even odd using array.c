#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    int ar[n];
    printf("Enter the numbers: ");
    for(int i=0; i<n; i++)
        scanf("%d", &ar[i]);
    int oddArray[n], evenArray[n], o=0, e=0;
    for(int i=0; i<n; i++)
    {
        if (ar[i]%2==0)
        {
            evenArray[e] = ar[i];
            e++;
        }
        else
        {
            oddArray[o] = ar[i];
            o++;
        }
    }
    printf("Even numbers: ");
    for(int k=0; k<e; k++)
        printf("%d ", evenArray[k]);
    printf("\n");
    printf("Odd numbers: ");
    for(int l=0; l<o; l++)
        printf("%d ", oddArray[l]);
    return 0;
}

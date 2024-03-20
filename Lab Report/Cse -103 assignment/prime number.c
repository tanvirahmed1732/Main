#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main()
{
    int n;
    printf("Enter how many numbers:" );
    scanf("%d", &n);
    int ar[n],primeArray[n], x=0;
    printf("Enter the numbers: ");
    for(int i=0; i<n; i++)
        scanf("%d", &ar[i]);
    for(int j=0; j<n; j++)
    {
        bool flag = true;
        if(ar[j]==0 || ar[j]==1)
            flag=false;
        for(int k=2; k <= sqrt(ar[j]); k++)
        {
            if(ar[j]%k==0)
            {
                flag = false;
                break;
            }
        }
        if(flag==true)
        {
            primeArray[x] = ar[j];
            x++;
        }
    }
    printf("Prime numbers: ");
    for(int i =0; i<x; i++)
    {
        printf("%d ", primeArray[i]);
    }
    return 0;
}

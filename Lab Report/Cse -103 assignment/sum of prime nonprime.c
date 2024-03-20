#include<stdio.h>
#include<stdbool.h>
void spnp(int *ar, int n, int *sumofprime, int *sumofnonprime, int *large )
{
    int prime[n], nonprime[n], x=0, y=0;
    for(int j=0; j<n; j++)
    {
        bool flag = true;
        if(*(ar+j)==0 || *(ar+j)==1)
            flag=false;
        for(int k=2; k <= *(ar+j)/2; k++)
        {
            if(*(ar+j)%k==0)
            {
                flag = false;
                break;
            }
        }
        if(flag==true)
        {
            prime[x] = *(ar+j);
            x++;
        }
        else
        {
            nonprime[y]= *(ar+j);
            y++;
        }
    }
    printf("Prime: ");
    for(int k=0; k<x; k++)
        printf("%d ", prime[k]);
        printf("\n");
        printf("Non prime: ");
    for(int l=0; l<y; l++)
        printf("%d ", nonprime[l]);
        printf("\n");
    *sumofprime =0;
    *sumofnonprime=0;
    for(int i=0; i<x; i++)
        *sumofprime += prime[i];
    for(int j=0; j<y; j++)
        *sumofnonprime += nonprime[j];
    if(*sumofprime<*sumofnonprime)
        *large = *sumofnonprime;
    else
        *large = *sumofprime;
}
int main()
{
    int n;
    printf("Enter how many number: ");
    scanf("%d", &n);
    printf("Enter the numbers: ");
    int ar[n];
    for(int i=0; i<n; i++)
        scanf("%d", &ar[i]);
    int sop, sonp, l;
    spnp(ar, n, &sop, &sonp, &l);
    printf("The sum of prime numbers is: %d\n", sop);
    printf("The sum of non prime numbers is: %d\n", sonp);
    if(l==sonp)
        printf("Sum of nonprime is the large.");
    if(l == sop)
        printf("Sum of prime is the large. ");
    return 0;
}

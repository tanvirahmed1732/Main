#include<stdio.h>
char d[20], dv[20], temp[20], total[100];
int i, j,dl, dvl, l, flag =1;
void check( );
int main( )
{
    printf("Enter the length of data: ");
    scanf("%d",&dl);
    printf("\nEnter the length of divisor: ");
    scanf("%d",&dvl);
    l = dl+dvl -1;
    printf("\nSending data: ");
    scanf("%s",&d);
    printf("\nDivisor: ");
    scanf("%s", &dv);
    for(i =0; i<dl; i++)
    {
        total[i]= d[i];
        temp[i]= d[i];
    }
    for( i=dl; i<l; i++)
        total[i] = '0';
    check( );
    for( i =0; i<dvl; i++)
        temp [ i+dl]= d[i];
    printf("\nTransmitted Code:%s", &temp );
    printf("\n\nEnter the received code: ") ;
    scanf("%s", total);
    for( i =0; i<l; i++)
        if (total[i]!=temp[i])
        {
            flag =0;
            break ;
        }
    if( flag ==1)
        printf ("\nAll okay.");
    else
        printf("\nError!!!\n" );
}
void check ( )
{
    for(j =0; j<dvl; j++)
        d[j]= total[j];
    while ( j<=l)
    {
        if (d[0]== '1')
            for ( i = 1 ; i <dvl ; i++)
                d[i] = ((d[i] == dv[i]) ? '1' : '0' ) ;
        for (i =0; i<dvl-1; i++)
            d[i]= d[i +1];
        d[i]= total [j++];
    }
}

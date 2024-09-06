#include<stdio.h>
int main()
{
    float f,d=0;
    scanf("%f", &f);
    int b=f;
    f=f-b;
    int rem,i=0;
    while(b!=0){
        rem = b%10;
        b=b/10;
        if (rem){
            d+=pow(2,i);
        }
        i++;
    }
    int temp,j=-1;
    while(f!=0){
        f*=10;
        temp=f;
        if(temp){
            d+=pow(2,j);
        }
        f-=temp;
        j--;
    }
    printf("%f",d);

}

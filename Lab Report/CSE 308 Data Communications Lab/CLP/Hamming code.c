#include <stdio.h>
#include <math.h>
#include <string.h>

char main_Data[100];
char Encoded_Data[100];

int Odd_parity_Hamming(int a, int b) {
    int r = 0, i, j;
    i = a - 1;
    while (i < b) {
        for (j = i; j < i + a; j++) {
            if (Encoded_Data[j] == '1')
                r++;
        }
        i = i + 2 * a;
    }
    if (r % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int i = 0, G = 0;

    printf("Enter the Data in number: ");
    scanf("%s", main_Data);
    printf("\n");

    G = strlen(main_Data);
    int A;
    int xx = 0;
    for(xx = 0; xx<G;xx++){
        if((int)pow(xx,2)>G+xx+1){
            break;
        }
    }
    A = 2 + G;
    int j, k;
    j = k = 0;
    for (i = 0; i < A; i++) {
        if (i == 0 || i == 1) {
            Encoded_Data[i] = '0';
            k++;
        } else {
            Encoded_Data[i] = main_Data[j];
            j++;
        }
    }
    int x = Odd_parity_Hamming(1, A);
    int y = Odd_parity_Hamming(2, A);
    if(x==0){
    Encoded_Data[0] = '0';
    }
    else{
    Encoded_Data[0] = '1';
    }
    if(y==0){
    Encoded_Data[1] = '0';
    }
    else{
    Encoded_Data[1] = '1';
    }
    Encoded_Data[A] = '\0';

    printf("Data Length: %d \n",G);
    printf("Used Based: %d \n", xx);
    printf("Redundant bit: 2\n");
    printf("Encoded data: %s\n", Encoded_Data);

    return 0;
}


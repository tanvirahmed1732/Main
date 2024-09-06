#include <stdio.h>
#include <math.h>
#include <string.h>

char main_data[100];
char encoded_data[100];

int even_parity_Hamming(int a, int b) {
    int r = 0, i, j;
    i = a - 1;
    while (i < b) {
        for (j = i; j < i + a; j++) {
            if (encoded_data[j] == '1')
                r++;
        }
        i = i + 2 * a;
    }
    if (r % 2 == 1)
        return 1;
    else
        return 0;
}

int main() {
    int i = 0, mlength = 0;

    printf("Enter the Data in number: ");
    scanf("%s", main_data);
    printf("\n");

    mlength = strlen(main_data);
    int length, r = 0;
    while (mlength > (int)pow(2, r) - (r + 1)) {
        r++;
    }
    length = r + mlength;
    int j, k;
    j = k = 0;
    for (i = 0; i < length; i++) {
        if (i == ((int)pow(2, k) - 1)) {
            encoded_data[i] = '0';
            k++;
        } else {
            encoded_data[i] = main_data[j];
            j++;
        }
    }
    for (i = 0; i < r; i++) {
        int x = (int)pow(2, i);
        int y = even_parity_Hamming(x, length);
        if(y==0){
        encoded_data[x-1] = '0';
        }
        else{
        encoded_data[x-1] = '1';
        }
    }
    encoded_data[length] = '\0';

    printf("Encoded data: %s\n", encoded_data);

    return 0;
}

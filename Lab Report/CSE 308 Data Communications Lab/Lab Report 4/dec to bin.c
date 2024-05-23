#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void decimalToBinary(char *ipAddress) {
    int octets[4];
    sscanf(ipAddress, "%d.%d.%d.%d", &octets[0], &octets[1], &octets[2], &octets[3]);

    printf("Binary IP Address: ");
    int j = 3;
    for (int i = 0; i < 4; i++) {
        int d = octets[i],rem,b=0,i=1;
        while(d!=0){
            rem = d%2;
            d = d/2;
            b = b+(rem*i);
            i=i*10;
        }
        printf("%d",b);
        if(j>0)
        printf(".");
        j--;

    }
    printf("\n");
}

int binaryOctetToDecimal(long long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}

int main() {
    char ipAddress[16];
    char binaryAddress[36];

    printf("Enter a dotted decimal IP address: ");
    scanf("%s", ipAddress);
    decimalToBinary(ipAddress);

    printf("Enter a dotted binary IP address: ");
    scanf("%s", binaryAddress);

    char *token = strtok(binaryAddress, ".");
    printf("Decimal IP Address: ");
    while (token != NULL) {
        long long binaryOctet = atoll(token);
        int decimalOctet = binaryOctetToDecimal(binaryOctet);
        printf("%d", decimalOctet);
        token = strtok(NULL, ".");
        if (token != NULL) {
            printf(".");
        }
    }
    printf("\n");

    return 0;
}


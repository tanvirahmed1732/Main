#include <stdio.h>
#include <string.h>
void stuff(char str[100]){
    char st[100];
    int i;
    int j =0;
    for(i =0; str[i] != '\0'; )
    {
        if (str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '1')
        {
            st[j] = '1';
            st[j + 1] = '0';
            st[j + 2] = '1';
            st[j + 3] = '0';
            i += 3;
            j += 4;
        }
        else
        {
            st[j] = str[i];
            i++;
            j++;
        }
    }
    st[j] = '\0';
    printf("Stuffing: %s\n", st);
}

void de_stuff(char str[100]){
    char dst[100];
    int i;
    int j = 0;
    for(i=0; str[i] != '\0';)
    {
        if (str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '1' && str[i + 3] == '0')
        {
            dst[j] = '1';
            dst[j + 1] = '0';
            dst[j + 2] = '1';
            i += 4;
            j += 3;
        }
        else
        {
            dst[j] = str[i];
            i++;
            j++;
        }
    }
    dst[j] = '\0';
    printf("De-stuffing: %s\n", dst);

}

int main()
{
    char choice[1];
    char str[100];
    printf("1: Stuffing."
              "2: De-Stuffing."
              "Enter 1/2:");
    scanf("%s", choice);
    if (choice[0] == '1'){
        printf("Enter Bits for Stuffing: ");
        scanf("%s", str);
        stuff(str);
    }
    else if (choice[0] == '2'){
        printf("Enter Bits for De-Stuffing: ");
        scanf("%s", str);
        de_stuff(str);
    }
    else{
        printf("Wrong input.");
    }
}

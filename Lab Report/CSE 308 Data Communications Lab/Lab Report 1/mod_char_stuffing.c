#include <stdio.h>
void stuff(char str[100]){
    char st[100];
    int i;
    for(i =0; str[i] != '\0'; )
    {
        if (str[i] == 'A' && str[i + 1] == 'B' && str[i + 2] == 'C')
        {
            st[i] = 'C';
            st[i + 1] = 'B';
            st[i + 2] = 'A';
            i += 3;
        }
        else if (str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c')
        {
            st[i] = 'c';
            st[i + 1] = 'b';
            st[i + 2] = 'a';
            i += 3;
        }
        else
        {
            st[i] = str[i];
            i++;
        }
    }
    st[i] = '\0';
    printf("Stuffing: %s\n", st);
}

void de_stuff(char str[100]){
    char dst[100];
    int i;
    for(i=0; str[i] != '\0';)
    {
        if (str[i] == 'C' && str[i + 1] == 'B' && str[i + 2] == 'A')
        {
            dst[i] = 'A';
            dst[i + 1] = 'B';
            dst[i + 2] = 'C';
            i += 3;
        }
        else if (str[i] == 'c' && str[i + 1] == 'b' && str[i + 2] == 'a')
        {
            dst[i] = 'a';
            dst[i + 1] = 'b';
            dst[i + 2] = 'c';
            i += 3;
        }
        else
        {
            dst[i] = str[i];
            i++;
        }
    }
    dst[i] = '\0';
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
        printf("Enter String for Stuffing: ");
        scanf("%s", str);
        stuff(str);
    }
    else if (choice[0] == '2'){
        printf("Enter String for De-Stuffing: ");
        scanf("%s", str);
        de_stuff(str);
    }
    else{
        printf("Wrong input.");
    }
}

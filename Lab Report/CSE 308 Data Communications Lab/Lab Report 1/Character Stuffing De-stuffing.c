#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], st[100], dst[100];
    printf("Enter a string: ");
    scanf("%s", str);
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
    strcpy(dst, st);
    printf("Stuffing: %s\n", st);
    for(int i=0; dst[i] != '\0';)
    {
        if (dst[i] == 'C' && dst[i + 1] == 'B' && dst[i + 2] == 'A')
        {
            str[i] = 'A';
            str[i + 1] = 'B';
            str[i + 2] = 'C';
            i += 3;
        }
        else if (dst[i] == 'c' && dst[i + 1] == 'b' && dst[i + 2] == 'a')
        {
            str[i] = 'a';
            str[i + 1] = 'b';
            str[i + 2] = 'c';
            i += 3;
        }
        else
        {
            str[i] = dst[i];
            i++;
        }
    }
    str[i] = '\0';
    printf("De-stuffing: %s\n", str);
}

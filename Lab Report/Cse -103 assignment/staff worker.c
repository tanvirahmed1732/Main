#include<stdio.h>
struct staff
{
    int id;
    char name[50];
    int msalary;
}staffar[100];

int indx =0;

void add(int n)
{
    printf("Enter id: ");
    scanf("%d", &staffar[n].id);
    fflush(stdin);
    printf("Enter name: ");
    gets(staffar[n].name);
    printf("Enter Monthly salary: ");
    scanf("%d", &staffar[n].msalary);
    fflush(stdin);
}

void display (int x)
{
    for (int i=0; i<x; i++)
    {
        printf("id : %d \n", staffar[i].id);
        printf("Name: %s \n", staffar[i].name);
        printf("Monthly salary: %d \n", staffar[i].msalary);
    }
}

void update()
{
    int y;
    printf("Enter id of staff: ");
    scanf("%d", &y);
    for(int i=0; i<indx; i++)
    {
        if(staffar[i].id == y)
        {
            printf("Enter updated salary: ");
            scanf("%d", &staffar[i].msalary);
            break;
        }
    }
}




int main()
{
    int select;
 do
    {
        printf("Choose a option: \n"
                  "1: Add staff information.\n"
                  "2: Display staff details. \n"
                  "3: Update. \n");
        scanf("%d", &select);
        switch (select)
        {
        case 1:
            add(indx++);
            break;
        case 2:
            display(indx);
            break;
        case 3:
            update();
            break;
        default :
            printf("Wrong option chosen. ");
        }
        printf("If you want to continue press 1 otherwise press 0:   ");
        scanf("%d", &select);
    }
    while (select == 1);
    return 0;
}

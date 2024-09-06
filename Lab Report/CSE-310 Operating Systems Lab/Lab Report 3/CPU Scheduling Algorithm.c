/* SJF CPU Scheduling Algorithm code */
#include<stdio.h>
#include<conio.h>
main()
{
    int p[100], bt[100], wt[100], tat[100], n, pr[100];
    float wtavg, tatavg;

    printf("\n Enter the number of processes: ");
    scanf("%d", &n);
    printf("\n");

    int i;
    for(i=0; i<n; i++)
    {
        p[i]=i+1;
        printf(" Enter Burst Time for Process P%d: ", i+1);
        scanf("%d", &bt[i]);
        printf(" Enter Priority for Process P%d: ", i+1);
        scanf("%d", &pr[i]);
    }

    int j, temp;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(pr[i]>pr[j])
            {
                temp=pr[i];
                pr[i]=pr[j];
                pr[j]=temp;

                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;

                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
            else if(pr[i] == pr[j])
            {
                if(bt[i]>bt[j])
                {
                    temp=bt[i];
                    bt[i]=bt[j];
                    bt[j]=temp;

                    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }
            }
        }
    }

    wt[0] = wtavg = 0;
    tat[0] = tatavg = bt[0];

    for(i=1; i<n; i++)
    {
        wt[i] = tat[i-1];
        tat[i] = wt[i] + bt[i];
        wtavg = wtavg + wt[i];
        tatavg = tatavg + tat[i];
    }

    printf("\n\t PROCESS \tBURST TIME \tPRORITY \t WAITING TIME\t TURNAROUND TIME\n");

    for(i=0; i<n; i++)
    {
        printf("\n\t P%d \t\t %d \t\t %d \t\t %d \t\t %d", p[i], bt[i], pr[i], wt[i], tat[i]);
    }

    printf("\n\n");
    printf("Average Waiting Time: %f \n", wtavg/n);

    printf("\n");
    printf("Average Turnaround Time: %f \n", tatavg/n);
    printf("\n");
}

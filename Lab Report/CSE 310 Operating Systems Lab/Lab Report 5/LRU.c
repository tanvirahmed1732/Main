#include<stdio.h>
int main(){
    int p, f;
    printf("Enter the number of pages: ");
    scanf("%d", &p);

    int pages[p];
    printf("Enter the pages: ");
    for(int i = 0; i < p; i++){
        scanf("%d", &pages[i]);
    }
    printf("Enter the number of frames: ");
    scanf("%d", &f);

    int frames[f];
    int backtrack[f];
    int temp = 0;
    int pagefault = 0;

    printf("Page\t\t Frame1 \t \tFrame2 \t\t Frame3\n");

    for(int i = 0; i < p; i++){
        printf("%d:  \t\t", pages[i]);
        int hit = 0;
        for(int j= 0; j < temp; j++){
            if(pages[i] == frames[j]){
                hit = 1;
                break;
            }
        }
        if(hit==1)
            for(int i = 0; i < temp; i++)
                printf("%d\t\t\t", frames[i]);
        else if(temp < f){
            frames[temp] = pages[i];
            pagefault++;
            temp++;
            for(int i = 0; i < temp; i++)
                printf("%d\t\t\t", frames[i]);
        }
        else {
            int max = 0;
            int md;
            for(int j = 0; j < f; j++){
                backtrack[j] = 0;
                for(int k = i - 1; k >= 0; k--){
                    if(frames[j] == pages[k]){
                        backtrack[j]++;
                        break;
                    }
                    backtrack[j]++;
                }

                if(backtrack[j] > max){
                    max = backtrack[j];
                    md = j;
                }
            }
            frames[md] = pages[i];
            for(int i = 0; i < temp; i++)
                printf("%d\t\t\t", frames[i]);
            pagefault++;
        }

        printf("\n");
    }

    printf("Page Fault: %d\n", pagefault);
    printf("Page Hit: %d", p-pagefault);

    return 0;
}

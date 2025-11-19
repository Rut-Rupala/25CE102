#include<stdio.h>

void main(){
    int seat[5][10] = {0};
    int num;
    printf("Rut Rupala, 25CE102!\n");
    printf("Enter Number of seats you want to reaserved : ");
    scanf("%d",&num);
    printf("-----------------------------------------------------------------\n");
    for (int i = 0; i < num; i++)
    {
        int seatN,RowN;
        printf("Enter Row and Seat You want : ");
        scanf("%d %d",&RowN ,&seatN);
        for (int k = 0; k < 5; k++)
        {   
            for(int j = 0; j < 10; j++){
                if (k == RowN-1 && j == seatN-1)
                {
                    seat[i][j] = 1;
                }
            }
        }
    }
    printf("-----------------------------------------------------------------\n");
    for (int i = 0; i < 5; i++)
    {   
        printf("Row %d : ",i+1);
        for(int j =0; j< 10; j++){
            if (seat[i][j] == 1)
            {
                printf(" X ");
            }
            else{
                printf(" O ");
            }
        }
        printf("\n");
    }
    
    
}
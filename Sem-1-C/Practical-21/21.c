#include<stdio.h>

int main(){
    int arr[25];
    int CP = 0;
    int CN = 0;
    int CE = 0;
    int CO = 0;

    for (int i = 0; i < 25; i++)
    {
        printf("Enter Value of arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < 25; i++)
    {
        if (arr[i]>=0)
        {
          CP++;  
        }
        if (arr[i]<0)
        {
          CN++;  
        }
        if (arr[i]%2 == 0)
        {
          CE++;  
        }
        if (arr[i]%2 != 0)
        {
          CO++;  
        }
        
    }
    printf("-----------------------------\n");
    printf("Positive Number : %d\n",CP);
    printf("Negtive Number : %d\n",CN);
    printf("Even Number : %d\n",CE);
    printf("Odd Number : %d\n",CO);
    
}
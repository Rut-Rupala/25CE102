#include<stdio.h>

void main(){
    
    int attendedId[9];
    int Sum = 0;
    int size;
    
    printf("Enter Size : ");
    scanf("%d",&size);
    
    int expectedSum = size*(size+1)/2;
    for (int i = 0; i < size-1; i++)
    {
        printf("Enter Id : ");
        scanf("%d",&attendedId[i]);
        Sum += attendedId[i];
    }
    printf("Missing Id : %d", expectedSum - Sum );
    
}

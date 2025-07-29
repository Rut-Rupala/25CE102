#include<stdio.h>

void main(){

    float InputTempt, OutputTempt;
    int option;

    printf("Welcome to Tempt Convertor Choose option to convert :\n ");
    printf("Enter Temp in C or F : ");
    scanf("%f",&InputTempt);
    printf("\nNow Choose Convert method \n 1 for C->F \n 2 for F->c \n Choose : ");
    scanf("%d",&option);
    if (option == 1)
    {
        OutputTempt = (InputTempt*9/5) + 32;
        printf("Result : %.2f F",OutputTempt);
    }else
    {
        OutputTempt = (InputTempt-32)*5/9;
        printf("Result : %.2f C",OutputTempt);
    }
    
    

}
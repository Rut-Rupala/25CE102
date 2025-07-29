#include<stdio.h>

void main(){

    float InputTempt, OutputTempt;
    int option;
    char unit;

    printf("Welcome to Tempt Convertor Choose option to convert :\n ");
    printf("Enter Temp in with unit: ");
    scanf("%f%c",&InputTempt,&unit);
    printf("\nNow Choose Convert method \n 1 for C->F \n 2 for F->c \n Choose : ");
    scanf("%d",&option);
    if (option == 1)
    {
        OutputTempt = (InputTempt*9/5) + 32;
        printf("Result : %.2f F",OutputTempt);
    }else if(option == 2)
    {
        OutputTempt = (InputTempt-32)*5/9;
        printf("Result : %.2f C",OutputTempt);
    }else
    {
     printf("Invalid Input Type.");
    }
}
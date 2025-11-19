#include<stdio.h>

void main(){

    float InputTempt, OutputTempt;
    char unit;
    printf("Rut Rupala, 25CE102!\n");
    printf("Welcome to Tempt Convertor :\n ");
    printf("Enter Temp in with unit: ");
    scanf("%f%c",&InputTempt,&unit);

    if (unit == 'c' || unit == 'C')
    {
        OutputTempt = (InputTempt*9/5) + 32;
        printf("Result : %.2f F",OutputTempt);
    }else if(unit == 'F' || unit == 'f' )
    {
        OutputTempt = (InputTempt-32)*5/9;
        printf("Result : %.2f C",OutputTempt);
    }else
    {
     printf("Invalid Input Type.");
    }
    printf("\nThanks for Using it. :)");
}
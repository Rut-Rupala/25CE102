#include<stdio.h>

int main(){
    const int Ticket = 200;
    const int boundaryAge = 12;
    int age,Num;
    int totalPrice=0;

    printf("Please Enter Number of Person in Group : ");
    scanf("%d",&Num);

    for (int i = 0; i < Num; i++)
    {
    
    printf("\nEnter Age : ");
    scanf("%d",&age);
    printf("\n");
    if ( age > 0 && age<=120)
    {   
        if (age<=boundaryAge) printf("\nEligable For Free Ticket.");
        else{
            printf("\nTicket : %d",Ticket);
            totalPrice += Ticket;
        }
    }else printf("Invalid Input.");
    
    }
    printf("\nTotal Ticket : %d",totalPrice);


    return 0;
}
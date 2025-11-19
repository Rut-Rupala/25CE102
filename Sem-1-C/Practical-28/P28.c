#include<stdio.h>
struct Book
{
    char title[50];
    char author[50];
    float price;
    int issued;
};


int main(){
    printf("Rut Rupala, 25CE102!\n");
    struct Book B1;
    printf("Enter Book Title : ");
    fgets(B1.title,50,stdin);
    printf("Enter Author Name : ");
    fgets(B1.author,50,stdin);
    printf("Enter Price : ");
    scanf("%f",&B1.price);
    printf("Is Book Issued(0 or 1) : ");
    scanf("%d",&B1.issued);
    printf("\n");
    printf("Title  : %s",B1.title);
    printf("Author : %s",B1.author);
    printf("Price  : %.2f\n",B1.price);
    printf("Issued : %d\n",B1.issued);
}
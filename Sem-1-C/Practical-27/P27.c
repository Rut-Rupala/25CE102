#include<stdio.h>

int saving(int n,int b){
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return b;
    }
    return saving(n-1,b) + saving(n-2,b);
    
    
}

void main(){
    int n;
    int b;
    printf("Enter Month : ");
    scanf("%d",&n);
    printf("Enter first month saving : ");
    scanf("%d",&b);
    for (int i = 1; i <= n ; i++)
    {
        printf("month %2d saving : %d\n",i,saving(i,b));
    }
    
}
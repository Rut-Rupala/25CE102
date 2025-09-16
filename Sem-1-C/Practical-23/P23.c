#include<stdio.h>

int max(int a, int b);
int min(int a, int b);
void main(){
    int fruitPrice[] = {30, 20, 25, 40, 25, 50, 35};
    int maxProfit = 0;
    int maxSell = 0;
    int minBuy = 1000000;
    int buyPrice = 0;
    int size = 6;
    for (int i = 0; i < size; i++)
    {
        buyPrice = fruitPrice[i];
        maxSell = max(buyPrice,fruitPrice[i +1]);
        minBuy = min(buyPrice , minBuy);
    }
    maxProfit = maxSell - minBuy;
    printf("%d\n",maxProfit);
}

int max(int a , int b){
    if (a == b)
    {
        return a;
    }
    
    if (a > b)
    {
        return a;
    }
    else{
        return b;
    }
    
}
int min(int a , int b){
    if (a == b)
    {
        return a;
    }
    
    if (a < b)
    {
        return a;
    }
    else{
        return b;
    }
    
}
#include<stdio.h>
#include<math.h>

int validTri(int a,int b,int c){
    if (a<0||b<0||c<0)
    {
        return -1;
    }
    
    if ((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int TriaArea(int a,int b,int c){
    int isValid = validTri(a,b,c);
    double s;
    double A;
    if (isValid == -1)
    {
        printf("Enter valid value.");
    }
    else if (isValid == 1)
    {
        s = (a + b + c)/2;
        A = (s*(s-a)) *(s-b)*(s-c); 
        A = sqrt(A);

        return A;
    }else{
        printf("This sides don't form valid triangle.");
    }
    return 0;
}
void main(){
    double Area = TriaArea(3,4,5);
    printf("Area : %.2f",Area);
}
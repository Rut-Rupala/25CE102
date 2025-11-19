#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(){
    printf("Rut Rupala, 25CE102!\n");
    printf("Size of Int : %zu",sizeof(int));
    printf("\nSize of Char : %zu",sizeof(char));
    printf("\nSize of float : %zu",sizeof(float));
    printf("\nSize of long : %zu",sizeof(long));
    printf("\nSize of double : %zu",sizeof(double));
    printf("\nMaximum Value of Long : %lu",LONG_MAX);
    printf("\nMinimum Value of Long : %lu",LONG_MIN);
    printf("\nMaximum Value of char : %d",CHAR_MAX);
    printf("\nMinium Value of char : %d",CHAR_MIN);
    printf("\nMaximum Value of Long Long : %llu",LLONG_MAX);
    printf("\nMinimum Value of Long Long : %llu",LLONG_MIN);
    printf("\nMaximum Value of Float : %e",FLT_MAX);
    printf("\nMinimum Value of Float : %e",FLT_MIN);
    printf("\nMaximum Value of Float : %Le",LDBL_MAX);
    printf("\nMinimum Value of Float : %Le",LDBL_MIN);
    printf("\nMaximum of Unsigned Int : %u",UINT_MAX);
    printf("\nMaximum Value of Unsigned Long : %lu",ULONG_MAX);
    printf("\nMaximum Value of Unsigned Long Long : %llu",ULLONG_MAX);
    printf("\nMaximum Value of Unsigned Char : %u",UCHAR_MAX);

    return 0;
}
#include <stdio.h>

int main() {
    int i, j, k, n;

    // (i) Alternating 1 0 triangle
    printf("Rut Rupala, 25CE102!\n");
    n = 5;  // rows
    printf("(i) Alternating 1 0 Triangle\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
    printf("\n");

    n =5;
    printf("(ii)\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n*2 -1; j++)
        {
            if (i == 1)
            {
                printf(" %d",j);
            }
            else if (j == i || j == n*2 -i)
            {
                printf(" %d",j);
            }
            else{
                printf("  ");
            }
            
        }
        
        printf("\n");        
    }
    printf("\n");
    // (iii) Diamond with numbers
    n = 5;  // size
    printf("(iii) Diamond Numbers\n");
    for (i = n; i >= 1; i--) {
        for (j = n; j >= i; j--)
            printf("  ");
        for (j = i; j >= 1; j--)
            printf("%d ", j);
        for (j = 2; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    for (i = 2; i <= n; i++) {
        for (j = n; j >= i; j--)
            printf("  ");
        for (j = i; j >= 1; j--)
            printf("%d ", j);
        for (j = 2; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    printf("\n");

    // (iv) Alphabet Pyramid
    n = 5;  // rows
    printf("(iv) Alphabet Pyramid\n");
    for (int i = 1; i <= n; i++)
    {   
        char alpha = 'A';
        for (int s = n; s >= i; s--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c",alpha);
            alpha++;
        }
        for (int j = 2; j <= i; j++)
        {
            alpha = 'A'+i-j;
            printf("%c",alpha);
        }
        printf("\n");    
    }
    for (int i = 1; i <= n; i++)
    {
        char alpha = 'A';
        for (int s = 0; s<=i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n- i; j++)
        {
            printf("%c",alpha++);
        }
        alpha--;
        for (int j = 1; j <= n-i -1; j++)
        {
            printf("%c",--alpha);
        }
        
        printf("\n");  
    }
    
    return 0;
}

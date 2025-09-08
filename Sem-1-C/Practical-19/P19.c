#include <stdio.h>

int main() {
    int i, j, k, n;

    // (i) Alternating 1 0 triangle
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

    // (ii) Hourglass / X-shape numbers
    n = 9;  // width
    printf("(ii) X-shape Numbers\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == i || j == (n - i + 1))
                printf("%d ", j);
            else
                printf("  ");
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
    n = 4;  // rows
    printf("(iv) Alphabet Pyramid\n");
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("%c", 'A' + j - 1);
        for (j = i - 1; j >= 1; j--)
            printf("%c", 'A' + j - 1);
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (j = i; j < n; j++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("%c", 'A' + j - 1);
        for (j = i - 1; j >= 1; j--)
            printf("%c", 'A' + j - 1);
        printf("\n");
    }

    return 0;
}

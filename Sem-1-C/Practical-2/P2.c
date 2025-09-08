#include <stdio.h>

int main() {
    int n, i;
    float length, breadth, area, perimeter;
    float fencingRate, grassRate;

    printf("Enter number of parks: ");
    scanf("%d", &n);

    printf("Enter fencing rate per meter: ");
    scanf("%f", &fencingRate);

    printf("Enter grass laying rate per square meter: ");
    scanf("%f", &grassRate);

    for (i = 1; i <= n; i++) {
        printf("\n--- Park %d ---\n", i);
        printf("Enter length (m): ");
        scanf("%f", &length);
        printf("Enter breadth (m): ");
        scanf("%f", &breadth);

        if (length <= 0 || breadth <= 0) {
            printf("Invalid dimensions! Length and breadth must be positive.\n");
            continue;
        }

        area = length * breadth;
        perimeter = 2 * (length + breadth);

        printf("Area = %.2f sq.m\n", area);
        printf("Perimeter = %.2f m\n", perimeter);
        printf("Fencing Cost = %.2f\n", perimeter * fencingRate);
        printf("Grass Laying Cost = %.2f\n", area * grassRate);
    }

    return 0;
}

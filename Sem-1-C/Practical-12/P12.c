#include <stdio.h>

int main() {
    int start = 1, end = 50;
    printf("Rut Rupala, 25CE102!\n");
    printf("===== Library Catalog =====\n\n");

    for (int id = start; id <= end; id++) {
        if (id % 5 == 0)
            printf("Book ID: %d (Special Edition)\n", id);
        else
            printf("Book ID: %d\n", id);
    }

    return 0;
}

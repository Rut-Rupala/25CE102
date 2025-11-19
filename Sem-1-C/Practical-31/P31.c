#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *summary;
    int initial_size, new_size;
    printf("Rut Rupala, 25CE102!\n");

    printf("Enter initial summary size: ");
    scanf("%d", &initial_size);
    getchar(); 
    
    summary = (char *)calloc(initial_size, sizeof(char));
    if (summary == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter initial summary: ");
    fgets(summary, initial_size, stdin);
    summary[strcspn(summary, "\n")] = '\0'; 

    printf("\nInitial Summary: %s\n", summary);

    printf("\nEnter new summary size (larger than before): ");
    scanf("%d", &new_size);
    getchar();

    char *temp = realloc(summary, new_size * sizeof(char));
    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        free(summary);
        return 1;
    }

    summary = temp;

    printf("Enter updated (longer) summary: ");
    fgets(summary, new_size, stdin);
    summary[strcspn(summary, "\n")] = '\0';

    printf("\nUpdated Summary: %s\n", summary);

    free(summary);
    printf("\nMemory freed successfully.\n");

    return 0;
}

#include <stdio.h>

int main() {
    float marks;
    char grade;

    printf("Enter marks (0–100): ");
    if (scanf("%f", &marks) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 0;
    }

    // Validate range
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Must be between 0 and 100.\n");
        return 0;
    }

    // Ternary operator chain
    grade = (marks >= 90) ? 'A' :
            (marks >= 80) ? 'B' :
            (marks >= 70) ? 'C' :
            (marks >= 60) ? 'D' : 'F';

    printf("Marks: %.2f -> Grade: %c\n", marks, grade);

    return 0;
}

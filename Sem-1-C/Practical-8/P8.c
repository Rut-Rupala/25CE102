#include <stdio.h>

int main() {
    int choice;
    int age;

    do {
        printf("Rut Rupala, 25CE102!\n");
        printf("\n===== Spark Savings Bank Eligibility Checker =====\n");
        printf("1. Check Eligibility\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter age: ");
            if (scanf("%d", &age) != 1) {
                // Clear invalid input
                while (getchar() != '\n');
                printf("Invalid input! Please enter a valid number.\n");
                continue;
            }

            if (age < 0) {
                printf("Invalid age! Age cannot be negative.\n");
            } else if (age < 18) {
                printf("Sorry, you are not eligible to open a savings account yet.\n");
            } else if (age < 60) {
                printf("Congratulations! You are eligible for a Regular Savings Account.\n");
            } else {
                printf("Great! You are eligible for a Senior Citizen Savings Account.\n");
            }
        } 
        else if (choice != 2) {
            printf("Invalid choice! Please select 1 or 2.\n");
        }

    } while (choice != 2);

    printf("\nThank you for visiting Spark Savings Bank!\n");
    return 0;
}

#include <stdio.h>

int main() {
    int balance = 5000;   // starting balance
    int choice, amount;

    printf("===== Welcome to National Bank of Bharat ATM =====\n");
    printf("Your starting balance: ₹%d\n\n", balance);

    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Withdraw\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 2) {
            printf("Thank you for using the ATM. Goodbye!\n");
            break;
        } 
        else if (choice == 1) {
            printf("Enter withdrawal amount: ₹");
            scanf("%d", &amount);

            if (amount <= 0) {
                printf("Invalid amount! Please enter a positive value.\n");
            }
            else if (amount > balance) {
                printf("Insufficient balance. Your current balance is ₹%d\n", balance);
            }
            else {
                balance -= amount;
                printf("Transaction successful! Withdrawn: ₹%d\n", amount);
                printf("Remaining Balance: ₹%d\n", balance);
            }
        } 
        else {
            printf("Invalid choice! Please select again.\n");
        }
    }

    return 0;
}

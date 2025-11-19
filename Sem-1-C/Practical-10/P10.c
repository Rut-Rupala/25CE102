#include <stdio.h>

int main() {
    int choice, qty;
    float total = 0;
    int burger = 0, pizza = 0, pasta = 0, sandwich = 0, fries = 0;
    printf("Rut Rupala, 25CE102!\n");
    printf("===== Welcome to Foodies Restaurant =====\n");
    printf("Menu:\n");
    printf("1. Burger       - ₹150\n");
    printf("2. Pizza        - ₹200\n");
    printf("3. Pasta        - ₹120\n");
    printf("4. Sandwich     - ₹100\n");
    printf("5. French Fries - ₹80\n");
    printf("Enter 0 to finish ordering.\n");

    do {
        printf("\nEnter item number (0 to finish): ");
        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n'); // clear invalid input
            printf("Invalid input! Please enter a valid menu number.\n");
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter quantity of Burger: ");
                scanf("%d", &qty);
                if (qty > 0) {
                    burger += qty;
                    total += qty * 150;
                }
                break;
            case 2:
                printf("Enter quantity of Pizza: ");
                scanf("%d", &qty);
                if (qty > 0) {
                    pizza += qty;
                    total += qty * 200;
                }
                break;
            case 3:
                printf("Enter quantity of Pasta: ");
                scanf("%d", &qty);
                if (qty > 0) {
                    pasta += qty;
                    total += qty * 120;
                }
                break;
            case 4:
                printf("Enter quantity of Sandwich: ");
                scanf("%d", &qty);
                if (qty > 0) {
                    sandwich += qty;
                    total += qty * 100;
                }
                break;
            case 5:
                printf("Enter quantity of French Fries: ");
                scanf("%d", &qty);
                if (qty > 0) {
                    fries += qty;
                    total += qty * 80;
                }
                break;
            case 0:
                printf("\nFinalizing order...\n");
                break;
            default:
                printf("Invalid choice! Please select from menu options.\n");
        }
    } while (choice != 0);

    // Apply discount if eligible
    float discount = 0;
    if (total > 500) {
        discount = total * 0.10; // 10% discount
        total -= discount;
    }

    // Print summary
    printf("\n===== Order Summary =====\n");
    if (burger > 0)   printf("Burger       x %d = ₹%d\n", burger, burger * 150);
    if (pizza > 0)    printf("Pizza        x %d = ₹%d\n", pizza, pizza * 200);
    if (pasta > 0)    printf("Pasta        x %d = ₹%d\n", pasta, pasta * 120);
    if (sandwich > 0) printf("Sandwich     x %d = ₹%d\n", sandwich, sandwich * 100);
    if (fries > 0)    printf("French Fries x %d = ₹%d\n", fries, fries * 80);

    if (discount > 0)
        printf("Discount Applied: -₹%.2f\n", discount);

    printf("Total Amount Payable: ₹%.2f\n", total);
    printf("============================\n");
    printf("Thank you for dining at Foodies!\n");

    return 0;
}

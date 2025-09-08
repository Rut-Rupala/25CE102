#include <stdio.h>
#include <string.h>

int main() {
    int n, isMember;
    float amount, discountRate, discount, finalAmount, gst, totalPayable;
    char promoCode[20];

    printf("Enter number of customers to process: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("\n===== Customer %d Checkout =====\n", i);

        // Get shopping amount
        printf("Enter total shopping amount (₹): ");
        scanf("%f", &amount);

        // Tiered discount
        if (amount < 1000) {
            discountRate = 0.0;
        } else if (amount <= 5000) {
            discountRate = 0.10;  // 10%
        } else {
            discountRate = 0.20;  // 20%
        }

        discount = amount * discountRate;
        finalAmount = amount - discount;

        // Membership check
        printf("Is the customer a registered member? (1=Yes, 0=No): ");
        scanf("%d", &isMember);
        if (isMember == 1) {
            finalAmount -= (finalAmount * 0.05);  // Extra 5% discount
            printf("Extra 5%% member discount applied.\n");
        }

        // Promo code check
        printf("Enter promo code (or type NONE): ");
        scanf("%s", promoCode);

        if (strcmp(promoCode, "FESTIVE10") == 0) {
            finalAmount -= (finalAmount * 0.10);
            printf("Promo code FESTIVE10 applied! Extra 10%% off.\n");
        } else if (strcmp(promoCode, "NONE") != 0) {
            printf("Invalid promo code. No extra discount applied.\n");
        }

        // Apply 5% GST
        gst = finalAmount * 0.05;
        totalPayable = finalAmount + gst;

        // Print bill summary
        printf("\n--- Bill Summary ---\n");
        printf("Original Amount   : ₹%.2f\n", amount);
        printf("Discount Applied  : ₹%.2f\n", discount);
        printf("Amount After Disc.: ₹%.2f\n", finalAmount);
        printf("GST (5%%)          : ₹%.2f\n", gst);
        printf("Total Payable     : ₹%.2f\n", totalPayable);
        printf("----------------------------\n");
    }

    printf("\nAll customer bills processed successfully!\n");
    return 0;
}

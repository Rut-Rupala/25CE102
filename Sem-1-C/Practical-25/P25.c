#include <stdio.h>
#include <string.h>

// UDFs
int checkAvailability(char books[][50], int available[], int n, char title[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i], title) == 0) {
            return available[i];  // 1 = available, 0 = borrowed
        }
    }
    return -1; // not found
}

void borrowBook(char books[][50], int available[], int n, char title[]) {
    int status = checkAvailability(books, available, n, title);
    if (status == 1) {
        for (int i = 0; i < n; i++) {
            if (strcmp(books[i], title) == 0) {
                available[i] = 0;
                printf("Book borrowed: %s\n", books[i]);
                return;
            }
        }
    } else if (status == 0) {
        printf("Book already borrowed!\n");
    } else {
        printf("Book not found!\n");
    }
}

void returnBook(char books[][50], int available[], int n, char title[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i], title) == 0) {
            available[i] = 1;
            printf("Book returned: %s\n", books[i]);
            return;
        }
    }
    printf("Book not found!\n");
}

float calculateFine(int daysLate) {
    if (daysLate < 0) return 0;  
    return daysLate * 2.0;  // ₹2 per day
}

void displayBooks(char books[][50], int available[], int n) {
    printf("\nLibrary Inventory:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %s\n", books[i], available[i] ? "Available" : "Borrowed");
    }
    printf("\n");
}

// Main function
int main() {
    printf("Rut Rupala, 25CE102!\n");
    char books[5][50] = {"C Programming", "Data Structures", "Algorithms", "DBMS", "AI Basics"};
    int available[5] = {1, 1, 1, 1, 1};  // all available
    int n = 5;

    int choice, days;
    char title[50];

    while (1) {
        printf("\n=== Library Menu ===\n");
        printf("1. Display Books\n");
        printf("2. Borrow Book\n");
        printf("3. Return Book\n");
        printf("4. Check Availability\n");
        printf("5. Calculate Fine\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        switch (choice) {
            case 1:
                displayBooks(books, available, n);
                break;
            case 2:
                printf("Enter book title: ");
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = 0; // remove newline
                borrowBook(books, available, n, title);
                break;
            case 3:
                printf("Enter book title: ");
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = 0;
                returnBook(books, available, n, title);
                break;
            case 4:
                printf("Enter book title: ");
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = 0;
                int status = checkAvailability(books, available, n, title);
                if (status == 1) printf("Book is available.\n");
                else if (status == 0) printf("Book is borrowed.\n");
                else printf("Book not found.\n");
                break;
            case 5:
                printf("Enter days late: ");
                scanf("%d", &days);
                printf("Fine: ₹%.2f\n", calculateFine(days));
                break;
            case 6:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}

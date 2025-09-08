#include <stdio.h>
#include <windows.h>  // for Sleep()

int main() {
    int seconds, choice;

    do {
        printf("Enter starting number of seconds: ");
        scanf("%d", &seconds);

        if (seconds < 0) {
            printf("Invalid input! Please enter a non-negative value.\n");
        } else {
            while (seconds >= 0) {
                // format output as MM:SS
                printf("Time left: %02d:%02d\n", seconds / 60, seconds % 60);
                Sleep(1000);   // 1000 ms = 1 second
                seconds--;
            }
            printf("Countdown completed!\n");
        }

        printf("\nDo you want to start another countdown? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("Exiting program. Goodbye!\n");
    return 0;
}

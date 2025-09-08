#include <stdio.h>

int main() {
    int matchsticks = 21;
    int user_pick, comp_pick;

    printf("Welcome to the 21 Matchstick Game!\n");
    printf("Rules: You can pick 1 to 4 matchsticks on your turn.\n");
    printf("Whoever is forced to pick the LAST matchstick loses.\n\n");

    while (matchsticks > 1) {
        // User's turn
        printf("Matchsticks remaining: %d\n", matchsticks);
        printf("Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user_pick);

        // Validate input
        if (user_pick < 1 || user_pick > 4) {
            printf("Invalid move! You must pick between 1 and 4 matchsticks.\n");
            continue; // ask again
        }

        matchsticks -= user_pick;

        // Check if user lost
        if (matchsticks == 1) {
            printf("Only 1 matchstick left!\n");
            printf("You are forced to pick it. YOU LOSE!\n");
            break;
        }

        // Computer's turn (strategic move)
        comp_pick = 5 - user_pick;
        matchsticks -= comp_pick;

        printf("Computer picks %d matchstick(s).\n", comp_pick);

        // Check if computer lost (should never happen with this strategy)
        if (matchsticks == 1) {
            printf("Only 1 matchstick left!\n");
            printf("Computer is forced to pick it. YOU WIN!\n");
            break;
        }
    }

    printf("\nGame Over.\n");
    return 0;
}

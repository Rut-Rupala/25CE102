#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 50

// Sub-structure for Coach
struct Coach {
    char name[50];
    int age;
    int experience;
};

// Main structure for Team (with nested Coach)
struct Team {
    char teamName[50];
    char sportType[50];
    struct Coach coach;
};

int main() {
    struct Team teams[MAX_TEAMS];
    int count = 0;
    int choice;
    int i;
    char searchName[50];
    int found;

    do {
        printf("\n===== CHARUSAT Sports Management System =====\n");
        printf("1. Add New Team\n");
        printf("2. Search Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline from input buffer

        if (choice == 1) {
            if (count >= MAX_TEAMS) {
                printf("No more space to add teams.\n");
            } else {
                struct Team t;
                int duplicate = 0;

                printf("Enter Team Name: ");
                fgets(t.teamName, sizeof(t.teamName), stdin);
                t.teamName[strcspn(t.teamName, "\n")] = '\0';

                // Check duplicate
                for (i = 0; i < count; i++) {
                    if (strcmp(teams[i].teamName, t.teamName) == 0) {
                        duplicate = 1;
                        break;
                    }
                }

                if (duplicate) {
                    printf("Team already exists!\n");
                } else {
                    printf("Enter Sport Type: ");
                    fgets(t.sportType, sizeof(t.sportType), stdin);
                    t.sportType[strcspn(t.sportType, "\n")] = '\0';

                    printf("Enter Coach Name: ");
                    fgets(t.coach.name, sizeof(t.coach.name), stdin);
                    t.coach.name[strcspn(t.coach.name, "\n")] = '\0';

                    printf("Enter Coach Age: ");
                    scanf("%d", &t.coach.age);
                    printf("Enter Coach Experience (in years): ");
                    scanf("%d", &t.coach.experience);
                    getchar(); // clear newline

                    teams[count] = t;
                    count++;
                    printf("Team added successfully!\n");
                }
            }
        }

        else if (choice == 2) {
            if (count == 0) {
                printf("No teams to search.\n");
            } else {
                printf("Enter Team Name or Sport Type to Search: ");
                fgets(searchName, sizeof(searchName), stdin);
                searchName[strcspn(searchName, "\n")] = '\0';
                found = 0;

                for (i = 0; i < count; i++) {
                    if (strcmp(teams[i].teamName, searchName) == 0 ||
                        strcmp(teams[i].sportType, searchName) == 0) {
                        printf("\nTeam Found:\n");
                        printf("Team Name: %s\n", teams[i].teamName);
                        printf("Sport Type: %s\n", teams[i].sportType);
                        printf("Coach Name: %s\n", teams[i].coach.name);
                        printf("Coach Age: %d\n", teams[i].coach.age);
                        printf("Coach Experience: %d years\n", teams[i].coach.experience);
                        found = 1;
                    }
                }

                if (!found) {
                    printf("No matching team found.\n");
                }
            }
        }

        else if (choice == 3) {
            if (count == 0) {
                printf("No teams to display.\n");
            } else {
                printf("\n=== All Teams ===\n");
                for (i = 0; i < count; i++) {
                    printf("\nTeam %d:\n", i + 1);
                    printf("Team Name: %s\n", teams[i].teamName);
                    printf("Sport Type: %s\n", teams[i].sportType);
                    printf("Coach Name: %s\n", teams[i].coach.name);
                    printf("Coach Age: %d\n", teams[i].coach.age);
                    printf("Coach Experience: %d years\n", teams[i].coach.experience);
                }
            }
        }

        else if (choice == 4) {
            printf("Exiting program...\n");
        }

        else {
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}

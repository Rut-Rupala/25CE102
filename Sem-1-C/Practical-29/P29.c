#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 100

// Nested structure: Coach within Team
struct Coach {
    char name[50];
    int age;
    int experience;
};

struct Team {
    char teamName[50];
    char sportType[50];
    struct Coach coach; // Nested structure
};

// Function declarations
void addTeam(struct Team teams[], int *count);
void displayTeams(struct Team teams[], int count);
void searchTeam(struct Team teams[], int count);
int isDuplicate(struct Team teams[], int count, char teamName[]);

int main() {
    struct Team teams[MAX_TEAMS];
    int count = 0;
    int choice;

    while (1) {
        printf("\n===== CHARUSAT Sports Management System =====\n");
        printf("1. Add New Team\n");
        printf("2. Search Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {
            case 1:
                addTeam(teams, &count);
                break;
            case 2:
                searchTeam(teams, count);
                break;
            case 3:
                displayTeams(teams, count);
                break;
            case 4:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Add new team with coach details
void addTeam(struct Team teams[], int *count) {
    if (*count >= MAX_TEAMS) {
        printf("Team list is full!\n");
        return;
    }

    struct Team newTeam;

    printf("Enter Team Name: ");
    fgets(newTeam.teamName, sizeof(newTeam.teamName), stdin);
    newTeam.teamName[strcspn(newTeam.teamName, "\n")] = '\0'; // remove newline

    // Check for duplicate team name
    if (isDuplicate(teams, *count, newTeam.teamName)) {
        printf("Error: Team with this name already exists!\n");
        return;
    }

    printf("Enter Sport Type: ");
    fgets(newTeam.sportType, sizeof(newTeam.sportType), stdin);
    newTeam.sportType[strcspn(newTeam.sportType, "\n")] = '\0';

    printf("Enter Coach Name: ");
    fgets(newTeam.coach.name, sizeof(newTeam.coach.name), stdin);
    newTeam.coach.name[strcspn(newTeam.coach.name, "\n")] = '\0';

    printf("Enter Coach Age: ");
    scanf("%d", &newTeam.coach.age);
    printf("Enter Coach Experience (in years): ");
    scanf("%d", &newTeam.coach.experience);
    getchar(); // clear newline

    teams[*count] = newTeam;
    (*count)++;

    printf("Team added successfully!\n");
}

// Prevent duplicate team names
int isDuplicate(struct Team teams[], int count, char teamName[]) {
    for (int i = 0; i < count; i++) {
        if (strcasecmp(teams[i].teamName, teamName) == 0)
            return 1;
    }
    return 0;
}

// Search for team by name or sport
void searchTeam(struct Team teams[], int count) {
    if (count == 0) {
        printf("No teams available to search.\n");
        return;
    }

    char keyword[50];
    int found = 0;
    printf("Enter Team Name or Sport to search: ");
    fgets(keyword, sizeof(keyword), stdin);
    keyword[strcspn(keyword, "\n")] = '\0';

    printf("\n=== Search Results ===\n");
    for (int i = 0; i < count; i++) {
        if (strcasecmp(teams[i].teamName, keyword) == 0 ||
            strcasecmp(teams[i].sportType, keyword) == 0) {
            printf("Team Name: %s\n", teams[i].teamName);
            printf("Sport Type: %s\n", teams[i].sportType);
            printf("Coach Name: %s\n", teams[i].coach.name);
            printf("Coach Age: %d\n", teams[i].coach.age);
            printf("Coach Experience: %d years\n", teams[i].coach.experience);
            printf("-------------------------\n");
            found = 1;
        }
    }

    if (!found)
        printf("No matching team found.\n");
}

// Display all teams
void displayTeams(struct Team teams[], int count) {
    if (count == 0) {
        printf("No teams to display.\n");
        return;
    }

    printf("\n=== All Teams and Coach Details ===\n");
    for (int i = 0; i < count; i++) {
        printf("\nTeam %d:\n", i + 1);
        printf("Team Name: %s\n", teams[i].teamName);
        printf("Sport Type: %s\n", teams[i].sportType);
        printf("Coach Name: %s\n", teams[i].coach.name);
        printf("Coach Age: %d\n", teams[i].coach.age);
        printf("Coach Experience: %d years\n", teams[i].coach.experience);
    }
}

#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 100

struct Coach {
    char name[50];
    int age;
    int experience;
};

struct Team {
    char team_name[50];
    char sport_type[50];
    struct Coach coach;
};

int main() {
    struct Team teams[MAX_TEAMS];
    int num_teams = 0;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add Team\n");
        printf("2. Search Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (num_teams == MAX_TEAMS) {
                    printf("Maximum number of teams reached.\n");
                    break;
                }

                printf("\nEnter team details:\n");
                printf("Team Name: ");
                scanf("%s", teams[num_teams].team_name);
                printf("Sport Type: ");
                scanf("%s", teams[num_teams].sport_type);

                printf("\nEnter coach details:\n");
                printf("Coach Name: ");
                scanf("%s", teams[num_teams].coach.name);
                printf("Coach Age: ");
                scanf("%d", &teams[num_teams].coach.age);
                printf("Coach Experience (years): ");
                scanf("%d", &teams[num_teams].coach.experience);

                num_teams++;
                break;

            case 2:
                if (num_teams == 0) {
                    printf("No teams added yet.\n");
                    break;
                }

                printf("\nEnter team name to search: ");
                char search_name[50];
                scanf("%s", search_name);

                int found = 0;
                for (int i = 0; i < num_teams; i++) {
                    if (strcmp(teams[i].team_name, search_name) == 0) {
                        printf("\nTeam Found:\n");
                        printf("Team Name: %s\n", teams[i].team_name);
                        printf("Sport Type: %s\n", teams[i].sport_type);
                        printf("Coach Name: %s\n", teams[i].coach.name);
                        printf("Coach Age: %d\n", teams[i].coach.age);
                        printf("Coach Experience: %d years\n", teams[i].coach.experience);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Team not found.\n");
                }
                break;

            case 3:
                if (num_teams == 0) {
                    printf("No teams added yet.\n");
                    break;
                }

                printf("\nAll Teams:\n");
                for (int i = 0; i < num_teams; i++) {
                    printf("\nTeam %d:\n", i + 1);
                    printf("Team Name: %s\n", teams[i].team_name);
                    printf("Sport Type: %s\n", teams[i].sport_type);
                    printf("Coach Name: %s\n", teams[i].coach.name);
                    printf("Coach Age: %d\n", teams[i].coach.age);
                    printf("Coach Experience: %d years\n", teams[i].coach.experience);
                }
                break;

            case 4:
                printf("Exiting program.\n");
                printf("\n\nName : Vadsola Kishan Dhirubhai");
                printf("\nId : 24CE134");

                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }
    return 0;
}
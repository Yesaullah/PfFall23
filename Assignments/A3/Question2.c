#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

struct Employee {
    char firstName[10];
    char position[10];
    float communication;
    float teamwork;
    float creativity;
};

void assignFirstName(char *firstName, char *usedFirstNames[], int numUsedFirstNames) {
    char *firstNames[] = {"Alice", "Bob", "Charlie", "David", "Emma", "Frank", "Grace", "Henry", "Ivy", "Jack",
                          "Katie", "Leo", "Mia", "Noah", "Olivia", "Peter", "Quinn", "Rachel", "Sam", "Taylor"};

    int index;
    do {
        index = rand() % 20;
    } while (isFirstNameInUse(firstNames[index], usedFirstNames, numUsedFirstNames));

    strcpy(firstName, firstNames[index]);
    usedFirstNames[numUsedFirstNames] = strdup(firstNames[index]);
}

int isFirstNameInUse(char *firstName, char *usedFirstNames[], int numUsedFirstNames) {
    int i;
    for (i = 0; i < numUsedFirstNames; i++) {
        if (strcmp(firstName, usedFirstNames[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

void assignPosition(char *position, char *usedPositions[], int numUsedPositions) {
    char *positions[] = {"Director", "Executive", "Manager", "Employee", "Trainee"};

    int index;
    do {
        index = rand() % 5;
    } while (isPositionInUse(positions[index], usedPositions, numUsedPositions));

    strcpy(position, positions[index]);
    usedPositions[numUsedPositions] = strdup(positions[index]);
}

int isPositionInUse(char *position, char *usedPositions[], int numUsedPositions) {
    int i;
    for (i = 0; i < numUsedPositions; i++) {
        if (strcmp(position, usedPositions[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

void assignValues(float *communication, float *teamwork, float *creativity) {
    *communication = rand() % 101;
    *teamwork = rand() % 101;
    *creativity = rand() % 101;
}

int main() {
    printf("				Mohammad Yesaullah	|	23k-0019\n");
    printf("-----------------------------------------------------------------------------------------------------------------------");

    float HR_score = 0;
    float Finance_score = 0;
    float Marketing_score = 0;
    float Logistics_score = 0;
    srand(time(NULL));
    int i, j;
    char bestDepartment[10];
    float topScore = 0;
    int numEmployees = 5;
    struct Employee employees[numEmployees];

    char *departments[] = {"HR", "FINANCE", "MARKETING", "LOGISTICS"};

    for (j = 0; j < 4; j++) {
        printf("\n\t|	%s DEPARTMENT	|\n\n", departments[j]);

        char *usedFirstNames[numEmployees];
        char *usedPositions[numEmployees];

        for (i = 0; i < numEmployees; i++) {
            assignFirstName(employees[i].firstName, usedFirstNames, i);
            assignPosition(employees[i].position, usedPositions, i);
            assignValues(&employees[i].communication, &employees[i].teamwork, &employees[i].creativity);

            printf("Name: |%s|\nRole: |%s|\nCommunication: |%.2f|\nTeamwork: |%.2f|\nCreativity: |%.2f|\n", employees[i].firstName, employees[i].position, employees[i].communication, employees[i].teamwork, employees[i].creativity);
			printf("__________________________________\n\n");
            if (j == 0) {
                HR_score += employees[i].communication + employees[i].teamwork + employees[i].creativity;
            } else if (j == 1) {
                Finance_score += employees[i].communication + employees[i].teamwork + employees[i].creativity;
            } else if (j == 2) {
                Marketing_score += employees[i].communication + employees[i].teamwork + employees[i].creativity;
            } else if (j == 3) {
                Logistics_score += employees[i].communication + employees[i].teamwork + employees[i].creativity;
            }
        }
    }

    if (HR_score > topScore) {
        topScore = HR_score;
        strcpy(bestDepartment, "HR");
    }
    if (Finance_score > topScore) {
        topScore = Finance_score;
        strcpy(bestDepartment, "Finance");
    }

    if (Marketing_score > topScore) {
        topScore = Marketing_score;
        strcpy(bestDepartment, "Marketing");
    }

    if (Logistics_score > topScore) {
        topScore = Logistics_score;
        strcpy(bestDepartment, "Logistics");
    }
	
    printf("THE BEST PERFORMING DEPARTMENT |%.2f| IS |%s|\n", topScore, bestDepartment);

    return 0;
}


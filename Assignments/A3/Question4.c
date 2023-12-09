/*
	Name:Mohammad Yesaullah 
	Description: Printing the details of employees with highest salaries in different departments and the total salaries paid in each department.
*/

#include <stdio.h>
#include <string.h>

struct Employee {
    int empId;
    char firstName[20];
    char lastName[20];
    int salary;
    char hireDate[20];
    char dept[20];
};

void max_salary(struct Employee employees[], int length) {
    char departments[10][20];
    int maxSalaries[10] = {0};
    int i;

    for (i = 0; i < 10; i++) {
        strcpy(departments[i], "");
    }

    for (i = 0; i < length; i++) {
        if (employees[i].salary > maxSalaries[i]) {
            maxSalaries[i] = employees[i].salary;
            strcpy(departments[i], employees[i].dept);
        }
    }

    printf("\nDETAILS OF EMPLOYEES WITH MAX SALARIES IN EACH DEPARTMENT:\n\n");
    for (i = 0; i < 10; i++) {
        if (strcmp(departments[i], "") != 0) {
            printf("DEPARTMENT: |%s|\n", departments[i]);
            printf("EMPLOYEE ID: |%d|\n", employees[i].empId);
            printf("EMPLOYEE NAME: |%s %s|\n", employees[i].firstName, employees[i].lastName);
            printf("EMPLOYEE SALARY: |%d|\n", maxSalaries[i]);
            printf("HIRE DATE: |%s|\n", employees[i].hireDate);
            printf("\n");
        }
    }
}

void total_salary_dep(struct Employee employees[], int length) {
    char departments[10][20];
    int totalSalaries[10] = {0};
    int i, j;
    
    for (i = 0; i < 10; i++) {
        strcpy(departments[i], "");
    }

    for (i = 0; i < length; i++) {
        for (j = 0; j < 10; j++) {
            if (strcmp(employees[i].dept, departments[j]) == 0) {
                totalSalaries[j] += employees[i].salary;
                break;
            } else if (strcmp(departments[j], "") == 0) {
                strcpy(departments[j], employees[i].dept);
                totalSalaries[j] += employees[i].salary;
                break;
            }
        }
    }
	printf("______________________________________\n");
    printf("\nTOTAL SALARIES PAID IN EACH DEPARTMENT:\n");
    for (i = 0; i < 10; i++) {
        if (strcmp(departments[i], "") != 0) {
            printf("%s - %d\n", departments[i], totalSalaries[i]);
        }
    }
}

int main() {
    printf("				Yesaullah Sheikh	|	23k-0019\n");
    printf("______________________________________________________________________________________________________________________");
    struct Employee employees[] = {
        {1, "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
        {2, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
        {3, "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
        {4, "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
        {5, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
        {6, "Vipul", "Diwan", 200000, "2014-06-11 09:00:00", "Account"},
        {7, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
        {8, "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"},
    };

    int length = sizeof(employees) / sizeof(employees[0]);

    max_salary(employees, length);
    total_salary_dep(employees, length);

    return 0;
}


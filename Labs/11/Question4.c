/*
	Name: Yesaullah
	Date: 21/11/2023
	Desc:  Change in salaries in accordance with 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct data{
	char name[50];
	int salary;
	int hours;
};

int main(){
	struct data employee[10];
	int i;
	for(i=0; i<10; i++){
		printf("Enter the records for employee %d\n", i+1);
		printf("Enter the name of employee: ");
		gets(employee[i].name);
		while (getchar() != '\n');
		printf("Enter the current salary of employee: ");
		scanf("%d", &employee[i].salary);
		printf("Enter the hours of work: ");
		scanf("%d", &employee[i].hours);
	}
	for(i=0; i<10; i++){
		if(employee[i].hours=8){
			employee[i].salary=employee[i].salary + 50;
		}
		else if(employee[i].hours=10){
			employee[i].salary=employee[i].salary + 100;
		}
		else if(employee[i].hours>=12){
			employee[i].salary=employee[i].salary + 150;
		}
		else {
			continue;
		}
	}
	for(i=0; i<10; i++){
		printf("\nThe new records of eployee %d are: ", i+1);
		printf("Name: %s", employee[i].name);
		printf("\nSalary: ", employee[i].salary);
	}
}

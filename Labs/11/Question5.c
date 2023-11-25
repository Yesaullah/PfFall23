/*
	Name: Mohammad Yesaullah Sheikh 
	desc: 
*/

#include <stdio.h>
//inner struct
struct employee{
		char emp_name[30];
		int emp_id;
		int salary;
	};
//outer struct
struct organisation{
	char org_name[30];
	char org_num[30];
	struct employee rec_emp; 
};

int main(){
	int size;
	struct organisation rec_org;
	size = sizeof(struct organisation);
	
	//struct employee rec_emp;
	//taking input
	printf("Enter the organisation name: ");
	scanf("%29s", &rec_org.org_name);
	while (getchar() != '\n');
	printf("Enter the organization number: ");
	scanf("%29s", &rec_org.org_num);
	while (getchar() != '\n');
	printf("Enter the id of the employee: ");
	scanf("%d", &rec_org.rec_emp.emp_id);
	printf("Enter the name of the employee: ");
	scanf("%29s", &rec_org.rec_emp.emp_name);
	while (getchar() != '\n');
	printf("Enter the salary of the employee: ");
	scanf("%d", &rec_org.rec_emp.salary);
	
	//printing the data
	printf("\nThe size of structure organisation is: %d", size);
	printf("\nOrganisation Name: %s", rec_org.org_name);
	printf("\nOrganisation Number: %s", rec_org.org_num);
	printf("\nEmployee id: %d", rec_org.rec_emp.emp_id);
	printf("\nEmployee Name: %s", rec_org.rec_emp.emp_name);
	printf("\nEmployee Salary: %d", rec_org.rec_emp.salary);
}

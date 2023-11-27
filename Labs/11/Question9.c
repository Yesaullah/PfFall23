#include <stdio.h>

struct Register{
	char course_id[30];
	char course_name[30];
};

struct student{
	char id[15];
	char first_name[20];
	char last_name[20];
	long long int cell_no;
	char email[30];
	struct Register course_data;
};

int main(){
	struct student std[5];
	int i=0;
	
	printf("Enter data for the students.\n");
	for(i=0; i<5; i++){
		printf("\nFor student %d\n", i+1);
		printf("Enter id: ");
		scanf("%s", &std[i].id);
		while (getchar() != '\n');
		printf("Enter first name: ");
		scanf("%s", &std[i].first_name);
		while (getchar() != '\n');
		printf("Enter last name: ");
		scanf("%s", &std[i].last_name);
		while (getchar() != '\n');
		printf("Enter cell no: ");
		scanf("%d", &std[i].cell_no);
		printf("Enter email: ");
		scanf("%s", std[i].email);
		printf("Enter course id: ");
		scanf("%s", &std[i].course_data.course_id);
		while (getchar() != '\n');
		printf("Enter course name: ");
		scanf("%s", &std[i].course_data.course_name);
	}
	//printing all the data
	printf("\nThe data for the students is as follows: ");
	for(i=0; i<5; i++){
		printf("\nStudent %d", i+1);
		printf("\nID: %s", std[i].id);
		printf("\nFirst Name: %s", std[i].first_name);
		printf("\nLast Name: %s", std[i].last_name);
		printf("\nCell No: %d", std[i].cell_no);
		printf("\nEmail: %s", std[i].email);
		printf("\nCourse ID: %s", std[i].course_data.course_id);
		printf("\nCourse Name: %s", std[i].course_data.course_name);
	}	
}









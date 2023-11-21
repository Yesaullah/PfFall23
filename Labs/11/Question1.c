#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct data{
	int roll_no;
	int adm_year;
	char name[50];
	char dep[50];
	char course[50];
	
};
int main(){
	struct data std_data[450];
	int i, j;
	int n;
	printf("Enter number of students: ");
	scanf("%d", &n);
	
	//TAKING INPUTS 
	for(i=0; i<n; i++){
		printf("Data of student %d\n", i+1);
		printf("enter roll no: ");
		scanf("%d", &std_data[i].roll_no);
		while (getchar() != '\n');
		printf("enter admission year: ");
		scanf("%d", &std_data[i].adm_year);
		while (getchar() != '\n');
		printf("enter name: ");
		gets(std_data[i].name);
		while (getchar() != '\n');
		printf("enter department name: ");
		gets(std_data[i].dep);
		while (getchar() != '\n');
		printf("enter course name: ");
		gets(std_data[i].course);
		while (getchar() != '\n');
	}
	//CHECKING FOR SAME YEAR OF ADMISSION AND PRINTING THE NAMES
	int y;
	bool flag;
	flag=0;
	printf("Enter the admission year for which you need to know the names: ");
	scanf("%d", &y);
	for(i=0; i<n; i++){
		if(std_data[i].adm_year==y){
			printf("Name of student %d who got admission in year %d is %s\n", i+1, y, std_data[i].name);
			flag=1;
		}
	}
	if(flag=0){
		printf("No record found for the required year.\n");
	}
	//PRINTING THE DATA OF STUDENTS WHOSE ROLL NO IS GIVEN 
	int roll;
	printf("\nenter the roll no of student whose data you need to view: ");
	scanf("%d", &roll);
	for(i=0; i<n; i++){
		if(std_data[i].roll_no == roll){
			printf("\nName: %s\n", std_data[i].name);
			printf("Roll no: %d\n", std_data[i].roll_no);
			printf("Admission Year: %d\n", std_data[i].adm_year);
			printf("Department: %s\n", std_data[i].dep);
			printf("Course Name: %s", std_data[i].course);
		}
	}
}

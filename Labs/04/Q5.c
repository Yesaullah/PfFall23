#include <stdio.h>
#include <math.h>

int main() {
int year1;
int month1;
int date1;
int year2;
int month2;
int date2;

printf("enter the birth year of first person:");
scanf("%d",&year1);
printf("enter the birth month of first person:");
scanf("%d",&month1);
printf("enter the birth day of first person:");
scanf("%d",&date1);
printf("enter the birth year of second person:");
scanf("%d",&year2);
printf("enter the birth month of second person:");
scanf("%d",&month2);
printf("enter the birth day of second person:");
scanf("%d",&date2);

if(year1<year2) {

	printf("First person is older.");
}
if(year2<year1) {

	printf("Second person is older.");
}
if(year1==year2){
	if(month1<month2) {
	printf("First person is older."); 
}	
	if(month2<month1) {
	printf("Second person is older.");
}
	if(month1==month2) {
		if(date1<date2) {
		printf("First person is older."); 
	}
		if(date2<date1) {
		printf("Second person is older.");
	}
		if(date1==date2) {
		printf("Both are of same age.");
	}
	}
}
}

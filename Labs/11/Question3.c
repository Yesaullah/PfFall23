/*
	Name: Yesaullah
	Date: 21/11/2023
	Desc: Forming a record of college students using structures and printing specific data for specific conditions
*/
#include <stdio.h>
#include <string.h>

struct date{
	int day;
	int month;
	int year;
};

int main(){
	struct date date1;
	struct date date2;
	
	//taking inputs for date 1
	printf("ENTER DATA FOR THE FIRST DATE: \n");
	printf("enter day: ");
	scanf("%d", &date1.day);
	printf("enter months: ");
	scanf("%d", &date1.month);
	printf("enter year: ");
	scanf("%d", &date1.year);
	
	//taking inputs for date 2
	printf("\nENTER DATA FOR THE SECOND DATE: \n");
	printf("enter day: ");
	scanf("%d", &date2.day);
	printf("enter months: ");
	scanf("%d", &date2.month);
	printf("enter year: ");
	scanf("%d", &date2.year);
	
	if(date1.day==date2.day && date1.month==date2.month && date1.year==date2.year){
		printf("\nDates are equal.");
	}
	else {
		printf("\nDate are not equal.");
	}
}

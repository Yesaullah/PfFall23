/*
	Name: Mohammad Yesaullah Sheikh
	desc: 
*/
#include <stdio.h>
struct date{
	int day;
	int month;
	int year;
};
int main(){
	struct date data; //assigning an identifier to the struct date
	
	//taking inputs for the current date.
	printf("Taking inputs for the current date:\n");
	printf("Enter the day: ");
	scanf("%d",& data.day);
	printf("Enter the month: ");
	scanf("%d", &data.month);
	printf("Enter the year: ");
	scanf("%d", &data.year);
	
	if(data.year < 1000 || data.year > 9999){
		printf("ERROR. Enter year in 4 digits form.");
		return 1;
	}
	//printing the current date
	printf("The current date is: %d/%d/%d", data.day, data.month, data.year);
	//doing calculations to add 45 days
	int comp_month; //days to be added to complete the current month
	int n=45;
	//if current month is february
	if(data.month == 2){ //THIS IS WORKING CORRECTLY
		if((data.year % 4 == 0 && data.year % 100 != 0) || data.year % 400 == 0){
			comp_month = 29 - data.day;
		}
		else {
		comp_month = 28 - data.day;
		}
		n = n - comp_month;
		data.month = 3;
		if(n>=31){
			n = n - 31;
			data.month = 4;
			data.day = n;
		}
		else{
			data.day = n;
		}
	}
	//if current month is a month with 31 days
	else if(data.month == 1 || data.month == 3 || data.month == 5 || data.month == 7 || data.month == 8 || data.month == 10 || data.month == 12){
		if(data.month == 12){ //THIS FUNCTIONS CORRECTLY
			comp_month = 31 - data.day;
			n = n - comp_month;
			data.month = 1;
			data.year = data.year + 1;
			if(n>=31){
			while (n>=31){
				n = n - 31;
				data.month++;
			}
			data.day = n;
			}
			else{
				data.day = n;
			}
		}
		else{ //THIS FUNCTIONS CORRECTLY
			comp_month = 31 - data.day;
			n = n - comp_month;
			data.month++;
			if(n>=31){
				while(n>=31){
				n = n - 31;
				data.month++;
				}
				data.day = n;
			}
			else{
				data.day = n;
			}
		}
	}	
	//if month is of 30 days
	else {
		if(data.month == 11 && data.day>16){
			comp_month = 30 - data.day;
			n = n - comp_month;
			data.month = 12;
			if(n>=31){
				while(n>=31){
					n = n - 31;
					data.month = 1;
				}
				data.year++;
				data.day = n;
			}
		}
		else{ //THIS ALSO FUNCTIONS CORRECTLY
			comp_month = 30 - data.day;
			n = n - comp_month;
			data.month++;
			if(n>=30){
				n = n - 30;
				data.month++;
				data.day = n;
			}
			else{
				data.day = n;
			}
		}
	}
	printf("\nThe new date is:\n");
	printf("%d/%d/%d", data.day, data.month, data.year);
}




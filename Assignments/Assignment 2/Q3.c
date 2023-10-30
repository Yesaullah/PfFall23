/*
	Name: Mohammad Yesaullah Sheikh
	Date: 26/10/2023
	Description: Flights schedule and showing best options with respect to user's preference
*/

#include <stdio.h>

int main(){
	//array to store details regarding the morning flights
	int mor[5][3]={
		{1, 1, 300},
		{2, 1, 320},
		{3, 0, 0},
		{4, 1, 380},
		{5, 1, 375}
	};
	//array to store details regarding the evening flights
	int eve[5][3]={
		{1, 0, 0},
		{2, 1, 310},
		{3, 1, 280},
		{4, 0, 0},
		{5, 1, 400}
	};
	//printing schedule for the flights scheduled in mornings.
	printf("schedule of flights for the mornings is:\n");
	int i, j;
	for(i=0; i<5; i++){
		switch (i){
			case 0:
				printf("Monday:\n");
				for(j=0; j<3; j++){
					switch (j){
						case 0:
							printf("Day:%d\t", mor[i][j]);
							break;
						case 1:
							printf("Avalailability:%d\t", mor[i][j]);
							break;
						case 2:
							printf("Price:$%d", mor[i][j]);
							break;
				 }
				}
				printf("\n");
				break;
			case 1:
				printf("Tuesday:\n");
				for(j=0; j<3; j++){
					switch (j){
						case 0:
							printf("Day:%d\t", mor[i][j]);
							break;
						case 1:
							printf("Avalailability:%d\t", mor[i][j]);
							break;
						case 2:
							printf("Price:$%d", mor[i][j]);
							break;
				 }
				}
				printf("\n");
				break;
		case 2:
				printf("Wednesday:\n");
				for(j=0; j<3; j++){
					switch (j){
						case 0:
							printf("Day:%d\t", mor[i][j]);
							break;
						case 1:
							printf("Avalailability:%d\t", mor[i][j]);
							break;
						case 2:
							printf("Price:$%d", mor[i][j]);
							break;
				 }
				}
				printf("\n");
				break;
		case 3:
				printf("Thursday:\n");
				for(j=0; j<3; j++){
					switch (j){
						case 0:
							printf("Day:%d\t", mor[i][j]);
							break;
						case 1:
							printf("Avalailability:%d\t", mor[i][j]);
							break;
						case 2:
							printf("Price:$%d", mor[i][j]);
							break;
				 }
				}
				printf("\n");
				break;
		case 4:
				printf("Friday:\n");
				for(j=0; j<3; j++){
					switch (j){
						case 0:
							printf("Day:%d\t", mor[i][j]);
							break;
						case 1:
							printf("Avalailability:%d\t", mor[i][j]);
							break;
						case 2:
							printf("Price:$%d", mor[i][j]);
							break;
				 }
				}
				printf("\n");
				break;
	}
	}
	printf("\n");
	//printing the schedule for the flights scheduled in evenings 
	printf("schedule of flights for the evenings is:\n");
	for(i=0; i<5; i++){
		switch (i){
			case 0:
				printf("Monday:\n");
				for(j=0; j<3; j++){
					switch (j){
						case 0:
							printf("Day:%d\t", eve[i][j]);
							break;
						case 1:
							printf("Avalailability:%d\t", eve[i][j]);
							break;
						case 2:
							printf("Price:$%d", eve[i][j]);
							break;
				 }
				}
				printf("\n");
				break;
			case 1:
				printf("Tuesday:\n");
				for(j=0; j<3; j++){
					switch (j){
						case 0:
							printf("Day:%d\t", eve[i][j]);
							break;
						case 1:
							printf("Avalailability:%d\t", eve[i][j]);
							break;
						case 2:
							printf("Price:$%d", eve[i][j]);
							break;
				 }
				}
				printf("\n");
				break;
		case 2:
				printf("Wednesday:\n");
				for(j=0; j<3; j++){
					switch (j){
						case 0:
							printf("Day:%d\t", eve[i][j]);
							break;
						case 1:
							printf("Avalailability:%d\t", eve[i][j]);
							break;
						case 2:
							printf("Price:$%d", eve[i][j]);
							break;
				 }
				}
				printf("\n");
				break;
		case 3:
				printf("Thursday:\n");
				for(j=0; j<3; j++){
					switch (j){
						case 0:
							printf("Day:%d\t", eve[i][j]);
							break;
						case 1:
							printf("Avalailability:%d\t", eve[i][j]);
							break;
						case 2:
							printf("Price:$%d", eve[i][j]);
							break;
				 }
				}
				printf("\n");
				break;
		case 4:
				printf("Friday:\n");
				for(j=0; j<3; j++){
					switch (j){
						case 0:
							printf("Day:%d\t", eve[i][j]);
							break;
						case 1:
							printf("Avalailability:%d\t", eve[i][j]);
							break;
						case 2:
							printf("Price:$%d", eve[i][j]);
							break;
				 }
				}
				printf("\n");
				break;
	}
	}
	//printing the best options for flights with espect to the flights
	printf("\nFlights available in the morning:\nMonday, Tuesday, Wednesday, Thursaday\nBest option is Monday's flight with price $%d", mor[0][2]);
	printf("\n\nFlights available in the evening:\nTueday, Wednesday, Friday\nBest option is wednesday's flight with price $%d", eve[2][2]);
	
	int day;
	//printing the options with respect to specific days.
	printf("\nSelect day 1-5: ");
	scanf("%d", &day);
	switch (day){
		case 1:
			printf("Day: Monday\nMorning flight = $300\nEvening flight = Not available.");
			break;
		case 2:
			printf("Day: Tuesday\nMorning flight = $320\nEvening flight = $310");
			break;
		case 3:
			printf("Day: Wednesday\nMorning flight = Not available.\nEvening flight = $280");
			break;
		case 4:
			printf("Day: Thursday\nMorning flight = $380\nEvening flight = Not available");
			break;
		case 5:
			printf("Day: Friday\nMorning flight = $375\nEvening flight = $400");
			break;
	}
}

/*
	Programmer name: M.Yesaullah Sheikh
	Date: 24/10/2023
	Description: Checking if a car can be used on a specific day using its number.	
*/

#include<stdio.h>

int decideCarUsage(int num, int day); //userdefined function to check if a car can be used oon a specific day or not

int main()
{
	int num;
	printf("Enter the numeric part of your car's plate.");
	scanf("%d", &num); //taking input of the car's number
	
	int day;
	printf("Enter a day from 1-7: ");
	scanf("%d", &day); //taking input for the day of the week	
	if(decideCarUsage(num,day))// checking if a car can be used or not
	{
		printf("The car can be used today.");
	}
	else
	{
		printf("The car cannot be used today.");
	}
}
//defining the user defined function to determine if the car's number and the day are both either even or odd.
int decideCarUsage(int num, int day)
{
	if(num%2==day%2)//checking if they are both even 
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


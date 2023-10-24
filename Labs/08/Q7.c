/*
	Programmer name: M.Yesaullah Sheikh
	Date: 24/10/2023
	Description: Determining discounts based on the bill and previous visits of the customer
*/

#include <stdio.h>

int calculateDiscount(int amount, int visits);

int main()
{
	int amount, visits;
	//taking input for the bill amount and previous visits
	printf("enter the total amount of the bill: ");
	scanf("%d", &amount);
	printf("Enter the number of visits of the customer in the previous month: ");
	scanf("%d", &visits);
	
	calculateDiscount(amount, visits);
}

//defining the user defined function calculateDiscount
int calculateDiscount(int amount, int visits)
{
	float disc_amount;
	if(amount>=50 && visits>10)
	{
		disc_amount=(amount)*(0.15);	
	}	
	else if(amount>=30 && visits>5)
	{
		disc_amount=(amount)*(0.1); 
	}
	else 
	{
		printf("No discount offers available for you."); //Printing this if the conditions for discounts are not met
	}
	printf("The discounted price is: %f", disc_amount);//printing the disconted price
}





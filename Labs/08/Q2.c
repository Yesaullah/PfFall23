/*
	Programmer name: M.Yesaullah Sheikh
	Date: 24/10/2023
	Description: Performing basic mathematical operations using a user-defined function 
*/

#include <stdio.h>

int calculator(int a, int b, char opp, int res); //function for the implication of operations

int main()
{
	int a, b;
	float res;
	char opp;
	//taking inputs for the values of integers and the operator
	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("Enter the second integer: ");
	scanf("%d", &b);
	printf("Enter the operator for the operation you need to perform: ");
	scanf(" %c", &opp);
	//calling the function for calculations 
	calculator(a,b,opp,res);
}
//Defining the user defined function for calculations 
int calculator(int a, int b, char opp, int res)
{
	switch (opp)
	{
		case '+':
			res=a+b;
			printf("The result of addition is: %d", res);
			break;
		case '-':
			res=a-b;
			printf("The result of subtraction is: %d", res);
			break;
		case '*':
			res=a*b;
			printf("The result of multiplication is: %d", res);
			break;
		case '/':
			res=a/b;
			printf("The result of division is: %d", res);
			break;
	}
}






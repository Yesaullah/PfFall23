/*
	Programmer name: M.Yesaullah Sheikh
	Date: 24/10/2023
	Description: Swapping two integer values and printing the swapped values.
*/

#include <stdio.h>

int swapintegers(int a, int b) //user defined function for swapping the values
{
	int c; //temporary variable to store the value of a 
	c=a;
	a=b;
	b=c;
	printf("The swapped values are %d and %d.", a,b);
}

int main()
{
	int a, b;
	//Taking inputs for the two integers
	printf("Enter first integer: ");
	scanf("%d", &a);
	printf("Enter second integer: ");
	scanf("%d", &b);
	//calling the swapping function
	swapintegers(a,b);
}

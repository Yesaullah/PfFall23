/*
	Programmer name: M.Yesaullah Sheikh
	Date: 24/10/2023
	Description: Taking input of a string and then checking how many times is 'c' repeated in the string.
*/

#include <stdio.h>

int main()
{
	int l; //Variiable defining the length of te string
	printf("Enter the length of string you need would enter: ");
	scanf("%d", &l); //taking input for the string 
	
	char str[l]; //declaration of array
	int i;
	//taking string input
	for(i=0; i<l; i++)
	{
		printf("Enter the %d element of string: ", i+1);
		scanf(" %c", &str[i]);
	}
	//printing the string the user has input
	printf("The string you entered is: ");
	for(i=0; i<l; i++)
	{
		printf("%c", str[i]);
	}
	
	int count=0;// a variable to count the number of 'c' in the string 
	for(i=0; i<l; i++)
	{
		if(str[i]=='c')
		{
			count++;
		}
	}
	//printing the number of times 'c' came in the string
	printf("\nNumber of 'c' in the string is: %d", count);
}

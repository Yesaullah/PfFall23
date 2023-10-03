/**
	*Programmer: Yesaullah Sheikh
	*Desc: Determining if a number is perfect or not
	*Date: 03/10/2023
*
*/

#include <stdio.h>

int main() 
{
	int n;
	printf("Enter the number: \n");
	scanf("%d", &n);
	int sum=0;
	int c=0;
	
	for (c=1; c<n; c++) // For loop for checking factors of the number and adding all the factors
	{
		if (n%c==0) 
		{
			sum=sum+c;
		}
	}
	
	printf("\n");
	if (sum==n)
	{
		printf("%d is a perfect number.", n);
	}
	else
	{
		printf("The number is not a perfect number.");
	}
}

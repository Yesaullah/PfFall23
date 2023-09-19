#include <stdio.h>

int main() 
{
	int num;
	int rem;
	printf("Enter a number:");
	scanf("%d", &num);
	rem=num%3;
	if(rem==0)
	{
		printf("The number entered is a multiple of 3.");
	}
	else 
	{ 
		printf("The numbered entered is not a multiple of 3.");
	}
}

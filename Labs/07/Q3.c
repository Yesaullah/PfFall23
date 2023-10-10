/*
	*Programmer: Yesaullah Sheikh
	*Desc: Addition of digits in a number.
	*Date: 10/10/23
*/

#include <stdio.h>

int main()
{
	int n, rem;
	int sum=0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	int i;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("The sum of the digits is %d", sum);
}

/**
	*Programmer: Yesaullah Sheikh
	*Desc: Generating fibonacci sequence
	*Date: 03/10/2023
*
*/

#include <stdio.h>

int main ()
{
	int a=0;
	int b=1;
	int c=1;
	int sum=0;
	
	printf("The fibonacci sequence is: \n");
	printf(" %d,", b);
	printf(" %d,", c);
	
	for (a=b+c; a<10000;)
	{
		a=b+c;
		if(a>10000)
		{
			break;
		}
		b=c;
		c=a;
		printf(" %d,", a);
		
		if(a%3==0 || a%5==0 || a%7==0)
		{
			sum=sum+a;
		}
	}
	printf("\n");
	printf("The sum of the numbers in fibonacci sequence which are divisible by 3,5 or 7 is: \n");
	printf("%d", sum);
}

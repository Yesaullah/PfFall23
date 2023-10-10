#include <stdio.h>

int main()
{
	int n1, n2;
	int rem=0;
	int q=0;
	int temp;
	
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: ");
	scanf("%d", &n2);
	temp=n2;
	
	while(temp>=n1)
	{
		rem=temp-n1;
		q+=1;
		temp-=n1;
	}
	printf("The remainder of the division of %d and %d is: ", n1,n2);
	printf("%d", rem);
	printf("\n");
	printf("The quotient of the division of %d and %d is: ", n1,n2);
	printf("%d", q);
}

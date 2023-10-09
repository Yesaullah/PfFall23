#include <stdio.h>

int main()
{
	int n1;
	int n2;
	int c;
	
	printf("Enter first number: \n");
	scanf("%d", &n1);
	printf("Enter second number: \n");
	scanf("%d", &n2);
	
	printf("\n");
	printf("Output is: ");
	printf("\n");
	
	for(;n1<=n2; n1++)
	{
		switch(n1)
		{
			case 1:
				printf("One, ");
			break;
			
			case 2:
				printf("Two, ");
			break;
			
			case 3:
				printf("Three, ");
			break;
			
			case 4:
				printf("Four, ");
			break;
			
			case 5:
				printf("Five, ");
			break;
			
			case 6:
				printf("Six, ");
			break;
			
			case 7:
				printf("Seven, ");
			break;
			
			case 8:
				printf("Eight, ");
			break;
			
			case 9:
				printf("Nine, ");
			break;
			
			default:
				if(n1%2==0)
				{
					printf("Even, ");
				}
				else 
				{
					printf("Odd, ");
				}
		}
	}
}

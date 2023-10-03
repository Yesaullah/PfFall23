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
				printf(" One ");
				printf("\n");
			break;
			
			case 2:
				printf(" Two ");
				printf("\n");
			break;
			
			case 3:
				printf(" Three ");
				printf("\n");
			break;
			
			case 4:
				printf(" Four ");
				printf("\n");
			break;
			
			case 5:
				printf(" Five ");
				printf("\n");
			break;
			
			case 6:
				printf(" Six ");
				printf("\n");
			break;
			
			case 7:
				printf(" Seven ");
				printf("\n");
			break;
			
			case 8:
				printf(" Eight ");
				printf("\n");
			break;
			
			case 9:
				printf(" Nine ");
				printf("\n");
			break;
			
			default:
				if(n1%2==0)
				{
					printf(" Even ");
					printf("\n");
				}
				else 
				{
					printf(" Odd ");
					printf("\n");
				}
		}
	}
}

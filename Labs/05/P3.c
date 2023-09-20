#include <stdio.h>

int main()
{
	char input;
	printf("Are you sure to delete [Y/y] / [N/n] ?");
	printf("\n");
	scanf("%c", &input);
	switch (input) 
	{
		case 'Y':
			printf("Deleted succcessfully");
			break;
		case 'y':
			printf("Deleted succcessfully");
			break;
		case 'N':
			printf("Delete cancelled");
			break;
		case 'n':
			printf("Delete cancelled");
			break;
		default:
			printf("Enter valid choice");
	}
}

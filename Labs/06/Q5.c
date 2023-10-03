#include <stdio.h>

int main()
{
	int i;
	
	for (i=1; i<=7; i++)
	{
		switch (i)
		{
			case 1:
				printf("0  0  0  0");
				printf("\n");
				break;
			case 2:
				printf("   1  1   ");
				printf("\n");
				break;
			case 3:
				printf("2  2  2  2");
				printf("\n"); 
				break;
			case 4:
				printf("   3  3   ");
				printf("\n");
				break;
			case 5:
				printf("4  4  4  4");
				printf("\n");
				break;
			case 6:
				printf("   5  5   ");
				printf("\n");
				break;
			case 7:
				printf("6  6  6  6");
				break;
		}
	}
}

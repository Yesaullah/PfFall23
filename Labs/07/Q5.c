#include <stdio.h>

//function for printing the hat of the man
void hat()
{
	int c;
	for(c=1; c<=4; c++)
	{
		switch (c)
		{
			case 1:
				printf("    *****\n");
				break;
			case 2:
				printf("    *****\n");
				break;
			case 3:
				printf("    *****\n");
				break;
			case 4:
				printf(" ***********\n");
				break;
		}
	}
}

//function for printing the face and neck of the man
void face_neck()
{
	int c;
	for(c=1; c<=5; c++)
	{
		switch (c)
		{
			case 1:
				printf("    *   *\n");
				break;
			case 2:
				printf("      |  \n");
				break;
			case 3:
				printf("     \\_/ \n");
				break;
			case 4:
				printf("\n");
				break;
			case 5:
				printf("     | |\n");
				break;
		}
	}
}

//function for printing body from neck to feet
void body()
{
	int c;
	for(c=1; c<=11; c++)
	{
		switch (c)
		{
			case 1:
				printf("*************\n");
				break;
			case 2:
				printf("**  *****  **\n");
				break;
			case 3:
				printf("**  *****  **\n");
				break;
			case 4:
				printf("**  *****  **\n");
				break;
			case 5:
				printf("**  *****  **\n");
				break;
			case 6:
				printf("    *****\n");
				break;
			case 7:
				printf("    ** **\n");
				break;
			case 8:
				printf("    ** **\n");
				break;
			case 9:
				printf("    ** **\n");
				break;
			case 10:
				printf("    ** **\n");
				break;
			case 11:
				printf("    ** **\n");
				break;
		}
	}
}

//function for printing the feet of the man 
void feet()
{
	printf(" ***** ***** ");
}

//printing the output
int main()
{
	hat();
	face_neck();
	body();
	feet();
	
	return 0;
}



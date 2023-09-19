#include <stdio.h>

int main() {
	
	char c;
	
	printf("Enter a character: ");
	scanf("%c", &c);
	printf("\n");
	
	if (c>=97 && c<=122)
	{
		printf("Character entered is a small case alphabet.\n");
	}
	else if(c>=65 && c<=90)
	{
		printf("Character entered is a large case alphabet.\n");
	}
	else if(c>=48 && c<=57)
	{
		printf("Character entered is a digit.\n");
	}
	else 
	{
		printf("Character entered is a special character.");
	}
}


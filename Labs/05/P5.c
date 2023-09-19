#include <stdio.h>

int main() {
	
	char c;
	
	printf("Enter a character: ");
	scanf("%c", &c);
	
	if (c>='a' && c<='z')
	{
		printf("Character entered is a small case alphabet.\n");
	}
	else if(c>='A' && c<='Z')
	{
		printf("Character entered is a large case alphabet.\n");
	}
	else if(c>='0' && c<='9')
	{
		printf("Character entered is a digit.\n");
	}
	else 
	{
		printf("Character entered is a special character.");
	}
}


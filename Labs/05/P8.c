#include <stdio.h>
#include <conio.h>

int main()
{
	int input;
	printf("Enter the value read by the senor: \n");
	scanf("%d", &input);
	
	if(input>=0 && input<=100) {
		printf("It is evening in the surroundings.");
	}
	else if(input>100 && input<500) {
		printf("There is good lighting in surroundings.");
	}
	else if(input>=500) {
		printf("There is sunlight in surroundings.");
	}
	else {
		printf("Invalid input.");
	}
} 

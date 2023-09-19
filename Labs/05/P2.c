#include <stdio.h>

int main() {
	int hours;
	printf("Enter time in hours:");
	scanf("%d", &hours);
	if(hours>=5 && hours<11)
	{
		printf("Good Morning");
	}
	else if(hours>=12 && hours<18)
	{
		printf("Good Evening");
	}
	else if(hours>=18 && hours<24)
	{
		printf("Good Night");
	}
}

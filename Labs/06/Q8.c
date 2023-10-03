#include <stdio.h>

int main()
{
	int input[9]={1,2,3,4,5,6,7,8,9};
	int c;
	int a;
	
	for (c=8; c>=0; c--)
	{
		a=input[c];
		printf("%d ", a);
	}
}

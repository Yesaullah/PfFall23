#include <stdio.h>

int main()
{
	int userinput[9]={1,2,3,4,5,6,7,8,9};
	int c;
	int sum=0;
	for (c=0; c<9; c++)
	{
		sum = sum + userinput[c];
	}
	printf("%d is the sum of all the elements in the array.", sum);
}

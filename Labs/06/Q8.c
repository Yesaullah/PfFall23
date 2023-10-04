#include <stdio.h>

int main()
{
	int n;
	int i;
	
	printf("Enter the number of elements for arrays: ");
	scanf("%d", &n);
	int arr[n];
	
	for (i=0; i<n; i++)
	{
		printf("Enter a number to be stores in array:\n");
		scanf("%d", &arr[i]);
	}
	int c;
	c=n;
	
	printf("The elements of array in reverse order are: ");
	
	for (c>=0; c--;)
	{
		printf("\n %d \n", arr[c]);
	}
}
	

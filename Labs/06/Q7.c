#include <stdio.h>

int main()
{
	int n;
	int sum=0;
	int i;
	
	printf("Enter the number of elements for arrays: ");
	scanf("%d", &n);
	int arr[n];
	
	for (i=0; i<n; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	printf("The elements of the array are: ");
	for (i=0; i<n; i++)
	{
		printf("\n%d,", arr[i]);
	}
	printf("\nThe sum of all the elements in the array is: %d", sum);
}

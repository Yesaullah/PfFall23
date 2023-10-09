#include <stdio.h>

int main()
{
	int n;
	int i;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &n);
	int arr[n];
	
	printf("Enter %d elements in the array:\n", n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int min = arr[0];
	int max = arr[0];
	
	for(i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	
	printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

}

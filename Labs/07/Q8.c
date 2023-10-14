#include <stdio.h>

int main()
{
	int n;
	
	//taking input for the size of the array 
	printf("Enter the number of inputs you need to give: ");
	scanf("%d", &n);
	
	//intializing the arrays 
	int arr[n];
	
	int i, j, temp;
	//filling up the array
	for(i=0; i<n; i++)
	{
		printf("Enter %d number: ", i+1);
		scanf("%d", &arr[i]);
	}

	//sorting
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	//printing the sorted array
	printf("The sorted array is:\n");
	for(i=0; i<n; i++)
	{
		if(i<n-1)
		{
		printf("%d, ", arr[i]);
		}
		else
		{
			printf("%d", arr[i]);
		}
	}
}

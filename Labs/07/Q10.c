#include <stdio.h>

int main() 
{
    int S, N;
	//Taking inputs for N and S
    printf("Enter Number S: ");
    scanf("%d", &S);
    printf("Enter the size of the array: ");
    scanf("%d", &N);
	
    int arr[N];
	int i;
	//filling up the array
    for (i=0; i<N; i++) 
	{
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    int j=0;
    int k=0;
    int sum=0;
	//doing all the calculations here
    for (i=0; i<N; i++) 
	{
        sum+=arr[i];
        while(sum>S) 
		{
            sum-=arr[j];
            j+=1;
        }
		if (sum==S) 
		{
            k=i;
            break;
        }
    }
	//printing the outputs here
    if (sum==S) {
        printf("The elements from index %d to %d, when summed, result in %d.\n", j, k, S);
    } else {
        printf("No subarray found with a sum of %d.\n", S);
    }
}


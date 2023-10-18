#include <stdio.h>

int main() 
{
	//taking input for the size of array
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int i;
    //filling up the array
    for (i=0; i<n; i++) 
	{
    	printf("Enter the %d element:\n", i+1);
        scanf("%d", &arr[i]);
    }

    // Initialize a frequency array with all elements set to 0
    int freq[n];
    for (i=0; i<n; i++) 
	{
        freq[i]=0;
    }

    // Calculate the frequency of each element
    for (i=0; i<n; i++) 
	{
        if (freq[i]==-1) 
		{
            continue;  // Element already counted
        }
        int count=1;
        int j;
        for (j=i+1; j<n; j++) 
		{
            if(arr[i]==arr[j]) 
			{
                count++;
                freq[j]=-1;  //This marks the elements as counted
            }
        }
        freq[i]=count;
    }

    //Printing the frequency of each element
    for(i=0; i<n; i++) 
	{
        if(freq[i]!=-1) 
		{
            printf("Frequency of %d is %d\n", arr[i], freq[i]);
        }
    }
    return 1;
}


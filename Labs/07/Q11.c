#include <stdio.h>


int max(int a, int b) 
{
    if(a>b) 
	{
    	return a;
	} 
	else 
	{
		return b;
	}
}

int main() 
{
    int n,i,j,k,l;
    
    //taking input for the order of the main matrix
    printf("Enter the size of the grid: ");
    scanf("%d", &n);

    int grid[n][n];
    int maxLocal[n-2][n-2]; // declaration of matrix of size (n-2) x (n-2)

    //Taking inputs for the grid values
    printf("Enter the elements of the grid:\n");
    for(i=0; i<n; i++) 
	{
    	printf("Enter value for row %d: \n", i+1);
        for(j=0; j<n; j++) 
		{
        	printf("Enter value for column %d: \n", j+1);
            scanf("%d", &grid[i][j]);
        }  
        printf("\n");
    }

    //Determining maxLocal
    for (i=0; i<n-2; i++) 
	{
        for(j=0; j<n-2; j++) 
		{
            int maxValue=grid[i][j];
            for (k=i; k<i+3; k++) 
			{
                for ( l=j; l<j+3; l++) 
				{
                    maxValue=max(maxValue, grid[k][l]);
                }
            }
            maxLocal[i][j]=maxValue;
        }
    }
    //Printing the maxLocal matrix
    printf("The maxLocal matrix is: \n");
    for(i=0; i<n-2; i++) 
	{
        for(j=0; j<n-2; j++) 
		{
            printf("%d ", maxLocal[i][j]);
        }
        printf("\n");
    }
}

#include<stdio.h>

int main()
{
    int n=0; //a variable for the size of arrays
    printf("Enter NxN value: ");
    scanf("%d", &n);

    int arr[n][n]; //declaration of array of size NxN

    int i, j, k; //loop controlling variables
	//iniatializing the array to 0
    for(i=0;i<n;i++)
	{
        for(j=0;j<n;j++)
		{
            arr[i][j]=0;
        }
    }

    int c=1;
    for(k=0; k<n/2+n%2; k++)
	{
        for(i=k; i<n-k; i++)
		{
            if(i==k)
			{
                for(j=k; j<n-k; j++)
				{
                    arr[i][j]=c;
                    c++;
                }
            }
            if(i>k && i<n-1-k)
			{
                arr[i][n-1-k]=c;
                c++;
            }
            if(i==n-1-k && i!=(n/2+n%2)-1)
			{
                for(j=n-1-k; j>=k; j--)
				{
                    arr[i][j]=c;
                    c++;
                }
            }
        }
        for(i=n-2-k; i>k; i--)
		{
            arr[i][k]=c;
            c++;
        }
    }

    for(i=0; i<n; i++)
	{
        for(j=0;j<n;j++)
		{
            printf("%d  ",arr[i][j]);
        }
        printf("\n\n");
    }


    printf("\n\n");
    
    for(i=0; i<n; i++)
	{
        for(j=0; j<n; j++)
		{
            arr[i][j]=0;
        }
    }
    c=n*n;
    for(k=0; k<n/2+n%2; k++)
	{
        for(i=k; i<n-k; i++)
		{
            if(i==k)
			{
                for(j=n-1-k; j>=k; j--)
				{
                    arr[i][j]=c;
                    c--;
                }
            }
            if(i>k && i<n-1-k)
			{
                arr[i][k]=c;
                c--;
            }
            if(i==n-1-k && i!=(n/2+n%2)-1)
			{
                for(j=k; j<n-k; j++)
				{
                    arr[i][j]=c;
                    c--;
                }
            }
        }
        for(i=n-2-k; i>k; i--)
		{
            arr[i][n-1-k]=c;
            c--;
            }
    }

    for(i=0; i<n; i++)
	{
        for(j=0; j<n; j++)
		{
            printf("%d  ",arr[i][j]);
        }
        printf("\n\n");
    }
}

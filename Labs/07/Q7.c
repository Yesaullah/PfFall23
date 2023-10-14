#include <stdio.h>

int main()
{
	int mat1[2][2];
	int mat2[2][2];
	int res[2][2];
	int i,j, k;
	
	//taking inputs for the array
	printf("Fill up the first matrix.");
	printf("\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter %d, %d element in the matrix 1: ", i+1,j+1);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("\n");
	
	printf("Fill up the second matrix.");
	printf("\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter %d, %d element in the matrix 2: ", i+1,j+1);
			scanf("%d", &mat2[i][j]);
		}
	}
	
	//multiplying matrices 
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			res[i][j]=0;
			for(k=0; k<2; k++)
			{
				res[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	
	//displaying the final array
	printf("\n");
	printf("The result of multiplacation is:\n\n");
	printf("\t%d\t%d", res[0][0], res[0][1]);
	printf("\n");
	printf("\t%d\t%d", res[1][0], res[1][1]);
}

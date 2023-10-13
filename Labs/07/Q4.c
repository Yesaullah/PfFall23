#include <stdio.h>
#include <stdbool.h>

int main()
{
	int r1, r2, c1, c2, temp1, temp2;
	bool is_symm;
	is_symm= true;
	
	//taking input for the order of matrix
	printf("Enter the rows of the first matrix: ");
	scanf("%d", &r1);
	printf("Enter the columns of the first matrix: ");
	scanf("%d", &c1);
	printf("\n");
	
	//taking inputs for the orfder of the second matrix
	printf("Enter the rows of the second matrix: ");
	scanf("%d", &r2);
	printf("Enter the columns of the second matrix: ");
	scanf("%d", &c2);
	printf("\n");
	
	int i, j;
	int mat1[r1][c1];
	int mat2[r2][c2];
	
	//taking inputs for the matrix
	for(i=0; i<r1; i++)
	{
		temp1=i+1;
		for(j=0; j<c1; j++)
		{
			temp2=j+1;
			printf("Enter the element to be stored at %d, %d of the first matrix:", temp1, temp2);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<r2; i++)
	{
		temp1=i+1;
		for(j=0; j<c2; j++)
		{
			temp2=j+1;
			printf("Enter the element to be stored at %d, %d of the second matrix:", temp1, temp2);
			scanf("%d", &mat2[i][j]);
		}
	}
	printf("\n");
	//checking for the symmetry
	for(i=0; i<r1; i++)
	{
		for(j=0; j<c1; j++)
		{
			if(mat1[i][j]!=mat2[j][i])
			{
				is_symm=false;
				break;
			}
		}
	}
	if(is_symm==true)
	{
		printf("Yes, the matrices are symmetric. ");
	}
	else 
	{
		printf("No, the matrices are not symmetric. ");
	}
}

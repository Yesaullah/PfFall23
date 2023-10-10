/*
	*Programmer: Yesaullah Sheikh
	*Desc: Rotation of an array without using another array
	*Date: 10/10/23
*/

int main()
{
	int n=0;
	printf("Enter n: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter Array of %d Elements \n",n);
	
	int j=0;

	while(j<n)
	{
		printf("Enter Element %d: ",j+1);
		scanf(" %d",&arr[j]);
		j++;
	}
	
	int d=0;
	printf("\nNow Enter Integer to Rotate Array:  ");
	scanf("%d",&d);
	printf("\nYour Array Before Rotation: ");
	
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	}
	
	int temp1=0;
	for(i=0;i<d;i++)
	{
		temp1=arr[0];
		for(j=0;j<n;j++)
		{
			arr[j]=arr[j+1];
			if(j==n-1){
				arr[j]=temp1;
			}
		}
	}
	
	printf("\nYour Array After Rotation: ");
	for(i=0;i<n;i++)
	{
		printf("%d, ",arr[i]);
	}
}



#include <stdio.h>

int main()
{
	int x, y;
	//taking inputs for the number of baranches and mobiles in each branch
	printf("Enter the number of branches: ");
	scanf("%d", &x);
	printf("\nEnter the number of mobile phones in each branch: ");
	scanf("%d", &y);
	
	int in_arr[x][y];
	int c, i;
	
	//filling up the array with bills.
	for(c=0; c<x; c++)
	{
		for(i=0; i<y; i++)
		{
			printf("Enter bill for branch %d mobile %d: ", c+1, i+1);
			scanf("%d", &in_arr[c][i]);
		}
	}
	printf("\n");
	
	int total_bill=0; //for the total bill of all branches
	int bill_branch; //for each branch bill
	int max_branch; //for ID of branch with max bill
	int mobile, branch; //for mobile and branch IDs with max bill
	int max_B_bill=0; //for checking the branch with max bill
	int max_s=0; //for checking the mobile with max bill
	
	//doing calculations on data
	for(c=0; c<x; c++)
	{
		bill_branch=0;
		for(i=0; i<y; i++)
		{
			if(in_arr[c][i]>max_s)
			{
				mobile=i+1;
				branch=c+1;
				max_s=in_arr[c][i];
			}
			total_bill=total_bill+in_arr[c][i];
			bill_branch=bill_branch+in_arr[c][i];
		}
		printf("Total bill for brach %d is: %d\n", c+1, bill_branch);
		if(bill_branch>max_B_bill)
		{
			max_branch=c+1;
			max_B_bill=bill_branch;
		}
	}
	
	//printing the results
	printf("\nTotal bill for all %d branches is: %d", x, total_bill);
	printf("\nThe branch where maximum bill arrived is branch %d", max_branch);
	printf("\n%d mobile from %d branch had the maximum bill.", mobile,branch);
}

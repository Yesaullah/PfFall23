#include <stdio.h>
#include <math.h>

int main() {
	int n1;
	printf("Enter the number of inputs to be taken:");
	scanf("%d",&n1);

	int count=1;
	int sum;
	sum=0;
	int temp=0;
	while(count<=n1) {
		temp = 0;
		printf("Enter number:");
		scanf("%d",&temp);
		sum = sum + (temp*temp);
		count=count+1;
	}
	printf("The sum of numbers is:");
	printf("%d",sum);
}

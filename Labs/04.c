Q1:

#include<stdio.h>

int main() {

  int num;
  printf("enter your number:");
  scanf("%d",&num);
  
  int count1=0;
  while(count1<=num){
     int count2=1;
     while(count2<=count1){
        printf("* ");
        count2=count2+1;
     }
  printf("\n");
  count1=count1+1;
  }
}

Q2:

#include<stdio.h>

int main() {

	int num;
	printf("enter your number:");
	scanf("%d",&num);

	int count=0;
	while(count<=num) {
		int count2=1;
		while(count2<=num){
			printf("* ");
			count2=count2+1;
			}
		printf("\n");
		count=count+1;
		}
}

Question3:

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

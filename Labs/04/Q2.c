#include<stdio.h>

int main() {

	int num;
	printf("enter your number:");
	scanf("%d",&num);

	int count=1;
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

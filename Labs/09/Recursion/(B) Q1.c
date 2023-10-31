/*
	Name: Mohammad Yesaullah Sheikh
	Date: 31/10/23
	Description: Determining the factorials using recursion.
*/

#include <stdio.h>

int factorial(int n);
int main(){
	int a;
	printf("Enter the number you want to find the factorial of: ");
	scanf("%d", &a);
	
	printf("The factorial of %d is equal to: %d", a, factorial(a));
}

int factorial(int n){
	if(n==0){
		return 1;
	}
	return n * factorial(n-1);
}

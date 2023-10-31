/*
	Name: Mohammad Yesaullah Sheikh
	Date: 31/10/23
	Description: Finding product of 2 numbers without using multiplication operator and loops. Use recursion and addition only.
*/

#include <stdio.h>

int mult(int a, int b);

int main(){
	int n1;
	int n2;
	printf("Enter first number: ");
	scanf("%d", &n1);
	printf("Enter second number: ");
	scanf("%d", &n2);
	
	printf("The product of %d and %d is: %d", n1, n2, mult(n1, n2));
}

int mult(int a, int b){
	if(b==1){
		return a;
	}
	return a+mult(a, b-1);
}

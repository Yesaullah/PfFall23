#include <stdio.h>
#include <math.h>

int main() {
	//: DECLARING VARIABLES HERE
	int a;
	int b;
	int c;
	float X1;
	float X2;
	
	//: TAKING INPUTS HERE
	printf("Enter the coefficient of x^2:");
	scanf("%d",&a);
	printf("Enter the coeeficient of x:");
	scanf("%d",&b);
	printf("Enter the value of constant in the expression:");
	scanf("%d",&c);
	
	//: DOING CALCULATION HERE
	X1 = ((-1*b) + sqrt(b*b - 4*a*c))/(2*a);
	X2 = ((-1*b) - sqrt(b*b - 4*a*c))/(2*a);
	
	//: PRINTING ANSWERS HERE
	printf("The first root is equal to:");
	printf("%f",X1);
	printf("\n");
	printf("The second root is equal to:");
	printf("%f",X2);
}

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int a,b,c;
	float discriminant,r1,r2;
	
	printf("Enter the coefficient of x-square: \n");
	scanf("%d", &a);
	
	printf("Enter the coefficient of x: \n");
	scanf("%d", &b);
	
	printf("Enter the constant in the equation: \n");
	scanf("%d", &c);
	
	discriminant = b * b -(4 * a * c);
	
    if(discriminant>=0) 
	{
		printf("Roots are real: \n");
		r1 = (-b + sqrt(discriminant)) / (2 * a);
    	r2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("The first root is equals to: ");
		printf("%f", r1);
		printf("\n");
		printf("The second root is equals to: ");
		printf("%f", r2);
	}
	else if(discriminant==0)
	{
		printf("Roots are equal: \n");
		r1 = (-b) / (2*a);
		r2 = r1;
		printf("The first root is equals to: ");
		printf("%f", r1);
		printf("\n");
		printf("The second root is equals to: ");
		printf("%f", r2);
	}
	else 
	{
		printf("Roots are imaginary: \n");
		r1 = (-b + sqrt(discriminant)) / (2 * a);
    	r2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("The first root is equals to: ");
		printf("%f", r1);
		printf("\n");
		printf("The second root is equals to: ");
		printf("%f", r2);
	}
}

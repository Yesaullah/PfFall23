#include<stdio.h>

int main(){
	int a=0;
	int b=0;
	
	printf("Enter first number: ");
	scanf("%d", &a);	
	
	printf("Enter second number: ");
	scanf("%d", &b);
		
	int GCD=0;
	
	if(b>a)
	{
		GCD=b;
	}
	else
	{
		GCD=a;
	}
	
	for (GCD>0; GCD--;)
	{
		if(b%GCD==0 && a%GCD==0)
		{
			break;
		}
	}
	
	printf("The GCD is: \n");
	printf("%d", GCD);
	
	int LCM=b*a/GCD;
	
	printf("\n");
	printf("The LCM is: \n");
	printf("%d", LCM);
	
}

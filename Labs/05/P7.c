#include <stdio.h>

int main() {
	
	int OrigPrice;
	float save;
	float salP;
	float disc;
	
	printf("Enter the original price of the item: \n ");
	scanf("%d", &OrigPrice);
	
	if (OrigPrice >= 2000 && OrigPrice <= 4000) 
	{
		disc=0.2;
		save=(OrigPrice)*(disc);
		salP=OrigPrice-save;
		printf("%f is the amount saved. \n", save);
		printf("%f is the discounted price.", salP);
	}
	else if(OrigPrice >= 4001 && OrigPrice <= 6000)
	{
		disc=0.3;
		save=(OrigPrice)*(disc);
		salP=OrigPrice - save;
		printf("%f is the amount saved. \n", save);
		printf("%f is the discounted price.", salP);
	}
	else if (OrigPrice > 6000)
	{
		disc=0.5;
		save=(OrigPrice)*(disc);
		salP=OrigPrice-save;
		printf("%f is the amount saved. \n", save);
		printf("%f is the discounted price.", salP);
	}
	else 
	{
		printf("There is no discount on this price.");
	}
	
}

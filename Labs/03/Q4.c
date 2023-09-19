#include <stdio.h>
#include <math.h>

main(void) {
	int ori_price;
	    ori_price = 1500;
	float selling_price;
	selling_price= ori_price - (0.2*ori_price);
	printf("The selling price of the toy is");
	printf("%f", selling_price);
	return 1;
}

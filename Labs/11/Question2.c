/*
	Name: Mohammad Yesaullah Sheikh
	desc: Takes inputs for car parts and prints the details about the parts with serial number between BB1 and CC6.
*/

#include <stdio.h>

struct car{
	char serial[3];
	int manu_year;
	char material[20];
	int quantity;
};

int main(){
	int n;
	printf("enter the number of parts: ");
	scanf("%d", &n);
	struct car parts[n];
	int i;
	//taking inputs for n number of body parts
	for(i=0; i<n; i++){
		printf("\nenter details for body part %d\n", i+1);
		printf("enter serial number between AA0-FF9: ");
		scanf("%s", &parts[i].serial);
		while (getchar() != '\n');
		printf("enter the manufacturing year: ");
		scanf("%d", &parts[i].manu_year);
		printf("enter the material: ");
		scanf("%s", &parts[i].material);
		printf("enter the quantity: ");
		scanf("%d", &parts[i].quantity);
	}
	printf("\ndetails of body parts whose serial number is between BB1 and CC6.\n");
	for(i=0; i<n; i++){
		if((strcmp(parts[i].serial, "BB1") >=0)  && (strcmp(parts[i].serial, "CC6") <= 0)){
			printf("\nPart %d\n", i+1);
			printf("Serial number: %s\n", parts[i].serial);
			printf("Manufactiring year: %d\n", parts[i].manu_year);
			printf("Material: %s\n", parts[i].material);
			printf("Quantity: %d\n", parts[i].quantity);
		}
	}
}

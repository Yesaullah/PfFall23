/*
	Name: Mohammad Yesaulah Sheikh
	Description: Sorting arrays of prices and ages for shirts.
*/

#include <stdio.h>

int main() {
    int shirtAges[6] = {25, 18, 40, 30, 60}; //array for the ages
    int shirtPrices[6] = {20, 13, 18, 35, 50}; //array for the prices 

    printf("Original list:\n"); //printing the original arrays
    printf("S.no  Age   Price\n");
    int i, j;
    for (i = 0; i < 5; i++) {
        printf("%d)    %d    %d\n", i + 1, shirtAges[i], shirtPrices[i]);
    }
    int tempAge, tempPrice; //teporary variables 
    // loop in which the code is written to sort the list with respect to age 
    for (i=0; i<4; i++) 
	{
        for(j=0; j<4-i; j++) 
		{
            if (shirtAges[j] > shirtAges[j+1]) 
			{
                tempAge=shirtAges[j];
                shirtAges[j]=shirtAges[j+1];
                shirtAges[j+1]=tempAge;
                tempPrice=shirtPrices[j];
                shirtPrices[j]=shirtPrices[j+1];
                shirtPrices[j+1]=tempPrice;
            }
        }
    }
	// printing the arrays for the age in ascending order
    printf("\nList with respect to age in ascending order:\n");
    printf("S.no  Age   Price\n");
    for (i=0; i<5; i++) {
        printf("%d)    %d    %d\n", i+1, shirtAges[i], shirtPrices[i]);
    }
    //loop in which the code is written to sort the list with respect to prices in descending order
    for (i=0; i<4; i++) {
        for (j=0; j<4 - i; j++) {
            if (shirtPrices[j] < shirtPrices[j + 1])
			{           
            	tempPrice = shirtPrices[j];
                shirtPrices[j] = shirtPrices[j+1];
                shirtPrices[j+1] = tempPrice;   
                tempAge = shirtAges[j];
                shirtAges[j] = shirtAges[j + 1];
                shirtAges[j + 1] = tempAge;
            }
        }
    }
    // printing the array for the prices in descending order.
    printf("\nList with respect to price in descending order:\n");
    printf("S.no  Age   Price\n");
    for (i = 0; i < 5; i++) {
        printf("%d)    %d    %d\n", i+1, shirtAges[i], shirtPrices[i]);
    }
}


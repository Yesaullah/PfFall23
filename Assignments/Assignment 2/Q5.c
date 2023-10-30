/*
	Name: Mohammad Yesaullah Sheikh
	Date: 24/10/2023
	Description: Finding Ramanujan-Hardy numbers less than cube of n.
*/

#include <stdio.h>

int main() {
    int n; //variable for the number of Ramanujan-Hardy numbers 
    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("Ramanujan-Hardy numbers less than the cube of n are:\n", n);
	int temp, sum;
    int i, j, k, l; //variables to control loops
    //loop for determining the Ramanujan-Hardy numbers through calculations
    for(i=1; i<n; i++){
        for(j=i; j<n; j++){
            temp=i*i*i+j*j*j;
            for(k=i+1; k<n; k++){
                for(l=k; l<n; l++){
                    sum=k*k*k+l*l*l;
                    if (temp==sum) {
                        printf("%d, ", temp);
                    }
                }
            }
        }
    }
}


/*
	Name: Mohammad Yesaullah Sheikh
	Date: 31/10/2023
	Description: Modification of code which swaps the value of two integers.
	Mistake: In the swap() function in line 6, b is assigned the value of a which stores the  value of by then and no pointers were used.
*/

#include <stdio.h>

void swap(int *a, int *b); //function which willl swap the values

int main(){
	int j=2;
	int k=5;
	printf("j=%d and k=%d\n", j, k);
	swap(&j, &k);
	printf("j=%d and k=%d", j, k);
	return 0;
} //end main

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

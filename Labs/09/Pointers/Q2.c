/*
	Name: Mohammad Yesaullah Sheikh
	Date: 31/10/2023
	Description: Reversing the array using pointers
*/

#include <stdio.h>

void reverse(int *arr, int size);

int main(){
	int arr[10];
	int i;
	//taking inputs in the array
	for(i=0; i<10; i++){
		printf("Enter the %d value in array: ", i+1);
		scanf("%d", &arr[i]);
	}
	//printing the array 
	printf("The array you input is:\n ");
	for(i=0; i<10; i++){
		printf("%d, ", arr[i]);
	}
	reverse(arr, 10);
	//printing the reversed array
	printf("\nThe reversed array is:\n ");
	for(i=0; i<10; i++){
		printf("%d, ", arr[i]);
	}
}
//defining the array which reverses the array
void reverse(int *arr, int size) {
    int i;
    int j;
    int temp; //temporarily stores the value of array element to allow swapping
    //i and j are to control loops condition
    i = 0;
    j = size - 1;
	// the loop which reverses the array
    while (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}


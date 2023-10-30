/*
	Name: Mohammad Yesaullah Sheikh
	Date: 24/10/2023
	Description: Finding two numbers in an array whose sum is equal to t.
*/
#include <stdio.h>

int main(){
	int n;
	printf("enter the size of array: ");
	scanf("%d", &n);
	int arr[n];
	int i;
	//taking inputs for the array
	for(i=0; i<n; i++){
		printf("enter %d number: ", i+1);
		scanf("%d", &arr[i]);
	}
	//taking input for 't'
	int t;
	int sum;
	printf("enter a integer value for t: ");
	scanf("%d", &t);
	//doing calculations to determine the sum equal to 't'
	int k;
	printf("The pair of numbers whose sum is equal to %d are:\n", t);
	for(i=0; i<n; i++){
		sum=arr[i];
		for(k=1; k<n; k++){
			sum+=arr[k];
			if(sum==t){
				printf("%d, %d", arr[i], arr[k]);
				arr[k]=0;
				printf("\n");
				break;
			}
			else{
				sum=arr[i];
			}
		}
	}
}

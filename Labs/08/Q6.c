/*
	Programmer name: M.Yesaullah Sheikh
	Date: 24/10/2023
	Description: Determining the sum of all values along with max and min values in an array using userdefined functions.
*/

#include <stdio.h>

void processArray(int arr[], int n);

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int i;

    // Taking inputs for the array
    for (i=0; i<n; i++) 
	{
        printf("Enter element %d in the array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    processArray(arr, n); // Call the function that performs calculations
}//end main
//function to determine the max, min and calculate the sum
void processArray(int arr[], int n) 
{
    int sum = 0, max = arr[0], min = arr[0];
    int i;

    for (i = 0; i < n; i++) 
	{
        sum += arr[i];
        if (arr[i] < min) 
		{
            min = arr[i];
        }
        if (arr[i] > max) 
		{
            max = arr[i];
        }
    }
	//printing the sum, max and min
    printf("The sum of all the elements in the array is: %d\n", sum);
    printf("The max value in the array is: %d\n", max);
    printf("The minimum value in the array is: %d\n", min);
}//end processArray


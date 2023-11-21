/* 
	Name: Yesaullah Sheikh 
	desc: swapping two variables using XOR operator for different data types
*/

#include <stdio.h>
//function to swap values of integers
void swapping(void *ptr1, void *ptr2, size_t size) {
	unsigned char *bytePtr1 = (unsigned char *)ptr1;
    unsigned char *bytePtr2 = (unsigned char *)ptr2;
    while (size--) {    	
        *bytePtr1 = *bytePtr1 ^ *bytePtr2;
        *bytePtr2 = *bytePtr1 ^ *bytePtr2;
        *bytePtr1 = *bytePtr1 ^ *bytePtr2;
        bytePtr1++;
        bytePtr2++;
    }
}

int main() {
	//integer datatypes 
    int a, b;
	//taking inputs
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
	printf("\nBefore swapping:\na=%d, b=%d\n", a, b);
    //calling swapping functions 
	swapping(&a, &b, sizeof(int));
    printf("\nAfter swapping:\na=%d, b=%d\n", a, b);
    
	//double datatype 
    double c, d;
	//taking inputs 
    printf("\nEnter the first double: ");
    scanf("%lf", &c);
    printf("Enter the second double: ");
    scanf("%lf", &d);
	//calling swapping function 
    printf("\nBefore swapping:\nc=%.2f, d=%.2f\n", c, d);
    swapping(&c, &d, sizeof(double));
    printf("\nAfter swapping:\nc=%.2f, d=%.2f\n", c, d);
    
	//Character datatype 
    char char1, char2;
	//taking inputs 
    printf("\nEnter the first character: ");
    scanf(" %c", &char1); 
    printf("Enter the second character: ");
    scanf(" %c", &char2); 
    printf("\nBefore swapping: char1=%c, char2=%c\n", char1, char2);
    //calling swapping function
    swapping(&char1, &char2, sizeof(char));
    printf("\nAfter swapping: char1=%c, char2=%c\n", char1, char2);
}

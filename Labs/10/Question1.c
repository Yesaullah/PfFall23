/*
	 Name: Yesaullah Sheikh
	 Desc: Creating a universal array printing function.
*/

#include <stdio.h>
#include <stdlib.h>

enum DataType{
    INT,
    DOUBLE,
    CHAR,
};

void printArray(void *arr, size_t size, size_t elementSize, enum DataType datatype) {
    char *ptr = (char *)arr;
    size_t i;
    
    for ( i = 0; i < size; ++i) {
        switch (datatype) {
            case INT:
                printf("%d", *((int *)ptr));
                break;
            case DOUBLE:
                printf("%.2f", *((double *)ptr));
                break;
            case CHAR:
                printf("%c", *((char *)ptr));
                break;
        }

        ptr += elementSize;

        if (i < size - 1) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {
    int *intArray = (int *)malloc(5 * sizeof(int));
    double *doubleArray = (double *)calloc(5, sizeof(double));
    char *charArray = (char *)realloc(NULL, 5 * sizeof(char));
    int i;
    for ( i = 0; i < 5; ++i) {
        intArray[i] = i + 1;
        doubleArray[i] = (i + 1) * 1.1;
        charArray[i] = 'a' + i;
    }

    //printing integer array
    printf("Printing intArray: ");
    printArray(intArray, 5, sizeof(int), INT);

    //printing double array
    printf("Printing doubleArray: ");
    printArray(doubleArray, 5, sizeof(double), DOUBLE);

    //printing char array
    printf("Printing charArray: ");
    printArray(charArray, 5, sizeof(char), CHAR);

    //freeing the memory 
    free(intArray);
    free(doubleArray);
    free(charArray);
}

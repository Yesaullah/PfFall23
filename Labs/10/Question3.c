#include <stdio.h>
#include <stdlib.h>

int is_prime(int n){
    if (n<=1){
        return 0; //this means that if the number of integers to be checked is less than 1 than there will be no prime numbers.
    }
    int i;
    for (i=2; i*i<=n; i++){
        if (n%i==0){
            return 0;
        }
    }
}

void fill(int **arr, int r, int c){
    int n=2;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            while (!is_prime(n)){
                n++;
            }
            arr[i][j] = n;
            n++;
        }
    }
}

int main(){
    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int **arr = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++) {
        arr[i] = (int *)malloc(c * sizeof(int));
    }

    fill(arr, r, c);

    printf("2D array of consecutive prime numbers:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < r; i++) {
        free(arr[i]);
    }
    free(arr); //this will free up the memory space allocated to array arr.
}


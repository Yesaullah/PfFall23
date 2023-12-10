#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void displayStudentInfo(char studentId[]);
void getMaxSubMatrix(int row, int col, int **arr, int **newArr);

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *filePtr = fopen(argv[1], "r");

    if (filePtr == NULL) {
        printf("FILE DIDN'T OPEN, PROGRAM ENDS!\n");
        return 1;
    }

    char studentId[8];
    printf("Enter Student ID: ");
    int i, j;
    getchar();
    fgets(studentId, 8, stdin);

    int rows, cols;
    printf("Enter Rows, Columns of the Matrix: ");
    scanf("%d %d", &rows, &cols);

    int **arr = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++)
        arr[i] = (int *)malloc(cols * sizeof(int));

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            fscanf(filePtr, "%d", &arr[i][j]);
    }

    int **newArr = (int **)calloc(rows / 2, sizeof(int *));
    for (i = 0; i < rows / 2; i++)
        newArr[i] = (int *)calloc(cols / 2, sizeof(int));

    getMaxSubMatrix(rows, cols, arr, newArr);

    displayStudentInfo(studentId);
    printf("New Sub-Matrix:\n");
    for (i = 0; i < rows / 2; i++) {
        for (j = 0; j < cols / 2; j++)
            printf("%d ", newArr[i][j]);
        printf("\n");
    }

    fclose(filePtr);

    for (i = 0; i < rows; i++)
        free(arr[i]);
    free(arr);

    for (i = 0; i < rows / 2; i++)
        free(newArr[i]);
    free(newArr);

    return 0;
}

void getMaxSubMatrix(int row, int col, int **arr, int **newArr) {
    int newRow = 0, newCol = 0;
    int i, j, a, b;

    for (i = 0; i < row; i += 2) {
        newCol = 0;
        for (j = 0; j < col; j += 2) {
            int largest = arr[i][j];
            for (a = i; a < i + 2; a++) {
                for (b = j; b < j + 2; b++) {
                    if (arr[a][b] > largest)
                        largest = arr[a][b];
                }
            }
            newArr[newRow][newCol] = largest;
            newCol++;
        }
        newRow++;
    }
}

void displayStudentInfo(char studentId[]) {
    int i;
    printf("Name: Mohammad Yesaullah Sheikh\nStudent ID: ");
    for (i = 3; i < strlen(studentId); i++)
        printf("%c", studentId[i]);
    printf("\n");
}


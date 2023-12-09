/*
	Name:Mohammad Yesaullah 
	Description: Merges records of same employees from 2 different files
*/

#include <stdio.h>
#include <stdlib.h>

void merge();

int main() {
    int id;

    printf("				Yesaullah Sheikh	|	23k-0019");
    
    //taking input for the id
    printf("\n\nEnter the record ID: ");
    scanf("%d", &id);
	//calling the user defined function which will merge and write the data
    merge(id); 
}

void merge(int id){
    //Opening already created two files
    
    //FILE 1
    FILE *personal_file = fopen("Personal.txt", "r");
    //error handling
	if (personal_file == NULL) {
        printf("Error opening Personal.txt");
        exit(EXIT_FAILURE);
    }
    
	//FILE 2
    FILE *department_file = fopen("Department.txt", "r");
    //error handling
	if (department_file == NULL) {
        printf("Error opening Department.txt");
        fclose(personal_file); //closing the file
        exit(EXIT_FAILURE);
    }

    //Opening the third file
    FILE *combine_file = fopen("Combine.txt", "a");
    
	if (combine_file == NULL) {
        printf("Error opening Combine.txt");
        //closing the files
		fclose(personal_file);
        fclose(department_file);
        exit(EXIT_FAILURE);
    }
    
    int personal_id, department_id, salary;
    char name[50];//string to store the nae 

    //searching the id input in personal.txt file
    while (fscanf(personal_file, "%d,%s", &personal_id, name) == 2){
		if (personal_id == id) {
            
            fseek(department_file, 0, SEEK_SET);

            while (fscanf(department_file, "%d,%d", &department_id, &salary) == 2) {
                if (department_id == id) {
                    fprintf(combine_file, "%d,%s,%d\n", id, name, salary);
                    printf("Data with id %d is added in combine.txt\n", id);
                    break;
                }
            }
            break; 
        }
    }

    //closing the files
    fclose(personal_file);
    fclose(department_file);
    fclose(combine_file);
}

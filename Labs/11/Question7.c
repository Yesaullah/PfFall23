/*
	Name: Mohammad Yesaullah Sheikh
	desc: Library menu.
*/

#include <stdio.h>
#include <stdbool.h>
struct book{
	int acc_num;
	char author[30];
	char title[50];
	bool flag;
	int n_book;
};

int main() {
   // structs books data.number_books={0};
    struct book data[100] = {
        {2001, "Agatha Christie", "Murder On The Orient Express", false, 2},
		{2002, "Agatha Christie", "And Then There Were None", true, 2},
		{2003, "Agatha Christie", "The Murder of Roger Ackroyd", false, 3},
		{2004, "Stephen King", "The Shining", false, 3},
		{2005, "Stephen King", "It", true, 4},
		{2006, "J.K. Rowling", "Harry Potter and the Sorcerer's Stone", false, 4},
		{2007, "J.K. Rowling", "Harry Potter and the Prisoner of Azkaban", true, 5},
		{2008, "J.K. Rowling", "Harry Potter and the Deathly Hallows", true, 5},
		{2009, " George Orwell", "1984", false, 6},
		{2010, "C.S. Lewis", "The Chronicles of Narnia", true, 1}
    };
    
    int a = 10;

    int choice;
    while (1) {
        printf("Welcome to our library:\n");
        printf("Enter 1 to display information for a book\n");
        printf("Enter 2 to add a new book\n");
        printf("Enter 3 to display all the books in the library of a particular author\n");
        printf("Enter 4 to display number of books of a particular title\n");
        printf("Enter 5 to display the total number of books in the library\n");
        printf("Enter 6 to issue a book\n");
        printf("Enter 7 to quit\n");
        scanf("%d", &choice);

        if (choice == 7) {
            break;
        }
		int i;
        //char name[100];
        int num;
        int total = 0;
        char book[50];
        char author[50];
        char name[50];
        char book_temp[50];
        bool flag = false;
        switch (choice) {
            case 1:
                printf("Enter book accession number: ");
                scanf("%d", &num);
                flag = false;
                for (i = 0; i < 100; i++) {
                    if (num == data[i].acc_num) {
                        printf("Book %d:\n", i + 1);
                        printf("Accession Number: %d\n", data[i].acc_num);
                        printf("Author: %s\n", data[i].author);
                        printf("Book Name: %s\n", data[i].title);
                        printf("Availability: %s\n", data[i].flag ? "Available" : "Not Available");
                        //flag = true;
                        printf("\n");
                        break;
                    }
                }
                if (!flag) {
                    printf("Sorry book is not available\n");
                }
                break;
            case 2:
                printf("Enter book name: ");
                scanf("%s", &name);
                while (getchar() != '\n');
                //getchar();
                //fgets(name, sizeof(name), stdin);
                //name[strcspn(name, "\n")] = '\0';  // Remove the trailing newline
                for (i=0; i<100; i++){
                    if (strcmp(name, data[i].title) == 0){
                        data[i].n_book++;
                        flag = true;
                        printf("Book added to the library\n");
                        break;
                        printf("\n");
                    }
                }
                if (!flag) {
                    printf("Enter the data related to your book:\n");
                    printf("Accession number: ");
                    scanf("%d", &data[a].acc_num);
                    printf("Author: ");
                    scanf("%s", data[a].author);
                    while (getchar() != '\n');
                    printf("Book title: ");
                    scanf("%s", data[a].title);
                    while (getchar() != '\n');
                    printf("Availability: ");
                    scanf("%d", &data[a].flag);
                    printf("Number of books: ");
                    scanf("%d", &data[a].n_book);
                    a++;
                }
                printf("\n");
                break;
            case 3:
                printf("Enter author name: ");
                scanf("%s", &author);
                while (getchar() != '\n');
                for (i = 0; i < 100; i++) {
                    if (strcmp(author, data[i].author) == 0) {
                        printf("\nBook %d:\n", i + 1);
                        printf("Accession Number: %d\n", data[i].acc_num);
                        printf("Author: %s\n", data[i].author);
                        printf("Book name: %s\n", data[i].title);
                        printf("Availability: %s\n", data[i].flag ? "Available" : "Not Available");
                        printf("Number of this respective book: %d\n", data[i].n_book);
                        flag = true;
                    }
                }
                if (!flag) {
                    printf("Sorry no book from this author is available\n");
                }
                printf("\n");
                break;
            case 4:
                printf("Enter book name: ");
                scanf("%s", &book_temp);
                while (getchar() != '\n');
                for (i = 0; i < 100; i++) {
                    if (strcmp(book_temp, data[i].title) == 0) {
                        printf("Number of Books: %d\n", data[i].n_book);
                        flag = true;
                        printf("\n");
                        break;
                    }
                }
                if (!flag) {
                    printf("Sorry no such book available\n");
                }
                printf("\n");
                break;
            case 5:
                for (i = 0; i < a; i++) {
                    total = total + data[i].n_book;
                }
                printf("%d is the total number of books in the library\n", total);
                printf("\n");
                break;
            case 6:
                printf("Enter name of the book you want to issue: ");
                scanf("%s", &book);
                while (getchar() != '\n');
                for (i = 0; i < 100; i++) {
                    if (strcmp(book, data[i].title) == 0) {
                        data[i].n_book--;
                        flag = true;
                        printf("\n");
                        break;
                    }
                }
                if (!flag) {
                    printf("Sorry not available\n");
                }
                printf("\n");
                break;

            default:
                printf("Invalid choice\n");
                printf("\n");
        }
    }
}

/*
	Name: Yesaullah Sheikh
	desc: Reversing the words in a sentence while keeping the order of the sentences same.
*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

//declaring the function which will do reversing
void reverse(char *begin, char *end);

//delaring the function which will reverse each word in a sentence 
void reverse_words(char *sent);

int main() 
{
    int max_len=1000;
    char *sent = (char *)malloc(max_len* sizeof(char));
	if (sent == NULL) 
	{
        printf("Memory allocation failed.\n");
        return 1; 
    }
    //taking input for the sentence 
    printf("enter the sentence with a space in the beginning: ");
    fgets(sent, max_len, stdin);

    //removing the newline character from the input
    sent[strcspn(sent, "\n")] = '\0';

    //reversing each word in the sentence
    reverse_words(sent);

    //printing the reversed sentence 
    printf("reversed sentence is:\n %s", sent);

    //freeing the memory which was allocated using malloc
    free(sent);
}

//defining the function which will do the reversing
void reverse(char *begin, char *end) {
    char temp;
    while (begin<end) {
        temp=*begin;
        *begin=*end;
        *end=temp;
        begin++;
        end--;
    }
}

//defining the function which will reverse each word in the sentence 
void reverse_words(char *sent) 
{
	char *begin=sent;
    char *end=sent;
    int len=strlen(sent); //determining the length 0f the sentence 
	//calling the reverse function to reverse th entire sentence 
    reverse(begin, begin+len-1);
    
    while (*end) 
	{
		//if the sentence ends or a space is reached
        if (*end==' ' || *end=='\0') 
		{
			//calling reverse function to reverse the word 
        	reverse(begin, end-1);
            begin=end+1;
        }
        end++;
    }
    //calling function again to reverse the first and last words of the sentence 
    reverse(sent, sent+len-1);
}

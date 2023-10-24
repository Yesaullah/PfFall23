/*
	Programmer name: M.Yesaullah Sheikh
	Date: 24/10/2023
	Description: Validation and verification of the user entered password with respect to an already stored password.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char user_pass[50]; //supposing that the maximum length of the password is 50
	char stored_pass[]="secure123";
	
	//taking password input
	printf("Enter your password: ");
	scanf("%s", user_pass);
	
	//validating the length of the password
	if(strlen(user_pass)<8)
	{
		printf("Invalid password. Password must contain at least 8 characters.");
	}
	//comparing the stored and input password
	else 
	{
        if(strcmp(user_pass, stored_pass) == 0) 
		{
            printf("Login successful. Welcome!\n");
        } 
		else 
		{
            printf("Login failed. Incorrect password.\n");
        }
	}
}

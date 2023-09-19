#include <stdio.h>
#include <math.h>

int main()
{
	int n1;
	int n2;
	char op;
	int ans;
	
	printf("Enter an operator:");
	scanf("%c", &op);
	printf("\n");
	printf("Enter first number:");
	scanf("%d", &n1);
	printf("\n");
	printf("Enter second number:");
	scanf(" %d", &n2);
	
	switch (op)
	{
		case '+' :
			ans = n1 + n2;
			break;
		case '-' :
			ans = n1 - n2;
			break;
		case '*' :
			ans = n1 * n2;
			break;
		case '/' :
			ans= n1 / n2;
			break;
		default :
			printf("Enter a valid operator");
	}
	printf("%d", ans);
}

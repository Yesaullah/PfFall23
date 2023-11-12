#include<stdio.h>

int Mul(int n); //Userdefined function to determine persistence 

int main()
{
    int n=0;
	//taking input for an integer on which calculations will be done 
    printf("enter an integer : ");
    scanf("%d", &n);
    int pers=0; 
	//loop in which calculations will be done on the integer.
    while(n/10!=0 && Mul(n)!=0)
	{
        printf("%d ", n);
        n=Mul(n);
        pers=pers+1;
    }
    printf("\nPersistence of %d is equals to %d", n, pers);
}
//defining the function Mul 
int Mul(int n)
{
	//making use of recursion here.
    if(n==0)
	{
        return 1;
    }
    return n%10*Mul(n/10);
}

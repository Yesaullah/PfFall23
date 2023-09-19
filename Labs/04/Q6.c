#include<stdio.h>
#include<math.h>

int main() {
    
	int n=0;
	printf("Enter Value of n:  ");          
    scanf("%d", &n);
	int c=0;              
    int c2;
    
    
    while(c< 2*n-1){           
        
        c2= 0;                 
        while(c2<abs(n-c-1)) 
		{                           
            printf(" ");
            c2=c2+1;
        }

        printf("*");
		
		if (c<n && c!= 0)
		{
            c2=0;                 
            while(c2<2*c-1)
			{                 
                printf(" ");
                c2=c2+1;
            }
            printf("*");
        }
        else if(c>=n && c!=2*n-2)
		{
            c2=0;
            while (c2<(4*n)-(2*c)-5)
            {
                printf(" ");
                c2=c2+1;
            }
            printf("*");
        }
        printf("\n");
        c=c+1;
    }
}


#include<stdio.h>

int main() {

  int num;
  printf("enter your number:");
  scanf("%d",&num);
  
  int count1=0;
  while(count1<=num){
     int count2=1;
     while(count2<=count1){
        printf("* ");
        count2=count2+1;
     }
  printf("\n");
  count1=count1+1;
  }
}

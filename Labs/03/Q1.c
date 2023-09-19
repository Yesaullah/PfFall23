Question1:

#include <stdio.h>
#include <math.h>

 main(void) {
  float num1;
  float num2;
  char op;
  float ans;
  printf("enter your first number");
  scanf("%f",&num1);
  printf("enter your second number");
  scanf("%f",&num2);
  printf("enter the operator to be used");
  scanf(" %c",&op);
  
  if(op == '+') {
     ans=num1+num2;
  }
  else if(op == '-') {
     ans=num1-num2;
  }
  else if(op == '*') {
     ans=num1*num2;
  }
  else {
     ans=num1/num2;
  }
  printf("Your answer is");
  printf("%f",ans);
}

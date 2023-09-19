#include <stdio.h>
#include <math.h>

main() {
  float Perp;
     printf("Enter Length of perpendicular");
     scanf("%f",&Perp);
  float Base;
     printf("Enter length of base");
     scanf("%f",&Base);
  float Hyp;
  float Base_Sq;
  float Perp_Sq;
     Base_Sq=Base*Base;
     Perp_Sq=Perp*Perp;
  float Temp;
     Temp=Base_Sq+Perp_Sq;
  Hyp=sqrt(Temp);
  printf("The length of hypotenuse is");
  printf("%f",Hyp);
  return 1;
}

Question2:
#include <stdio.h>
#include <math.h>

int main() {
  int volume;
  int width;
  int height;
  int length;
  length=10;
  width=10
  height=20;
  volume=length*width*height;
  printf("%d",volume);
  return 1;
}

Question3:
#include <stdio.h>
#include <math.h>

float main() {
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
  printf("%f",Hyp);
  return 1;
}

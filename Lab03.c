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

int main() {
  int Perp;
     printf("Enter Length of perpendicular");
     scanf("%d",&Perp);
  int Base;
     printf("Enter length of base");
     scanf("%d",&Base);
  int Hyp;
  int Base_Sq;
  int Perp_Sq;
     Base_Sq=Base*Base;
     Perp_Sq=Perp*Perp;
  int Temp;
     Temp=Base_Sq+Perp_Sq;
  Hyp=sqrt(Temp);
  printf("%d",Hyp);
  return 1;
}

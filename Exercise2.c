#include<stdio.h>
#include<math.h>
int main(){
  double a,b,c;
  printf("Enter the value of a: ");
  scanf("%lf",&a);
  printf("Enter the value of b: ");
  scanf("%lf",&b);
  printf("Enter the value of c: ");
  scanf("%lf",&c);
  for (int t= 1;t<=60;t++) 
    printf("%i2\t\t%lf\t\t%lf\n",t, a*exp(b*t)*sin(c*t),a*exp(b*t)*cos(c*t));
  
return 0;
}
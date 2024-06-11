#include <stdio.h>
#include <math.h>
#include <stdint.h>

int main(){
    int a,b,x;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of x:");
    scanf("%d",&x);

    double side=sqrt(a^2+b^2)-2*a*b*cos(x);

    printf("Side=%lf",side);
    



    return 0;
}
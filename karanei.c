#include<stdio.h>
#include<math.h>

int main() {
float X1,X2,Y1,Y2;
    printf("Enter X1:");
    scanf("%f",&X1);
     printf("Enter X2:");
    scanf("%f",&X2);
     printf("Enter Y1:");
    scanf("%f",&Y1);
     printf("Enter Y2:");
    scanf("%f",&Y2);
float d=sqrt(((X1-X2)*(X1-X2))+((Y1-Y2)*(Y1-Y2)));
   printf("%f",d);
;

    return 0;
}
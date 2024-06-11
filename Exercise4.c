#include<stdio.h>
#include<math.h>

int main(){
    float SIDE_A,SIDE_B,SIDE_C;
    printf("Enter length of side A:");
    scanf("%f",&SIDE_A);
    printf("Enter length of side B:");
    scanf("%f",&SIDE_B);
    printf("Enter length of side C:");
    scanf("%f",&SIDE_C);

    if(SIDE_A==SIDE_B&&SIDE_B==SIDE_C){
        printf("Equilateral triangle \n");
    }
    else if(SIDE_A==SIDE_B&&SIDE_B!=SIDE_C||SIDE_A==SIDE_C&&SIDE_C!=SIDE_B||SIDE_B==SIDE_C&&SIDE_C!=SIDE_A){
        printf("Isoscles triangle");
    }
    else{
        printf("Scalene triangle");
    }








return 0;
}
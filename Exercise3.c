// School grading system for assignments
#include<stdio.h>
#include <math.h>
double Mathematics,English,Kiswahili,Mean;
double mean(){
    Mean=( (Mathematics+English+Kiswahili)/3);
}
double grade(){
    if (Mean>=70)
    {
        printf("Your grade is: A \n");
    }
    else if(40<=Mean<70){
        printf("Your grade is:B\n");
    }
    else{
        printf("Your grade is:F\n");
    }
}

int main(){
    int students;
    for(students=3;students>0;students--){
    printf("Enter Mathematics mark here:");
    scanf("%lf",&Mathematics);
    printf("Enter English mark here:");
    scanf("%lf",&English);
    printf("Enter Kiswahili mark here:");
    scanf("%lf",&Kiswahili);
    mean();
    printf("%lf\n",Mean);
    grade();
    }
   return 0;
}
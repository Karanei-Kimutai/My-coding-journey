#include <stdio.h>
#include <math.h>


int number_of_days,number_of_weeks,number_of_remaining_days;
int weeks_and_days_computation(){
    number_of_weeks=number_of_days/7;
    number_of_remaining_days=number_of_days%7;
    if(number_of_remaining_days!=0){
    printf("The number of weeks is %d and the number of remaining days is %d",number_of_weeks,number_of_remaining_days);
    }
    else{
        printf("The number of weeks is %d",number_of_weeks);
    }
}

int main(){
    printf("Enter number of days:");
    scanf("%d",&number_of_days);
    weeks_and_days_computation();



    return 0;
}
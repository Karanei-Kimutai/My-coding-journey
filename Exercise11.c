#include <stdio.h>
#include <math.h>

int main(){
   int number_of_days,number_of_weeks,number_of_remaining_days;
    printf("Enter the number of days:");
    scanf("%d",&number_of_days);
    number_of_weeks=number_of_days/7;
    number_of_remaining_days=number_of_days%7;
    if(number_of_remaining_days!=0){
    printf("The number of weeks is %d and the number of remaining days is %d",number_of_weeks,number_of_remaining_days);
    }
    else{
        printf("The number of weeks is %d",number_of_weeks);
    }
    
   


 return 0;
}
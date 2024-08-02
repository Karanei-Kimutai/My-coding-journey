/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.

Additionally, if the number is negative, return 0.

Note: If the number is a multiple of both 3 and 5, only count it once.*/
#include<stdio.h>
#include<math.h>
int main(){
  int input_number;
  int sum_of_multiples_of_3_and_5=0;
  printf("Enter number here:");
  scanf("%d",&input_number);
  input_number=input_number-1;
  if(input_number>=0){
  while(input_number>=0){
    if((input_number%3)==0&&(input_number%5)==0){
             sum_of_multiples_of_3_and_5+=input_number;
       }
    else if(((input_number%3)==0&&(input_number%5)!=0)||(input_number%5)==0&&(input_number%3)!=0){
            sum_of_multiples_of_3_and_5+=input_number;
    }
    input_number--;
  }
  }
  else{
    return 0;
  }
  printf("%d",sum_of_multiples_of_3_and_5);
  
  
  
  return 0;
}
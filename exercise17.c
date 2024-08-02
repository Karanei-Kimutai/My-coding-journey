#include <stdio.h>
#include<math.h>

int main(){
    int number;
    printf("Enter number here:");
    scanf("%d",&number);
    int sum=0,i=0;
    do{
        if((i%2)==0){
            sum+=i;
        }
        i++;
    }
    while(i<number);
    printf("the sum of even numbers is %d",sum);


    return 0;
}
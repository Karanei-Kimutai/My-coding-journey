#include <stdio.h>
#include <math.h>
int temperature;
int temperature_function(){
    if(temperature<=10){
        printf("A bit chilly there mate,consider wearing warm clothing");
    }
    else if(temperature>10&&temperature<=23){
        printf("A comfortably warm day");
    }
    else if(temperature>23&&temperature<50){
        printf("A bit hot, wear light clothing");
    }
    else{
        printf("Don't go outside");
    }
}
int main(){
    printf("Enter the temperature here:");
    scanf("%d",&temperature);
    temperature_function();

    return 0;
}
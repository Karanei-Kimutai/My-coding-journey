#include <stdio.h>

int main(){
    int temperature;
    printf("Enter the temperature here:");
    scanf("%d",&temperature);
    if(temperature<=0){
        printf("Freezing cold outside.");
    }
    else if(temperature>0&&temperature<=19){
        printf("Some chilly weather, wear warm clothing");
    }
    else if(temperature>19&&temperature<28){
        printf("Warm weather");
    }
    else if(temperature>=28&&temperature<50){
        printf("It's hot outside");
    }
    else{
        printf("Invalid input");
    }




    return 0;
}
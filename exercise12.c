#include <stdio.h>
#include <math.h>

int main(){
    double inductance=0.9,resistance=0.05,frequency,capacitance;
    printf("Capacitance\t\t\t\tFrequency\n");
    for(capacitance=0.01;capacitance<=0.1;capacitance+=0.01){
        frequency=pow(((inductance-(resistance*resistance))/4*capacitance*capacitance),0.5);
        printf("%.2lf\t\t\t\t\t%.6lf\n",capacitance,frequency);
        
    }

    
    
return 0;
}
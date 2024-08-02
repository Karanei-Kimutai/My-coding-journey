#include <stdio.h>
#include <math.h>


int main(){
    int account_number,number_of_kilowatt_hours,code;
    double bill;
    printf("Enter account number:");
    scanf("%d",&account_number);
    printf("Enter code(1=residential/2=Commercial/3=Industrial):");
    scanf("%d",&code);
    printf("Enter number of kilowatt hours:");
    scanf("%d",&number_of_kilowatt_hours);
    switch(code){
        case 1:
        bill=500+4.8*number_of_kilowatt_hours;
        break;
        case 2:
        if(number_of_kilowatt_hours>1000){
            bill=50000+(number_of_kilowatt_hours-1000)*3.75;
        }
        else{
            bill=50*number_of_kilowatt_hours;
        }
        break;
        case 3:
        int time_of_use;
        printf("Peak hours or off-peak hours?(1=peak,2=off-peak):");
        scanf("%d",&time_of_use);
        switch(time_of_use){
            case 1:
            if(number_of_kilowatt_hours>1000){
                bill=68000+(number_of_kilowatt_hours-1000)*5.6;
            }
            else{
                bill=68*number_of_kilowatt_hours;
            }
            break;
            case 2:
            if(number_of_kilowatt_hours>1000){
                bill=37000+(number_of_kilowatt_hours-1000)*2.75;
            }
            else{
                bill=37*number_of_kilowatt_hours;
            }
            break;
        }
        break;
        default:
        printf("Invalid code input");

    }
    printf("The bill for account number %d is %.2lf",account_number,bill);
    



    return 0;
}
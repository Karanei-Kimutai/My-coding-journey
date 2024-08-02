#include<stdio.h>
#include<math.h>

struct CDAccount{
    double loan_amount,balance;
    double interest_rate;
    int months_of_repayment;
};

int main(){
    struct CDAccount client;
    printf("Enter the loan amount the client wants to borrow:");
    scanf("%lf",&client.loan_amount);
    printf("Enter the intrest rate available for client:");
    scanf("%lf",&client.interest_rate);
    printf("Enter the number of months of repayment the client wants:");
    scanf("%d",&client.months_of_repayment);


    client.balance=client.loan_amount+(client.loan_amount*client.interest_rate*client.months_of_repayment);

    printf("\n\nFor the client:\nLoan amount requested:%.2lf\nInterest rate:%.2lf\nMonths of repayment:%d\nAmount to be repaid:%.2lf",client.loan_amount,client.interest_rate,client.months_of_repayment,client.balance);

    
    
   
    






    return 0;
}
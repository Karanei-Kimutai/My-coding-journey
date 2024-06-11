#include <stdio.h>
int main(){
    char name[15];
    printf("Enter name here:");
    gets(name);
    int year_of_birth,age,current_year;
    current_year=2024;
    printf("Enter year of birth:");
    scanf("%d",&year_of_birth);
    age=current_year-year_of_birth;
    printf("My name is %s,I am %d years old",name,age);

    return 0;
}
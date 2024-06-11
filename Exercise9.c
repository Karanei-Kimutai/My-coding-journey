#include <stdio.h>
#include <math.h>

struct student_data{
    char name[50];
    int age;
    int student_id;
};
int main(){
    struct student_data student1;
    printf("Enter age:");
    scanf("%d",&student1.age);
    printf("Enter name:");
    scanf("%s",student1.name);
    printf("Enter student id number:");
    scanf("%d",&student1.name);





    return 0;
}
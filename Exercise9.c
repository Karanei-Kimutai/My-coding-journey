#include <stdio.h>
#include <math.h>

/*struct student_data{
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
}*/
struct adress{
    char Area[20];
    char City[20];
};
struct student_information{
    char name[50];
    int age;
    int student_id;
    struct adress residential_adress;
    char employment_status[20];
};

int main(){
    struct student_information student1;
    printf("Enter name:");
    scanf("%s",student1.name);
    printf("\nEnter age:");
    scanf("%d",&student1.age);
    printf("\nEnter student id:");
    scanf("%d",&student1.student_id);
    printf("\nEmployment status:");
    scanf("%s",student1.employment_status);
    printf("\nEnter Area Adress:");
    scanf("%s", student1.residential_adress.Area);
    printf("\nEnter City:");
    scanf("%s",student1.residential_adress.City);
    
    
    




    return 0;
}
//using arrays,we will use this to enter marks of students into an array and then get the mean

#include <stdio.h>


#include <math.h>

int main(){
    int marks[10];
    int i;
    for(i=0;i<10;i+=1){
    printf("Enter the student's marks: ");
    scanf("%d",&marks[i]);
    }
    int number_of_students=sizeof(marks)/sizeof(marks[0]);
    printf("The number of entered marks is:%d\n",number_of_students);
    printf("Average=%d",(marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5]+marks[6]+marks[7]+marks[8]+marks[9])/number_of_students);

    






    return 0;
}
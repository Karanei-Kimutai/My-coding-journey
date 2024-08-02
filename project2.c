#include <stdio.h>
#include <math.h>


int average(int mathematics,int english,int kiswahili,int science,int social_studies_and_religious_education){
   return ((mathematics+english+kiswahili+science+social_studies_and_religious_education)/5);
}
int grade(double mean){
    printf("The mean of the student is %.2lf\n",mean);
     int situation;
        printf("Discrepancies?(1=N0,2=CHEATING,3=MISSING MARK):");
        scanf("%d",&situation);
        if(situation==1){
        if(mean>79){
        printf("The student's grade is A\n");
        }
        else if(mean<=79&&mean>=75){
        printf("The student's grade is A-\n");
        }
        else if(mean<75&&mean>=70){
        printf("The student's grade is B+\n");
        }
        else if(mean<70&&mean>=65){
        printf("The student's grade is B\n");
        }
        else if(mean<65&&mean>=60){
        printf("The student's grade is B-\n");
        }
        else if(mean<60&&mean>=55){
        printf("The student's grade is C+\n");
        }
        else if(mean<55&&mean>=45){
        printf("The student's grade is C\n");
        }
        else if(mean<45&&mean>=40){
        printf("The student's grade is C-\n");
        }
        else if(mean<40&&mean>=35){
        printf("The student's grade is D+\n");
        }
        else if(mean<35&&mean>=30){
        printf("The student's grade is D\n");
        }
        else if(mean<30&&mean>=25){
        printf("The student's grade is D-\n");
        }
        else if(mean<11&&mean>=0){
        printf("The student's grade is E\n");
        }
        }
        else if(situation==2){
        printf("The student grade is Y\n");
        }
        else if(situation==3){
        printf("The student grade is X\n");
        }
}

int main(){
    int mathematics,english,kiswahili,science,social_studies_and_religious_education;
    double mean;
    int number_of_students;
    printf("Enter number of students:");
    scanf("%d",&number_of_students);
    while (number_of_students<0)
    {
        printf("Invalid input, enter number of students again:");
        scanf("%d",&number_of_students);
    }
    int i;
    for(i=0;i<number_of_students;i++){
        printf("Enter mathematics mark:");
        scanf("%d",&mathematics);
        while(mathematics<0||mathematics>100){
        printf("Invalid input, enter mathematics mark again:");
        scanf("%d",&mathematics);
        }
        printf("Enter english mark:");
        scanf("%d",&english);
        while(english<0||english>100){
        printf("Invalid input, enter english mark again:");
        scanf("%d",&english);
        }
        printf("Enter kiswahili mark:");
        scanf("%d",&kiswahili);
        while(kiswahili<0||kiswahili>100){
        printf("Invalid input, enter kiswahili mark again:");
        scanf("%d",&kiswahili);
        }
        printf("Enter science mark:");
        scanf("%d",&science);
        while(science<0||science>100){
        printf("Invalid input, enter science mark again:");
        scanf("%d",&science);
        }
        printf("Enter social studies and religious education mark:");
        scanf("%d",&social_studies_and_religious_education);
        while(social_studies_and_religious_education<0||social_studies_and_religious_education>100){
        printf("Invalid input, enter social studies and religious education mark again:");
        scanf("%d",&social_studies_and_religious_education);
        }
        mean=average(mathematics,english,kiswahili,science,social_studies_and_religious_education);
        grade(mean);
       
    }
    return 0;
}
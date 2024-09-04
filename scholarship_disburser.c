//This program collects data from a scholarship applicant, checks their viability for various categories of scholarships and displays the amount the applicant is viable for.



#include <stdio.h>
#include <math.h>
struct Adress{
    int postal_adress;
    int postal_code;
    
};
struct individual_data{
    char name[50];
    int id_number;
    int phone_number;
    struct Adress adress;
    int birth_certificate_number;
    
}individual;
struct fathers_data{
    char name[50];
    int id_number;
    int phone_number;
    int employment_status;
    int monthly_income;
    struct Adress adress;
}father;
struct mothers_data{
    char name[50];
    int id_number;
    int phone_number;
    int employment_status;
    int monthly_income;
    struct Adress adress;
}mother;
struct institution_data{
    char name[50];
    int admission_number;
    int course_annual_fee;
}institution;


int main(){
    printf("Personal data collection:\n");
    printf("Enter your name(Use underscores(_) for spaces):");
    scanf("%s",&individual.name);
    printf("Id number:");
    scanf("%d",&individual.id_number);
    while(individual.id_number<0){
        printf("Invalid input, enter again.\n");
        printf("Id number:");
        scanf("%d",&individual.id_number);
    }
    printf("Phone number:");
    scanf("%d",&individual.phone_number);
    while(individual.phone_number<0){
        printf("Invalid input, enter again.\n");
       printf("Phone number:");
       scanf("%d",&individual.phone_number); 
    }
    printf("Adress information\n");
    printf("Postal adress:");
    scanf("%d",&individual.adress.postal_adress);
    while(individual.adress.postal_adress<0){
        printf("Invalid input, enter again.\n");
         printf("Postal adress:");
         scanf("%d",&individual.adress.postal_adress);
    }
    printf("Postal code:");
    scanf("%d",&individual.adress.postal_code);
    while(individual.adress.postal_code<0){
        printf("Invalid input, enter again.\n");
        printf("Postal code:");
        scanf("%d",&individual.adress.postal_code);
    }
    


    printf("\n\nFather's data:\n");
    printf("Enter Father's name(Use underscores(_) for spaces):");
    scanf("%s",&father.name);
    printf("Id number:");
    scanf("%d",&father.id_number);
    while(father.id_number<0){
        printf("Invalid input, enter again.\n");
        printf("Id number:");
        scanf("%d",&father.id_number);
    }
    printf("Phone number:");
    scanf("%d",&father.phone_number);
     while(father.phone_number<0){
        printf("Invalid input, enter again.\n");
       printf("Phone number:");
       scanf("%d",&father.phone_number); 
    }
    printf("Employment status(0-unemployed,1-employed):");
    scanf("%d",&father.employment_status);
    printf("Monthly income:");
    scanf("%d",&father.monthly_income);
    while(father.monthly_income<0){
         printf("Invalid input, enter again.\n");
         printf("Monthly income:");
         scanf("%d",&father.monthly_income);
    }
    printf("Adress information\n");
    printf("Postal adress:");
    scanf("%d",&father.adress.postal_adress);
   while(father.adress.postal_adress<0){
    printf("Invalid input, enter again.\n");
         printf("Postal adress:");
         scanf("%d",&father.adress.postal_adress);
    }
    printf("Postal code:");
    scanf("%d",&father.adress.postal_code);
    while(father.adress.postal_code<0){
        printf("Invalid input, enter again.\n");
         printf("Postal code:");
         scanf("%d",&father.adress.postal_code);
    }
   



    printf("\n\nMother's data:\n");
    printf("Enter mother's name(Use underscores(_) for spaces):");
    scanf("%s",&mother.name);
    printf("Id number:");
    scanf("%d",&mother.id_number);
     while(mother.id_number<0){
        printf("Invalid input, enter again.\n");
        printf("Id number:");
        scanf("%d",&mother.id_number);
    }
    printf("Phone number:");
    scanf("%d",&mother.phone_number);
    while(mother.phone_number<0){
        printf("Invalid input, enter again.\n");
       printf("Phone number:");
       scanf("%d",&mother.phone_number); 
    }
    printf("Employment status(0-unemployed,1-employed):");
    scanf("%d",&mother.employment_status);
    printf("Monthly income:");
    scanf("%d",&mother.monthly_income);
     while(mother.monthly_income<0){
         printf("Invalid input, enter again.\n");
         printf("Monthly income:");
         scanf("%d",&mother.monthly_income);
    }
    printf("Adress information\n");
    printf("Postal adress:");
    scanf("%d",&mother.adress.postal_adress);
     while(mother.adress.postal_adress<0){
         printf("Invalid input, enter again.\n");
         printf("Postal adress:");
         scanf("%d",&mother.adress.postal_adress);
    }
    printf("Postal code:");
    scanf("%d",&mother.adress.postal_code);
     while(father.adress.postal_code<0){
        printf("Invalid input, enter again.\n");
         printf("Postal code:");
         scanf("%d",&mother.adress.postal_code);
    }
    


    printf("Institution name:");
    printf("Enter Institution name(Use underscores(_) for spaces):");
    scanf("%s",&institution.name);
    printf("Admission number:");
    scanf("%d",&institution.admission_number);
    while(institution.admission_number<0){
        printf("Invalid input, enter again.\n");
        printf("Admission number:");
        scanf("%d",&institution.admission_number);
    }
    printf("Annual course fees:");
    scanf("%d",&institution.course_annual_fee);
     while(institution.course_annual_fee<0){
        printf("Invalid input, enter again.\n");
        printf("Admission number:");
        scanf("%d",&institution.course_annual_fee);
    }

    int total_monthly_income=mother.monthly_income+father.monthly_income;
    int level;
    int scholarship,tuition_loan,household_contibution,upkeep;
    if(total_monthly_income>=0&&total_monthly_income<=5995){
        level=1;
    }
    
    else if(total_monthly_income>5995&&total_monthly_income<=23670){
        level=2;
    }
    else if(total_monthly_income>23670&&total_monthly_income<=70000){
        level=3;
    }
    else if(total_monthly_income>70000&&total_monthly_income<=119999){
        level=4;
    }
    else if(total_monthly_income>119999){
        level=5;
    }

    switch(level){
        case 1:
        printf(
            "Scholarship -%.1lf\nTuition loan-%.1lf\nHousehold contribution-%.1lf\nUpkeeep-%d",
            0.7*institution.course_annual_fee,0.25*institution.course_annual_fee,0.05*institution.course_annual_fee,60000);
        break;
        case 2:
         printf(
            "Scholarship -%.1lf\nTuition loan-%.1lf\nHousehold contribution-%.1lf\nUpkeeep-%d",
            0.6*institution.course_annual_fee,0.3*institution.course_annual_fee,0.1*institution.course_annual_fee,60000);
        break;
        case 3:
         printf(
            "Scholarship -%.1lf\nTuition loan-%.1lf\nHousehold contribution-%.1lf\nUpkeeep-%d",
            0.5*institution.course_annual_fee,0.3*institution.course_annual_fee,0.2*institution.course_annual_fee,60000);
        break;
        case 4:
         printf(
            "Scholarship -%.1lf\nTuition loan-%.1lf\nHousehold contribution-%.1lf\nUpkeeep-%d",
            0.4*institution.course_annual_fee,0.3*institution.course_annual_fee,0.3*institution.course_annual_fee,60000);
        break;
        case 5:
         printf(
            "Scholarship -%.1lf\nTuition loan-%.1lf\nHousehold contribution-%.1lf\nUpkeeep-%d",
            0.3*institution.course_annual_fee,0.3*institution.course_annual_fee,0.4*institution.course_annual_fee,60000);
        break;
        default:
        printf("Category not available");
    }

    






    return 0;
}
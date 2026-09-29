#include<stdio.h>
int main(){
    int marks;
    printf("enter ur marks");
    scanf("%d",&marks);
    int attendence;
    printf("enter your attendence");
    scanf("%d",&attendence);
    int family_income;
    printf("enter your income");
    scanf("%d",&family_income);
    if(marks<50){
        printf("not eligable");
    }
    else if(attendence<75){
        printf("not eligable too low");

    }
    else if(family_income>800000){
        printf("not eligable;");
    }
    else{
        if(marks>=90 && attendence>=90){
            printf("full schloarship");
        }
        else if (marks>=75 && attendence>=85){
            printf("half scholarship");
        }
        else{
            printf("quater scholarship");
        }
    }
   
    return 0;

}
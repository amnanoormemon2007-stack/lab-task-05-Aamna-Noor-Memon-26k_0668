#include<stdio.h>
int main(){
    int age;
    printf("enter your age");
    scanf("%d",&age);
    int oxygen_level;
    printf("enter oxygen level");
    scanf("%d",&oxygen_level);
    int heart_rate;
    printf("enter heart rate");
    scanf("%d", &heart_rate);
    if(oxygen_level<90){
        printf("immediate attention");
    }
    else if(heart_rate>130 || heart_rate<40){
        printf("cardiac alert");
    }
    else if(age>=65 && oxygen_level<95){
        printf(" high priority");
    }
    else if( age <=5 &&heart_rate>110){
        printf("high priority");
    }
    else if(oxygen_level<97){
        printf("medium priority");
    }
    else{
        printf("low priority");
    }
    return 0;
}
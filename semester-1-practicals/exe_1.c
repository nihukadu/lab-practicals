#include<stdio.h>

int main(){
    int choice;
    float temp, C, F;

    printf("choice 1:convert C to F\n choice2: convert F to C\n Enter choice:");
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter Celsius:");
        scanf("%f", &temp);
        F =(temp * 9.0/5.0)+32;
        printf("F:%f\n", F);
    }else{
        printf("Enter Fahrenhit:");
        scanf("%f", &temp);
        C =(temp - 32) * 5.0/9.0;
        printf("C:%f", C);
    }
    return 0;
}
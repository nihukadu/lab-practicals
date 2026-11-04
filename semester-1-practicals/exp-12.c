#include<stdio.h>

int main(){
    float weight, height, BMI;

    printf("Enter weight: \n");
    scanf("%f", &weight);

    printf("Enter height: \n");
    scanf("%f", &height);

    BMI = weight / (height * height);
    printf("BMI value : %f", BMI);

    if(BMI < 18.5){
        printf("Underweight\n");
    }
    else if(BMI >= 18.5 && BMI < 25){
        printf("Normal\n");
    }
    else if(BMI >= 25 && BMI < 30){
        printf("Overweight\n");
    }
    else if(BMI >= 30){
        printf("Obese\n");
    }
    return 0;
}
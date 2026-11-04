#include<stdio.h>

int main(){
    int marks;

    printf("Enter marks (0 to 100): ");
    scanf("%d", &marks);

    if(marks <= 100 && marks >= 80){
        printf("Grade: A\n");
    }
    else if(marks >= 60 && marks <= 79){
        printf("Grade: B\n");
    }
    else if(marks >= 50 && marks <= 59){
        printf("Grade : C\n");
    }
    else if(marks >= 40 && marks <= 49){
        printf("Grade; D\n");
    }
    else{
        printf("Grade: F\n");
    }
    
    return 0;

}
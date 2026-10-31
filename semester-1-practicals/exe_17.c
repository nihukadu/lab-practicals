#include<stdio.h>

struct Student{
    char name[50];
    int roll;
    float marks;
};

int main(){
    struct Student a;
    printf("Enter name, roll no., marks:");
    scanf("%s %d %f", a.name, &a.roll , &a.marks);
    
    printf("\nStudent Tnformation\n");
    printf("Name: %s\n", a.name);
    printf("Roll no.: %d\n", a.roll);
    printf("Marks: %f\n", a.marks);

    return 0;
}
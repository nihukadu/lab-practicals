#include<stdio.h>

int main(){
    int n;
    int facto = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for( int i = 1; i <= n; i++){
        facto = facto * 1;
    }

    printf("Factorial of %d = %d", n, facto);

    return 0;
}
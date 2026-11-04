#include<stdio.h>

int main(){
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("Number \t Square \t Cube\n");
    
    for( int i = 1; i <= n; i++){
        printf("%d \t %d \t %d\n", i, i*i, i*i*i);
    }
    return 0;
}
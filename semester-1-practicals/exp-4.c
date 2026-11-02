#include<stdio.h>

int main(){
    int n;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    printf("odd numbers from 1 to %d are: \n", n);
    for( int i = 1; i <= n; i++){
        if( i % 2 != 0){

            printf("%d\n", i);
        }
    }
    return 0;
}
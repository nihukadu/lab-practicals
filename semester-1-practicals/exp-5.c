#include<stdio.h>

int main(){
    int n;
    int m;

    printf("Enter number of tables(n): ");
    scanf("%d", &n);

    printf("Enter number of rows(m): ");
    scanf("%d", &m);

    for(int i = 1; i <= n; i++){
        printf("Table of %d: \n", i);
        
        for(int j = 1; j <= m; j++){
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}
#include<stdio.h>

int main(){
    int row = 5;

    for(int i = 0; i < row; i++){
        for(int j = 0; j <= 1; j++){
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main(){

    int n, i, j;
    scanf("%d", &n);

    if(n % 2 == 0){
        for(i = 0; i < n; i++){
            printf("*");
        }
        printf("\n");
        for(i = 0; i < n-2; i++){
            printf("*");
            for(j = 0; j < n-2; j++){
                printf(" ");
            }
            printf("*\n");
        }
        for(i = 0; i < n; i++){
            printf("*");
        }
        printf("\n");
    }

    else{
        for(i = 0; i < (n+1)/2; i++){
            for(j = 0; j < (n-1)/2 -i; j++)
                printf(" ");
            for(j = 0; j < n - 2 *((n-1)/2 - i); j++)
                printf("*");
            for(j = 0; j < (n-1)/2 -i; j++)
                printf(" ");
            printf("\n");
        }
    }
}
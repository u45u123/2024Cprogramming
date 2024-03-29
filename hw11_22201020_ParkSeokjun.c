#include <stdio.h>

int main(){

    int n, i;
    int k = 1;

    printf("매직스퀘어로 만들기 원하는 15이하 홀수를 입력해주세요 : ");
    scanf("%d", &n);

    int row = 0;
    int col = n/2;

    int magicSquare[15][15] = { 0 };

    magicSquare[row][col] = k;
    k++;
    
    for(i = 1; i < n*n; i++){
        row--;
        if(row < 0)
            row = n-1;
        col--;
        if(col < 0)
            col = n-1;
        if(magicSquare[row][col] != 0)
            row++;
        magicSquare[row][col] = k;
        k++;   
    }

    for(i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            printf("%4d", magicSquare[i][j]);
        }
        printf("\n");
    }

    return 0;

}
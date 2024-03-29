#include <stdio.h>

int main(){

    int   sudoku[9][9] = { { 5, 3, 4, 6, 7, 8, 9, 1, 2 },

                           { 6, 7, 2, 1, 9, 5, 3, 4, 8 },

                           { 1, 9, 8, 3, 4, 2, 5, 6, 7 },

                           { 8, 5, 9, 7, 6, 1, 4, 2, 3 },

                           { 4, 2, 6, 8, 5, 3, 7, 9, 1 },

                           { 7, 1, 3, 9, 2, 4, 8, 5, 6 },

                           { 9, 6, 1, 5, 3, 7, 2, 8, 4 },

                           { 2, 8, 7, 4, 1, 9, 6, 3, 5 },

                           { 3, 4, 5, 2, 8, 6, 1, 7, 9 } };

    int i, j, k;
    int cnt = 0; 
    
    for(i = 0; i < 9; i++){
        int checkrow[10] = {0};
        for(j = 0; j < 9; j++){
            checkrow[sudoku[i][j]]++;
            if(checkrow[sudoku[i][j]] == 2){
                cnt++;
                break;
            }
        }
    }

    for(i = 0; i < 9; i++){
        int checkcol[10] = {0};
        for(j = 0; j < 9; j++){
            checkcol[sudoku[j][i]]++;
            if(checkcol[sudoku[j][i]] == 2){
                cnt++;
                break;
            }
        }
    }
       
    for(j = 0; j < 9; j++){
        int checkSquare1[10] = {0};
        int checkSquare2[10] = {0};
        int checkSquare3[10] = {0};
        for(k = 0; k < 3; k++){ 
            checkSquare1[sudoku[j][k]]++;
            if(checkSquare1[sudoku[j][k]] == 2){
            cnt++;
            break;
            }
        }   
        for(k = 3; k < 6; k++){
            checkSquare2[sudoku[j][k]-1]++;
            if(checkSquare2[sudoku[j][k]] == 2){
            cnt++;
            break;
            }
        }   
        for(k = 6; k < 9; k++){
            checkSquare3[sudoku[j][k]]++;
            if(checkSquare3[sudoku[j][k]] == 2){
            cnt++;
            break;
            }
        }
    }

    printf("잘못된 개수 : %d\n", cnt);

    return 0;
}

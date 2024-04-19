#include <stdio.h>

int main(){

    int day;
    scanf("%d", &day);

    int month = 1;
    if(day < 32)
        printf("%d %d\n", month, day);
    else{
        month++;
        day -= 31;
    }

    while(day>31){
        switch(month){
                case 2: {
                    if(day > 28){
                        month++;
                        day -= 28;
                    }
                    break;
                }
                case 4:
                case 6:
                case 9:
                case 11: {
                    if(day > 30){
                        month++;
                        day -= 30;
                    }
                    break;
                }
                default: {
                    if(day > 31){
                        month++;
                        day -= 31;
                    }
                    break;
                }
            }  
    }

    if(month != 1)
        printf("%d %d\n", month, day);

    return 0;
}
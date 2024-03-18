#include <stdio.h>

int main(){

    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);

    d++;
    switch(m){
        case 2:{ 
            if(d == 29){
                m++;
                d = 1;
            }
        break;
        }

        case 4:
        case 6:
        case 9:
        case 11: {
            if (d == 31) {
                m++;
                d = 1;
            }
        break;
        }
        default : {
            if(d == 32){
                m++;
                d = 1;
                if(m == 13){
                    y++;
                    m = 1;
                }
            }
        }
        
    }

    printf("%d %d %d\n", y, m, d);

    return 0;
}
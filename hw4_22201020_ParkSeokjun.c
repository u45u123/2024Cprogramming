#include <stdio.h>

int main(){

    int m, d;
    scanf("%d %d", &m, &d);

    int answer = 0;
    int k = 1;

    while(k < m){
        switch(k){
            case 2: {
                answer += 28;
                break;
            }
            case 4:
            case 6:
            case 9:
            case 11: {
                answer += 30;
                break;
            }
            default: {
                answer += 31;
                break;
            }
        }
        k++;
    }

    printf("%d\n", answer+d);

    return 0;
}
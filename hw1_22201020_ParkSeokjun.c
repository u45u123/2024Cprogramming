#include <stdio.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int cnt = 0;

    if(a > 10){
        cnt++;
    }

    if(b > 10){
        cnt++;
    }

    if(c > 10){
        cnt++;
    }

    printf("10을 넘는 숫자의 갯수 : %d\n", cnt);

    return 0;
}
#include <stdio.h>

int main(){

    int a;
    scanf("%d", &a);

    if(800 > a && a > 750)
        a = 800;
    if(700 < a && a < 750)
        a = 699;

    if(80 > (a % 100) && (a % 100) >= 75){
        a /= 10;
        a *= 10;
        a += 10;
    }
    if((a % 100) >= 70 && (a % 100) <= 75){
        a /= 10;
        a *= 10;
        a--;
    }

    if(a % 10 == 7)
        a--;

    printf("%d\n", a);

    return 0;
}
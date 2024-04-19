#include <stdio.h>

int main(){

    int h1, m1;
    int h2, m2;

    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);

    if(h1 == h2){
        printf("%d", m2 - m1);
    }
    else{
        printf("%d\n", (h2-h1)*60 + m2-m1);
    }

    return 0;
}
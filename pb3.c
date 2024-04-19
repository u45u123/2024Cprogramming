#include <stdio.h>
#define N 10

int main(){

    int a[N] = {25, 31, 42, 17, 23, 19, 35, 77, 28, 27};

    int avg;
    int sum = 0;

    for(int i = 0; i < N; i++){
        sum += a[i];
    }

    avg = sum / 10;

    int b[N] = { 0 };

    for(int i = 0; i < N; i++){
        b[i] = (avg - a[i] > 0) ? (avg - a[i]) : -(avg - a[i]); 
    }
    
    int min = b[0];
    int index;

    for(int i = 1; i < N; i++){
        if (b[i] < min){
            min = b[i];
            index = i;
        }
    }

    printf("%d\n", a[index]);
}
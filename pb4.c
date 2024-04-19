#include <stdio.h>  // 하.... 이렇게 푸는 거였누....

void minChange(int budget) {
    int num_11 = budget / 11;  // 11만원권의 개수
    int min_remainder = budget;  // 최소 잔액을 저장할 변수

    // 11만원권의 개수를 0부터 budget/11까지 증가시키며 최소 잔액을 갱신
    for (int i = 0; i <= num_11; i++) {
        int remainder = budget - (i * 11);  // 현재 11만원권으로 지불한 후 잔액 계산
        int num_7 = remainder / 7;  // 7만원권의 개수

        remainder -= num_7 * 7;  // 7만원권으로 지불한 후 잔액 계산
        if (remainder < min_remainder) {
            min_remainder = remainder;  // 최소 잔액 갱신
        }
    }

    printf("최소 잔액: %d\n", min_remainder);
}

int main() {
    int budget;
    printf("예산을 입력하세요: ");
    scanf("%d", &budget);

    minChange(budget);

    return 0;
}

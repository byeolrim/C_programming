#include <stdio.h>

int main() {
    int numbers[5];
    int i;

    // 사용자로부터 5개의 정수 입력 받기
    printf("Please input five integers: ");
    for (i = 0; i < 5; i++) {
        scanf_s("%d", &numbers[i]);
    }

    // 홀수와 짝수 출력
    printf("Odd numbers: ");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    printf("Even numbers: ");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}

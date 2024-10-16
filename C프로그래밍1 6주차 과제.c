#include <stdio.h>

void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2); // n을 2로 나눈 몫을 재귀 호출
    }
    printf("%d", n % 2); // n을 2로 나눈 나머지를 출력
}

int main() {
    int number;

    printf("Please enter a number: ");
    scanf_s("%d", &number);

    if (number <= 0) {
        printf("양의 정수를 입력하시오.\n");
        return 1;
    }

    printBinary(number);
    printf("\n");

    return 0;
}

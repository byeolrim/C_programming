
#include <iostream>

#include <stdio.h>

int main() {
    double km, miles;

    // 사용자로부터 킬로미터 입력 받기
    printf("킬로미터를 입력하세요: ");
    scanf_s("%lf", &km);

    // 킬로미터를 마일로 변환
    miles = km / 1.609;

    // 결과를 소수점 첫째 자리까지 출력
    printf("변환된 마일: %.1lf\n", miles);

    return 0;
}
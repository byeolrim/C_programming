#include <stdio.h>
#include <math.h>

// 표준편차를 계산하는 함수
double calculateStandardDeviation(double arr[], int size) {
    double sum = 0.0, mean, standardDeviation = 0.0;

    // 평균 계산
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    mean = sum / size;

    // 표준편차 계산
    for (int i = 0; i < size; i++) {
        standardDeviation += pow(arr[i] - mean, 2);
    }
    return sqrt(standardDeviation / size);
}

int main() {
    double numbers[5]; // 실수를 저장할 배열

    // 사용자로부터 5개의 실수 입력 받기
    printf("5개의 실수를 입력하세요:\n");
    for (int i = 0; i < 5; i++) {
        printf("실수 %d: ", i + 1);
        scanf_s("%lf", &numbers[i]);
    }

    // 표준편차 계산
    double stddev = calculateStandardDeviation(numbers, 5);

    // 결과 출력
    printf("입력한 실수의 표준편차: %.2f\n", stddev);

    return 0;
}

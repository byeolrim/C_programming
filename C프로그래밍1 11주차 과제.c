#include <stdio.h>
#include <math.h>

// ǥ�������� ����ϴ� �Լ�
double calculateStandardDeviation(double arr[], int size) {
    double sum = 0.0, mean, standardDeviation = 0.0;

    // ��� ���
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    mean = sum / size;

    // ǥ������ ���
    for (int i = 0; i < size; i++) {
        standardDeviation += pow(arr[i] - mean, 2);
    }
    return sqrt(standardDeviation / size);
}

int main() {
    double numbers[5]; // �Ǽ��� ������ �迭

    // ����ڷκ��� 5���� �Ǽ� �Է� �ޱ�
    printf("5���� �Ǽ��� �Է��ϼ���:\n");
    for (int i = 0; i < 5; i++) {
        printf("�Ǽ� %d: ", i + 1);
        scanf_s("%lf", &numbers[i]);
    }

    // ǥ������ ���
    double stddev = calculateStandardDeviation(numbers, 5);

    // ��� ���
    printf("�Է��� �Ǽ��� ǥ������: %.2f\n", stddev);

    return 0;
}

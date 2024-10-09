#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0; // 1 ������ ���� �Ҽ��� �ƴ�
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // ������ �������� �Ҽ��� �ƴ�
        }
    }
    return 1; // �Ҽ���
}

int main() {
    int number;

    printf("������ ���� ������ �Է��ϼ���: ");
    scanf_s("%d", &number);

    if (is_prime(number)) {
        printf("It is a prime number.\n");
    }
    else {
        printf("It is not a prime number.\n");
    }

    return 0;
}

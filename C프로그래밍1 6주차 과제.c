#include <stdio.h>

void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2); // n�� 2�� ���� ���� ��� ȣ��
    }
    printf("%d", n % 2); // n�� 2�� ���� �������� ���
}

int main() {
    int number;

    printf("Please enter a number: ");
    scanf_s("%d", &number);

    if (number <= 0) {
        printf("���� ������ �Է��Ͻÿ�.\n");
        return 1;
    }

    printBinary(number);
    printf("\n");

    return 0;
}

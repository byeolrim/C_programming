#include <stdio.h>

int main() {
    int i, j, spaces;

    // 5���� ����ϱ� ���� ����
    for (i = 0; i < 5; i++) {
        // �� ���� �տ� ������ ����Ͽ� ��� ����
        spaces = 4 - i; // �� 5���̹Ƿ� 4���� i�� ��
        for (j = 0; j < spaces; j++) {
            printf(" "); // ���� ���
        }

        // �� �ٿ� ����� '*'�� ������ 2*i + 1
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        // �ٹٲ�
        printf("\n");
    }

    return 0;
}

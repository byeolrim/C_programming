#include <stdio.h>
#include <ctype.h> // isupper, islower, tolower, toupper �Լ� ����� ���� ���

int main() {
    char str[100]; // �ִ� 99���� ���ڿ��� ������ �迭
    printf("���ڿ��� �Է��ϼ���: ");
    fgets(str, sizeof(str), stdin); // ���ڿ� �Է�

    // ���ڿ��� ��ȸ�ϸ� �빮�ڿ� �ҹ��ڸ� ��ȯ
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            // �빮�ڴ� �ҹ��ڷ� ��ȯ
            putchar(tolower(str[i]));
        }
        else if (islower(str[i])) {
            // �ҹ��ڴ� �빮�ڷ� ��ȯ
            putchar(toupper(str[i]));
        }
        else {
            // �ٸ� ���ڴ� �״�� ���
            putchar(str[i]);
        }
    }

    return 0;
}

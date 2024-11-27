#include <stdio.h>
#include <ctype.h> // isupper, islower, tolower, toupper 함수 사용을 위한 헤더

int main() {
    char str[100]; // 최대 99자의 문자열을 저장할 배열
    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin); // 문자열 입력

    // 문자열을 순회하며 대문자와 소문자를 변환
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            // 대문자는 소문자로 변환
            putchar(tolower(str[i]));
        }
        else if (islower(str[i])) {
            // 소문자는 대문자로 변환
            putchar(toupper(str[i]));
        }
        else {
            // 다른 문자는 그대로 출력
            putchar(str[i]);
        }
    }

    return 0;
}

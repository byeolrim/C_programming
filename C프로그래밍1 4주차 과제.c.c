#include <stdio.h>

int main() {
    int i, j, spaces;

    // 5줄을 출력하기 위한 루프
    for (i = 0; i < 5; i++) {
        // 각 줄의 앞에 공백을 출력하여 가운데 정렬
        spaces = 4 - i; // 총 5줄이므로 4에서 i를 뺌
        for (j = 0; j < spaces; j++) {
            printf(" "); // 공백 출력
        }

        // 각 줄에 출력할 '*'의 개수는 2*i + 1
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }

        // 줄바꿈
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

#define MAX_CITIES 3
#define NAME_LENGTH 50
#define COUNTRY_LENGTH 50

// 도시 정보를 저장할 구조체 정의
struct City {
    char name[NAME_LENGTH];
    char country[COUNTRY_LENGTH];
    int population;
};

int main() {
    struct City cities[MAX_CITIES]; // 구조체 배열 선언

    // 사용자로부터 도시 정보 입력 받기
    printf("Input three cities:\n");
    for (int i = 0; i < MAX_CITIES; i++) {
        printf("Name> ");
        scanf_s("%s", cities[i].name); // 도시 이름 입력

        printf("Country> ");
        scanf_s("%s", cities[i].country); // 국가 이름 입력

        printf("Population > ");
        scanf_s("%d", &cities[i].population); // 인구 수 입력
    }

    // 입력된 도시 정보 출력
    printf("\nPrinting the three cities:\n");
    for (int i = 0; i < MAX_CITIES; i++) {
        printf("%d. %s in %s with a population of %d people\n",
            i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}

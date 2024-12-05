#include <stdio.h>

#define MAX_CITIES 3
#define NAME_LENGTH 50
#define COUNTRY_LENGTH 50

// ���� ������ ������ ����ü ����
struct City {
    char name[NAME_LENGTH];
    char country[COUNTRY_LENGTH];
    int population;
};

int main() {
    struct City cities[MAX_CITIES]; // ����ü �迭 ����

    // ����ڷκ��� ���� ���� �Է� �ޱ�
    printf("Input three cities:\n");
    for (int i = 0; i < MAX_CITIES; i++) {
        printf("Name> ");
        scanf_s("%s", cities[i].name); // ���� �̸� �Է�

        printf("Country> ");
        scanf_s("%s", cities[i].country); // ���� �̸� �Է�

        printf("Population > ");
        scanf_s("%d", &cities[i].population); // �α� �� �Է�
    }

    // �Էµ� ���� ���� ���
    printf("\nPrinting the three cities:\n");
    for (int i = 0; i < MAX_CITIES; i++) {
        printf("%d. %s in %s with a population of %d people\n",
            i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}

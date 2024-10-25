#include <stdio.h>
int main(void)
{
	int a, b;
	const int NUM_LINE = 9;
	for (a = 0; a < NUM_LINE / 2; a++) {
			printf(" ");
		for (b = a; b <= (a * 2); b++)
				printf("%c\n", (b / 2 == 0) ? 'o' : ' ');
		printf("\n");
	}
	for (a = NUM_LINE / 2; a > 0; a--) {
		for (b = a; b < NUM_LINE / 2; b++)
				printf(" ");
		for (b = a; b <= (a * 2); b++)
				printf("*");
		printf("\n");
	}
	return 0;
}

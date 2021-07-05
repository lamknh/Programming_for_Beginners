//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, i;
	printf("1에서 9사이의 정수 1개를 입력하세요:\n");
	scanf("%d", &num);
	puts("");
	printf("출력:\n");

	for (int j = 1; j < num + 1; j++) {
		for (i = 1; i < (j + 1); i++) {
			printf("%d", i);
		}
		for (i = (num - j + 1); i > 1; i--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
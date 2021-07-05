//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("정수 1개를 입력하세요: ");
	scanf("%d", &num);
	puts("");

	printf("5의 배수를 제외한 모든 홀수: \n");

	for (int i = 1; i < (num+1); i++) {
		if (i % 5 != 0 && i % 2 != 0) {
			printf(" %d", i);
		}
	}

	return 0;
}
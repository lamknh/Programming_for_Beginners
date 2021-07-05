//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, j;
	printf("행의 수를 선택하세요: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (j = 0; j < n - i + 1; j++) {
			printf(" ");
		}
		for (j = i; j > -1; j--) {
			printf("%d", j);
		}
		for (j = 1; j < i + 1; j++) {
			printf("%d", j);
		}
		puts("");
	}
	return 0;
}
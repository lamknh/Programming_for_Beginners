//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0, fib = 1, sum = 0;
	
	while (1) {
		n = 0; fib = 1; sum = 0;
		printf("정수 1개를 입력하세요: ");
		scanf("%d", &n);
		for (int i = 1; i < (n + 1); i++) {
			printf("%d! = %d\n", n, fib *= i);
			sum += fib;
		}

		if (n < 0) {
			printf("프로그램을 종료합니다.");
			break;
		}
		else {
			printf("---------------------------\n");
			printf("total = %d\n\n", sum);
		}
	}
	
	return 0;
}
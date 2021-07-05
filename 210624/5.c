//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2, n = 1;
	char op, yn;

	do {
		printf("정수를 입력하세요: ");
		scanf("%d", &num1);
		printf("연산자를 입력하세요: ");
		scanf(" %c", &op);
		printf("정수를 입력하세요: ");
		scanf("%d", &num2);

		if (op == '+') {
			printf(">>> %d + %d = %d\n", num1, num2, num1 + num2);
		}
		else if (op == '-') {
			printf(">>> %d - %d = %d\n", num1, num2, num1 - num2);
		}
		else if (op == '*') {
			printf(">>> %d * %d = %d\n", num1, num2, num1 * num2);
		}
		else if (op == '/') {
			
			if (num2 == 0) {
				printf(">>> Error\n");
			}
			else {
				printf(">>> %d / %d = %lf\n", num1, num2, (double)num1 / (double)num2);
			}
		}

		printf("1번 더 수행 하시겠습니까? (Y/N) : ");
		scanf(" %c", &yn);
		puts("");
	} while (yn == 'Y' || yn == 'y');

	printf("\n프로그램을 종료합니다.");
	
	return 0;
}
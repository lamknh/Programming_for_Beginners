//2019117865�質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1, num2, n = 1;
	char op, yn;

	do {
		printf("������ �Է��ϼ���: ");
		scanf("%d", &num1);
		printf("�����ڸ� �Է��ϼ���: ");
		scanf(" %c", &op);
		printf("������ �Է��ϼ���: ");
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

		printf("1�� �� ���� �Ͻðڽ��ϱ�? (Y/N) : ");
		scanf(" %c", &yn);
		puts("");
	} while (yn == 'Y' || yn == 'y');

	printf("\n���α׷��� �����մϴ�.");
	
	return 0;
}
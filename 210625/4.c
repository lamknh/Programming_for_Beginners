//2019117865�質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, i;
	printf("1���� 9������ ���� 1���� �Է��ϼ���:\n");
	scanf("%d", &num);
	puts("");
	printf("���:\n");

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
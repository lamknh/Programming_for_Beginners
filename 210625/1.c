//2019117865�質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("���� 1���� �Է��ϼ���: ");
	scanf("%d", &num);
	puts("");

	printf("5�� ����� ������ ��� Ȧ��: \n");

	for (int i = 1; i < (num+1); i++) {
		if (i % 5 != 0 && i % 2 != 0) {
			printf(" %d", i);
		}
	}

	return 0;
}
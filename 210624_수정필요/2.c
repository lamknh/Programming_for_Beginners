//2019117865�質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	do {
		printf("1. ����\n");
		printf("2. ����\n");
		printf("3. ����\n");
		printf("�ϳ��� �����Ͻÿ�.\n");
		scanf("%d", &n);
	} while (n < 1 || n > 3);

	printf("���õ� �޴��� %d", n);
	return 0;
}
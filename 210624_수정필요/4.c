//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, n = 0, sum = 0;
	
	printf("���� 1���� �Է��ϼ��� : \n");
	scanf("%d", &num);

	while (num) {
		sum += num % 10;
		num /= 10;
		n++;
	}

	printf("�Է��� �ڸ��� %d�̰�\n", n);
	printf("�� �ڸ����� ���� %d�Դϴ�.", sum);

	return 0;
}
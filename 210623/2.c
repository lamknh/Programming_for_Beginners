//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592
#include <stdio.h>

int main(void)
{
	int num;
	printf("���� õ�� ������ �ϳ��� ���� �Է� >> ");
	scanf("%d", &num);

	int tthou, thou, hund, ten, one;

	tthou = num / 10000;
	thou = num % 10000 / 1000;
	hund = num % 1000 / 100;
	ten = num % 100 / 10;
	one = num % 10;

	printf("�Է��� �� %d�� %d�� %dõ %d�� %d�� %d�Դϴ�.", num, tthou, thou, hund, ten, one);

	return 0;
}
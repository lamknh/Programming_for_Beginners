//2019117865 �質��

#define _CRT_SECURE_NO_WARNINGS
#define SQ2(x) ((x) * (x))
#define SQ4(x) (SQ2(x) * SQ2(x))

#include <stdio.h>

int main(void)
{
	float num;
	printf("x�� ���� �Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f", &num);
	printf("x�� ������ %.1f�Դϴ�\n", SQ2(num));
	printf("x�� �������� %.1f�Դϴ�", SQ4(num));

	return 0;
}
//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5;

	printf("10���� ���� �Է�>>");
	scanf("%d", &num1);
	printf("10����: %d, 8����: %#o, 16����: %#x\n", num1, num1, num1);

	printf("8���� ���� �Է�>>");
	scanf("%o", &num2);
	printf("10����: %d, 8����: %#o, 16����: %#x\n", num2, num2, num2);

	printf("16���� ���� �Է�>>");
	scanf("%x", &num3);
	printf("10����: %d, 8����: %#o, 16����: %#x\n", num3, num3, num3);

	printf("8���� ���� �Է�>>");
	scanf("%o", &num4);
	printf("10����: %d, 8����: %o, 16����: %x\n", num4, num4, num4);

	printf("16���� ���� �Է�>>");
	scanf("%x", &num5);
	printf("10����: %d, 8����: %o, 16����: %x\n", num5, num5, num5);
	return 0;
}
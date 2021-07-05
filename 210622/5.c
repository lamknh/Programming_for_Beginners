//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5;

	printf("10진수 정수 입력>>");
	scanf("%d", &num1);
	printf("10진수: %d, 8진수: %#o, 16진수: %#x\n", num1, num1, num1);

	printf("8진수 정수 입력>>");
	scanf("%o", &num2);
	printf("10진수: %d, 8진수: %#o, 16진수: %#x\n", num2, num2, num2);

	printf("16진수 정수 입력>>");
	scanf("%x", &num3);
	printf("10진수: %d, 8진수: %#o, 16진수: %#x\n", num3, num3, num3);

	printf("8진수 정수 입력>>");
	scanf("%o", &num4);
	printf("10진수: %d, 8진수: %o, 16진수: %x\n", num4, num4, num4);

	printf("16진수 정수 입력>>");
	scanf("%x", &num5);
	printf("10진수: %d, 8진수: %o, 16진수: %x\n", num5, num5, num5);
	return 0;
}
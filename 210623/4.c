//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//3��
	int num1, num2, num3;
	printf("���� 3�� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d", num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3));

	
	return 0;
}
//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

int main(void)
{
	double r;
	printf("������ �Է�: ");
	scanf("%lf", &r);

	printf("V = %lf", (4 / 3) * PI * r * r * r);
	printf("S = %lf", 4 * PI * r * r);

	return 0;
}
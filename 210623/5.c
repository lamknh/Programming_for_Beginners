//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double height, weight;

	printf("Ű�� �����Ը� ������� �Է�: ");
	scanf("%lf %lf", &height, &weight);

	if (weight <= (height - 100) * 0.9) {
		printf("����");
	}
	else {
		printf("��");
	}

	return 0;
}
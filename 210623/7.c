//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c, x, d;
	printf("2�� �������� ��� a b c�� �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);

	d = b * b - 4 * a * c;

	if (a == 0) {
		double x = -(c / b);
		printf("���� �߱� %lf�Դϴ�.", x);
	}
	else {
		if (d > 0) {
			double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
			printf("���� %lf, %lf�Դϴ�.", x1, x2);
		}
		else if (d == 0) {
			double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			printf("���� �߱� %lf�Դϴ�.", x1);
		}
		else {
			double x1 = -b / (double)(2 * a);
			double x2 = sqrt(abs(b * b - 4 * a * c)) / (2 * a);
			
			printf("��� %lf + %lfi �� %lf - %lfi�Դϴ�.", x1, x2, x1,x2);
		}
	}
	return 0;
}
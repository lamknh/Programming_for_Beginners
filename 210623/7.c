//2019117865 김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c, x, d;
	printf("2차 방정식의 계수 a b c를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);

	d = b * b - 4 * a * c;

	if (a == 0) {
		double x = -(c / b);
		printf("근은 중근 %lf입니다.", x);
	}
	else {
		if (d > 0) {
			double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
			printf("근은 %lf, %lf입니다.", x1, x2);
		}
		else if (d == 0) {
			double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			printf("근은 중근 %lf입니다.", x1);
		}
		else {
			double x1 = -b / (double)(2 * a);
			double x2 = sqrt(abs(b * b - 4 * a * c)) / (2 * a);
			
			printf("허근 %lf + %lfi 와 %lf - %lfi입니다.", x1, x2, x1,x2);
		}
	}
	return 0;
}
//2019117865김나형
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int grade = 0, n = 0, sum = 0;
	printf("성적입력을 마치려면 음수를 입력하시오.\n");
	printf("성적을 입력하시오.\n");
	while (1) {
		scanf("%d", &grade);
		if (grade < 0) {
			if (n == 0) {
				printf("입력된 성적이 없습니다.\n");
			}
			else {
				printf("%d명의 평균은 %lf입니다. \n", n, (double)sum / n);
			}
			break;
		}
		else {
			n++;
			sum += grade;
		}
	}
	

	return 0;
}
//2019117865�質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int grade = 0, n = 0, sum = 0;
	printf("�����Է��� ��ġ���� ������ �Է��Ͻÿ�.\n");
	printf("������ �Է��Ͻÿ�.\n");
	while (1) {
		scanf("%d", &grade);
		if (grade < 0) {
			if (n == 0) {
				printf("�Էµ� ������ �����ϴ�.\n");
			}
			else {
				printf("%d���� ����� %lf�Դϴ�. \n", n, (double)sum / n);
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
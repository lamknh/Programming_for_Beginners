//2019117865�質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, sum = 0, max, min;
	printf("���� 10���� �Է��ϼ���: \n");

	scanf("%d", &num);

	max = min = sum = num;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &num);
		if (min > num) {
			min = num;
		}
		else if (max < num) {
			max = num;
		}
		sum += num;
	}

	printf("������ : %d\n", sum);
	printf("�ִ� : %d\n", max);
	printf("�ּڰ� : %d", min);
	return 0;
}
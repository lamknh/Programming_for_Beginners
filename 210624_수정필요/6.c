//2019117865�質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define FALSE 0
#define TRUE 1

int main(void) {
	int num, n = 0, sum = 0, min = 0, max = 0;
	int twenty = FALSE, between = TRUE;
	printf("���� �����͸� �Է��ϼ��� (����: 99999) : \n");

	while (1) {
		scanf("%d", &num);
		if (num != 99999) {
			n++; //������ ����
			sum += num; //����
			if (num < min) {
				min = num;
			}
			else if (num > max) {
				max = num;
			}

			if (num < 20) {
				twenty = TRUE;
			}

			if (num < 10 || num > 90) {
				between = FALSE;
			}
		}
		else {
			break;
		}
	}

	printf("�Է��� �������� ����: %d\n", n);
	printf("����: %d\n", sum);
	printf("���: %lf\n", (double)sum / n);
	printf("�ּ� ��: %d\n", min);
	printf("�ִ� ��: %d\n", max);

	if (twenty == TRUE) {
		printf("20���� �������� �ִ°�? true\n");
	}
	else {
		printf("20���� �������� �ִ°�? false\n");
	}

	if (between == TRUE) {
		printf("��� ���� 10�� 90������ �����ΰ�? true\n");
	}
	else {
		printf("��� ���� 10�� 90������ �����ΰ�? false\n");
	}
	
	

	return 0;
}
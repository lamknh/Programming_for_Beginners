//2019117865�質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	printf("���� 1���� �Է��ϼ���: \n");
	scanf("%d", &num);
	puts("");

	if (num >= 1 || num <= 10) {
		switch (num) {
		case 1:
			printf("1�� �θ����ڴ� I�Դϴ�.");
			break;
		case 2:
			printf("2�� �θ����ڴ� II�Դϴ�.");
			break;
		case 3:
			printf("3�� �θ����ڴ� III�Դϴ�.");
			break;
		case 4:
			printf("4�� �θ����ڴ� IV�Դϴ�.");
			break;
		case 5:
			printf("5�� �θ����ڴ� V�Դϴ�.");
			break;
		case 6:
			printf("6�� �θ����ڴ� VI�Դϴ�.");
			break;
		case 7:
			printf("7�� �θ����ڴ� VII�Դϴ�.");
			break;
		case 8:
			printf("8�� �θ����ڴ� VIII�Դϴ�.");
			break;
		case 9:
			printf("9�� �θ����ڴ� IX�Դϴ�.");
			break;
		case 10:
			printf("10�� �θ����ڴ� X�Դϴ�.");
			break;
		}
	}
	return 0;
}
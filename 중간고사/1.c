//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	
	do {
		int fac = 1;
		printf("���� ���� 1���� �Է��ϼ��� (����: ����) : ");
		scanf("%d", &num);

		for (int i = 1; i < num + 1; i++) {
			fac *= i;
		}

		if (num >= 0) {
			printf("%d! = %d\n\n", num, fac);
		}
		
	} while (num >= 0);
	return 0;
}
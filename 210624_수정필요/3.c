//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0;
	char c;
	do {
		printf("���ĺ� �ҹ��� �ϳ��� ������ ���ÿ�.\n");
		scanf(" %c", &c);
		if (c < 'f') {
			printf("�Է��� ������ �ƽ�Ű �ڵ� ���� �� �۽��ϴ�.\n");
			n++;
		}
		else if(c > 'f'){
			printf("�Է��� ������ �ƽ�Ű �ڵ� ���� �� Ů�ϴ�.\n");
			n++;
		}
	} while (c != 'f');

	printf("�����Դϴ�! �õ�Ƚ���� %d��!", n);
	return 0;
}
//2019117865�質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, val;
	printf("���� �Է� : ");
	scanf("%d", &num);

	int mask = 0xff;

	val = num;
	for (int i = 0; i < 15; i++) {
		val &= mask;
	}
	val <<= 4;
	printf("%d\n", val);

	if (val > 178) {
		printf("������ 8��Ʈ�� 4��Ʈ �̵��� ���� 178���� Ů�ϴ�.");
	}
	else if (val == 178) {
		printf("������ 8��Ʈ�� 4��Ʈ �̵��� ���� 178�� �����ϴ�.");
	}
	else {
		printf("������ 8��Ʈ�� 4��Ʈ �̵��� ���� 178���� �۽��ϴ�.");
	}
	return 0;
}
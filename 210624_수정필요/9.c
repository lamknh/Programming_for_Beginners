//2019117865�質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, a1, a2, a3, zero;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);

	a1 = a2 = a3 = a;

	int mask = 0xf000; // 0x0000f000

	a1 &= ~mask;
	a2 |= mask;
	a3 ^= mask;

	printf("13~16��° ��Ʈ�� ���� 0���� ������ ��: %d\n", a1);
	printf("13~16��° ��Ʈ�� ���� 1���� ������ ��: %d\n", a2);
	printf("13~16��° ��Ʈ�� ���� 0�� 1�� 1�� 0���� �ٲ� ��: %d\n", a3);
	return 0;
}
//2019117865�質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, val;
	printf("������ �ϳ� �Է��Ͻʽÿ� : ");
	scanf("%d", &n);

	val = n;

	int mask = 0xffff;

	for (int i = 0; i < 15; i++) {
		val &= mask;
	}
	
	printf("�Է°� %d�� ���� 16��Ʈ�� 8������ %#o, %#x\n", n, val, val);
	return 0;
}
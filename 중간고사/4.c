//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, m, n, mask = 0;
	printf("num m n >> ");
	scanf("%d %d %d", &num, &m, &n);
	
	for (int i = 32; i > 0; i--) {
		if (i >= m && i <= n) {
			mask = (mask * 2) + 1;
		}
		else if(m > i)
		{
			mask <<= 1;
		}
	}

	printf("%0#x\n", mask);
	printf("�Է°� %d�� %d~%d��Ʈ�� �ݴ�� ����: %d\n", num, m, n, num ^ mask);
	printf("�Է°� %d�� %d~%d �̿��� ��Ʈ�� 1�� ����: %d\n", num, m, n, num | ~mask);
	printf("�Է°� %d�� %d~%d��Ʈ�� 1�� ����: %d\n", num, m, n, num | mask);
	printf("�Է°� %d�� %d~%d��Ʈ�� 0���� ����: %d\n", num, m, n, num & ~mask);

	return 0;
}
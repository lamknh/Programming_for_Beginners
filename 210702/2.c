//2019117865 �質��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void)
{
	char message[100] = "";
	char temp;
	char* ptoken = NULL;

	printf("�� ���� ������ �Է��ϼ���. -> \n");
	gets(message);

	printf("�Է��� ������ �ܾ �ݴ�� ����մϴ�. -> \n");
	ptoken = strtok(message, " ");
	while (ptoken != NULL) {
		for (int i = strlen(ptoken) - 1; i >= 0; i--) {
			printf("%c", ptoken[i]);
		}
		printf(" ");
		ptoken = strtok(NULL, " ");
	}

	return 0;
}
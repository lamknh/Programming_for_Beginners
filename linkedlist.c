// file: linkedlist.c
#include "linkedlist.h"

LINK createNode(char *name);
LINK append(LINK head, LINK cur);
int printList(LINK head);

int main(void)
{
	//ǥ���Է����� ���� ���α׷� �̸� ���ڿ��� ������ ���� �迭
	char name[30];
	LINK head = NULL; //���� ����Ʈ�� ���� ���
	LINK cur; //���� ������ ������ ��带 ����Ű�� ������

	printf("�̸��� �Է��ϰ� Enter�� ��������. >> \n");
	while (gets(name) != NULL)
	{
		cur = createNode(name);	//��� ���� �Ҵ�
		if (cur == NULL) {
			printf("�����޸� �Ҵ翡 ������ �ֽ��ϴ�.\n");
			exit(1);
		}
		head = append(head, cur);	//�� �ڿ� ��� �߰�
		printList(head);		//���� ����Ʈ ��� ���
	}

	return 0;
}

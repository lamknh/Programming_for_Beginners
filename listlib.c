// file: listlib.c
#include "linkedlist.h"

//��带 �����ϴ� �Լ�
LINK createNode(char *name)
{
	//���� �����Ǵ� ����� �ּҸ� ������ ���� cur�� ����
	LINK   cur;
	//�Լ� malloc()���� �Ҵ�� ��������� �ּҸ� ���� cur�� ����
	cur = (LINK) malloc(sizeof(NODE));
	if (cur == NULL)
	{
		printf("��� ������ ���� �޸� �Ҵ翡 ������ �ֽ��ϴ�.\n");
		return NULL;
	}
	//��� �̸��� ������ ���ڹ迭�� ���� �Ҵ��Ͽ� name�� ����  
	cur->name = (char *)malloc(sizeof(char) * (strlen(name) + 1));
	strcpy(cur->name, name);
	//���� ���� �𸣹Ƿ� NULL�� ����
	cur->next = NULL;

	return cur;
}

//cur ��带 ���� ����Ʈ head�� ������ ��忡 �߰��ϴ� �Լ�
LINK append(LINK head, LINK cur)
{
	//���� ���� nextNode�� �����ϰ� �ʱ� ������ head�� ����
	LINK nextNode = head;
	//���� ���� ��尡 ����Ű�� ���� ���ٸ�, �� ���Ḯ��Ʈ�� ��尡 �ϳ��� ���� ���
	if (head == NULL)
	{
		head = cur; //�߰��Ϸ��� ��尡 head�� ��
		return head;
	}
	//��� next�� NULL�� ������ �̵��Ͽ� ������ ������ �̵�
	while (nextNode->next != NULL)
	{
		nextNode = nextNode->next;
	}
	//�߰� ��带 ���� ����� next�� ����
	nextNode->next = cur;

	return head;
}

//���� ����Ʈ�� ��� ��� ��� �Լ�
int printList(LINK head)
{
	int cnt = 0; //�湮�� ����� ���� ����
	LINK nextNode = head;
	//nextNode�� �̿��Ͽ� ���Ḯ��Ʈ�� ó������ ������ ��ȸ
	while (nextNode != NULL)
	{
		//����Ʈ�� ������ ��带 �湮�Ͽ� �湮 Ƚ���� ���ڿ� �ڷḦ ���
		printf("%3d��° ���� %s\n", ++cnt, nextNode->name);
		nextNode = nextNode->next;
	}

	//�� ��� �湮 Ƚ���� ��ȯ�ϰ� �Լ��� ����
	return cnt;
}

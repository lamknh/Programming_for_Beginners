// file: linkedlist.h
#define _CRT_SECURE_NO_WARNINGS //scanf(), gets() �� ������ �����ϱ� ���� ��� ����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�ڱ����� ����ü ����
struct linked_list {
	char *name;
	struct linked_list *next;
};
//struct linked_list�� NODE�� ������
typedef   struct linked_list NODE;
//NODE *�� LINK�� ������
typedef   NODE * LINK;

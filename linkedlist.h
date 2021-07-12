// file: linkedlist.h
#define _CRT_SECURE_NO_WARNINGS //scanf(), gets() 등 오류를 방지하기 위한 상수 정의
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//자기참조 구조체 정의
struct linked_list {
	char *name;
	struct linked_list *next;
};
//struct linked_list를 NODE로 재정의
typedef   struct linked_list NODE;
//NODE *를 LINK로 재정의
typedef   NODE * LINK;

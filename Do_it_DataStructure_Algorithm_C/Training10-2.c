/*
* File: Training10-2.c
* Date: 2024.02.23
* Author: Lee seung hwan
* Summary of file : Bundle of function 
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Member.h"

int MemberNoCmp(const Member* x, const Member* y)
{
	return x->no < y->no ? -1: x->no > y->no ? 1: 0;
}

int MemberNameCmp(const Member* x, const Member* y)
{
	return strcmp(x->name, y->name);
}

void PrintMember(const Member* x)
{
	printf("%d %s", x->no, x->name);
}

void PrintLnMember(const Member* x)
{
	printf("%d %s\n", x->no, x->name);
}

Member ScanMember(const char* message, int sw)
{
	Member temp;
	//memset(&temp, 0, sizeof(temp));
	//temp.name[0] = '\0';
	printf("%s하는 데이터를 입력하세요.\n", message);
	if (sw & MEMBER_NO) { 
		printf("번호: "); 
		scanf("%d", &temp.no);
	}
	if (sw & MEMBER_NAME) { 
		printf("이름: "); 
		scanf("%s", temp.name);
	}
	return temp;
}
*/
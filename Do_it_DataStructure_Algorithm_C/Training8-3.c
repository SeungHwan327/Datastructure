/*
* File: Training8-3.c
* Date: 2024.02.23
* Author: Lee seung hwan
* Summary of file : Example Linked list by using Pointer.
* 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Member.h"
#include "Training8-1.h"

typedef enum {
	TERMINATE, INS_FRONT, INS_REAR, RMV_FRONT, RMV_REAR, PRINT_CRNT,
	RMV_CRNT, SRCH_NO, SRCH_NAME, PRINT_ALL, CLEAR
}Menu;

Menu SelectMenu(void)
{
	int ch;
	char* mstring[] = {
		"�Ӹ��� ��带 ����", "������ ��带 ����", "�Ӹ� ��带 ����",
		"���� ��带 ����", "������ ��带 ���", "������ ��带 ����",
		"��ȣ�� �˻�", "�̸����� �˻�", "��� ��带 ���",
		"��� ��带 ����",
	};
	do {
		for (int i = TERMINATE; i < CLEAR; i++) {
			printf("(%2d) %-18.18s ", i + 1, mstring[i]);
			if ((i % 3) == 2)
				putchar('\n');
		}
		printf("(0) ����: ");
		scanf("%d", &ch);
	} while (ch<TERMINATE || ch >CLEAR);
	return(Menu)ch;
}

int main(void)
{
	Menu menu;
	List list;
	Initialize(&list);
	do {
		Member x;
		switch (menu = SelectMenu()) {
		case INS_FRONT:
			x = ScanMember("�Ӹ��� ����", MEMBER_NO | MEMBER_NAME);
			InsertFront(&list, &x);
			break;

		case INS_REAR:
			x = ScanMember("������ ����", MEMBER_NO | MEMBER_NAME);
			InsertRear(&list, &x);
			break;

		case RMV_FRONT:
			RemoveFront(&list);
			break;

		case RMV_REAR:
			RemoveRear(&list);
			break;

		case PRINT_CRNT:
			PrintLnCurrent(&list);
			break;

		case RMV_CRNT:
			RemoveCurrent(&list);
			break;

		case SRCH_NO:
			x = ScanMember("�˻�", MEMBER_NO);
			if (Search(&list, &x, MemberNoCmp) != NULL)
				PrintLnCurrent(&list);
			else
				puts("�� ��ȣ�� �����Ͱ� �����ϴ�.");
			break;

		case SRCH_NAME:
			x = ScanMember("�˻�", MEMBER_NAME);
			if (Search(&list, &x, MemberNameCmp) != NULL)
				PrintLnCurrent(&list);
			else
				puts("�� �̸��� �����Ͱ� �����ϴ�.");
			break;

		case PRINT_ALL:
			Print(&list);
			break;

		case CLEAR:
			Clear(&list);
			break;
		}
	} while (menu != TERMINATE);
	Terminate(&list);

	return 0;
}
*/
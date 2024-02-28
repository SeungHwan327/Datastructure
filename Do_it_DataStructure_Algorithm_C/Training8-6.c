/*
* File: Training8-6.c
* Date: 2024.02.23
* Author: Lee seung hwan
* Summary of file : Example Linked list by using cursor(Index).
* 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Member.h"
#include "Training8-4.h"

typedef enum {
	TERMINATE, INS_FRONT, INS_REAR, RMV_FRONT, RMV_REAR, PRINT_CRNT,
	RMV_CRNT, SRCH_NO, SRCH_NAME, PRINT_ALL, CLEAR
} Menu;

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
			printf("(%2d) %-18.18s  ", i + 1, mstring[i]);
			if ((i % 3) == 2)
				putchar('\n');
		}
		printf("(0) ����: ");
		scanf("%d", &ch);
	} while (ch<TERMINATE || ch>CLEAR);
	return(Menu)ch;
}

int main(void)
{
	Menu menu;
	List list;
	Initialize(&list, 30);
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
			if (search(&list, &x, MemberNoCmp) != Null)
				PrintLnCurrent(&list);
			else
				puts("�� ��ȣ�� �����Ͱ� �����ϴ�.");
			break;

		case SRCH_NAME:
			x = ScanMember("�˻�", MEMBER_NAME);
			Index result = search(&list, &x, MemberNameCmp);
			if (result != Null) {
				list.crnt = result;
				PrintLnCurrent(&list);
			}
			else {
				puts("�ش� �̸��� �����Ͱ� �����ϴ�.");
			}
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
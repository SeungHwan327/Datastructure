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
		"머리에 노드를 삽입", "꼬리에 노드를 삽입", "머리 노드를 삭제",
		"꼬리 노드를 삭제", "선택한 노드를 출력", "선택한 노드를 삭제",
		"번호로 검색", "이름으로 검색", "모든 노드를 출력",
		"모든 노드를 삭제",
	};

	do {
		for (int i = TERMINATE; i < CLEAR; i++) {
			printf("(%2d) %-18.18s  ", i + 1, mstring[i]);
			if ((i % 3) == 2)
				putchar('\n');
		}
		printf("(0) 종료: ");
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
			x = ScanMember("머리에 삽입", MEMBER_NO | MEMBER_NAME);
			InsertFront(&list, &x);
			break;

		case INS_REAR:
			x = ScanMember("꼬리에 삽입", MEMBER_NO | MEMBER_NAME);
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
			x = ScanMember("검색", MEMBER_NO);
			if (search(&list, &x, MemberNoCmp) != Null)
				PrintLnCurrent(&list);
			else
				puts("그 번호의 데이터가 없습니다.");
			break;

		case SRCH_NAME:
			x = ScanMember("검색", MEMBER_NAME);
			Index result = search(&list, &x, MemberNameCmp);
			if (result != Null) {
				list.crnt = result;
				PrintLnCurrent(&list);
			}
			else {
				puts("해당 이름의 데이터가 없습니다.");
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
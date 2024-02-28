/*
* File: Training4-3.c
* Date: 2024.02.13
* Author: Lee seung hwan
* Summary of file : Example Stack!
* 
#include <stdio.h>
#include "Training4-1.h"

int main(void)
{
	IntStack s;
	if (Initialize(&s, 64) == -1) {
		puts("\t\t스택 생성에 실패했습니다.");
		return 1;
	}

	while (1) {
		int menu, x;
		printf("\n\n\t\t현재 데이터 수: %d / %d\n", Size(&s), Capacity(&s));
		printf("\t\t(1)푸시 (2)팝 (3)피크 (4)출력 (0)종료: ");
		scanf_s("%d", &menu);

		if (menu == 0) break;
		switch (menu) {
		case 1:
			printf("\t\t데이터: ");
			scanf_s("%d", &x);
			if (Push(&s, x) == -1)
				puts("\a오류: 푸시에 실패했습니다.");
			break;
		case 2:
			if (Pop(&s, &x) == -1)
				puts("\a오류: 팝에 실패했습니다.");
			else
				printf("\t\t팝 데이터는 %d입니다.\n", x);
			break;

		case 3:
			if (Peek(&s, &x) == -1)
				puts("\a오류: 피크에 실패했습니다.");
			else
				printf("\t\t피크 데이터는 %d입니다.\n", x);
			break;
		case 4:
			Print(&s);
			break;
		}
	}
	Terminate(&s);
	return 0;
}
*/
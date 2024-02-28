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
		puts("\t\t���� ������ �����߽��ϴ�.");
		return 1;
	}

	while (1) {
		int menu, x;
		printf("\n\n\t\t���� ������ ��: %d / %d\n", Size(&s), Capacity(&s));
		printf("\t\t(1)Ǫ�� (2)�� (3)��ũ (4)��� (0)����: ");
		scanf_s("%d", &menu);

		if (menu == 0) break;
		switch (menu) {
		case 1:
			printf("\t\t������: ");
			scanf_s("%d", &x);
			if (Push(&s, x) == -1)
				puts("\a����: Ǫ�ÿ� �����߽��ϴ�.");
			break;
		case 2:
			if (Pop(&s, &x) == -1)
				puts("\a����: �˿� �����߽��ϴ�.");
			else
				printf("\t\t�� �����ʹ� %d�Դϴ�.\n", x);
			break;

		case 3:
			if (Peek(&s, &x) == -1)
				puts("\a����: ��ũ�� �����߽��ϴ�.");
			else
				printf("\t\t��ũ �����ʹ� %d�Դϴ�.\n", x);
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
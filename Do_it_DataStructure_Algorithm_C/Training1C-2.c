/*
* File: Training1C-2.c
* Date: 2024.02.06
* Author: Lee seung hwan
* Summary of file : Enter 10~99 integer and Print that.
* 
* 
#include <stdio.h>

int main(void)
{
	int no;
	printf("2자리 양수를 입력하세요.\n");
	do {
		printf("수는: ");
		scanf_s("%d", &no);
	} while (no < 10 || no > 99);
	printf("변수 no값은 %d이 되었습니다.\n", no);
	return 0;
}
*/
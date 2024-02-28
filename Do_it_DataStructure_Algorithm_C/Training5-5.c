/*
* File: Training5-5.c
* Date: 2024.02.17
* Author: Lee seung hwan
* Summary of file : Example genuinely recursive function (��� ȣ�� 2�� ����).
*                   But, Delete tail recursion. + Delete recursion call.
* 
#include <stdio.h>
#include <stdlib.h>
#include "Training4-1.h"

void recur(int n)
{
	IntStack stk;
	Initialize(&stk, 100);
Top:
	if (n > 0) {
		Push(&stk, n);
		n = n - 1;
		goto Top;
	}
	if (!IsEmpty(&stk)) {
		Pop(&stk, &n);
		printf("%d\n", n);
		n = n - 2;
		goto Top;
	}
	Terminate(&stk);
}

int main(void)
{
	int x;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &x);
	recur(x);

	return 0;
}
*/
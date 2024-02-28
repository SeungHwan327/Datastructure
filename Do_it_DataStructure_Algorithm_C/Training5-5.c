/*
* File: Training5-5.c
* Date: 2024.02.17
* Author: Lee seung hwan
* Summary of file : Example genuinely recursive function (재귀 호출 2번 수행).
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
	printf("정수를 입력하세요: ");
	scanf_s("%d", &x);
	recur(x);

	return 0;
}
*/
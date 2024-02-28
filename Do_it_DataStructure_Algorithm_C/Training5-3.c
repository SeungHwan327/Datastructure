/*
* File: Training5-3.c
* Date: 2024.02.17
* Author: Lee seung hwan
* Summary of file : Example genuinely recursive function (재귀 호출 2번 수행).
* 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void recur(int n)
{
	if (n > 0)
	{
		recur(n - 1);
		printf("%d\n", n);
		recur(n - 2);
	}
}

int main(void)
{
	int x;
	printf("정수를 입력하세요: ");
	scanf("%d", &x);
	recur(x);

	return 0;
}
*/
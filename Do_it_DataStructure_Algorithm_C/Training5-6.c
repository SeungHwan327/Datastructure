/*
* File: Training5-6.c
* Date: 2024.02.17
* Author: Lee seung hwan
* Summary of file : Make recursion function (recur) by using memoization.
* 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

static char memo[128][1024]; //메모용 문자열 배열

void recur(int n)
{
	if (memo[n + 1][0] != '\0')
		printf("%s", memo[n + 1]);
	else {
		if (n > 0) {
			recur(n - 1);
			printf("%d\n", n);
			recur(n - 2);
			sprintf(memo[n + 1], "%s%d\n%s", memo[n], n, memo[n - 1]);
		}
		else {
			strcpy(memo[n + 1], "");
		}
	}
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
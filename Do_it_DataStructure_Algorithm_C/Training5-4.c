/*
* File: Training5-4.c
* Date: 2024.02.17
* Author: Lee seung hwan
* Summary of file : Example genuinely recursive function (��� ȣ�� 2�� ����).
*                   But, Delete tail recursion. 
* 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void recur(int n)
{
Top:
	if (n > 0)
	{
		recur(n - 1);
		printf("%d\n", n);
		n = n - 2;
		goto Top;
	}
}

int main(void)
{
	int x;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &x);
	recur(x);

	return 0;
}
*/
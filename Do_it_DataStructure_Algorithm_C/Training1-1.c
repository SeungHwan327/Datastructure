/*
* File: Training1-1.c
* Date: 2024.02.06
* Author: Lee seung hwan
* Summary of file: Find a max integer in 3 value.
* 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("\n\n\t\t�� ������ �ִ��� ���մϴ�.\n");
	printf("\t\ta : "); scanf("%d", &a);
	printf("\t\tb : "); scanf("%d", &b);
	printf("\t\tc : "); scanf("%d", &c);

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("\t\tMAX�� ���� %d �Դϴ�.\n", max);
	return 0;
}
*/
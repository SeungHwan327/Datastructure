/*
* File: Training1C-1.c
* Date: 2024.02.06
* Author: Lee seung hwan
* Summary of file: Find Medium integer in 3 value by using function.
* 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Summary of function : Find Medium integer by using 3 parameter.
int med3(int a, int b, int c)
{
	if (a >= b) {
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;
	}
	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else
		return b;
}

int main()
{
	int a, b, c;

	printf("\n\n\t\t�� ������ �߾Ӱ��� ���մϴ�.\n");
	printf("\t\ta�� : "); scanf("%d", &a);
	printf("\t\tb�� : "); scanf("%d", &b);
	printf("\t\tc�� : "); scanf("%d", &c);

	printf("\n�߾Ӱ��� %d�Դϴ�.\n", med3(a, b, c));

	return 0;
}
*/
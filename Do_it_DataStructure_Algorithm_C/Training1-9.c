/*
* File: Training1-9.c
* Date: 2024.02.06
* Author: Lee seung hwan
* Summary of file : Calculate total plus value through value entered by using do-while sentence.
* 
#include <stdio.h>

int main(void)
{
	int n;
	puts("\n\n\t\t1���� n������ ������ ���մϴ�.");
	do {
		printf("\t\tn��: ");
		scanf_s("%d", &n);
	} while (n <= 0);
	int sum = 0; 
	for (int i = 1; i <= n; i++)
		sum += i;
	printf("\t\t1���� %d������ ������ %d�Դϴ�.\n", n, sum);
	return 0;
}
*/
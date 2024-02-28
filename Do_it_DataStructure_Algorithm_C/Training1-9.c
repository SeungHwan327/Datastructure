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
	puts("\n\n\t\t1부터 n까지의 총합을 구합니다.");
	do {
		printf("\t\tn값: ");
		scanf_s("%d", &n);
	} while (n <= 0);
	int sum = 0; 
	for (int i = 1; i <= n; i++)
		sum += i;
	printf("\t\t1부터 %d까지의 총합은 %d입니다.\n", n, sum);
	return 0;
}
*/
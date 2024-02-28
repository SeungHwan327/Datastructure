/*
* File: Training1-11.c
* Date: 2024.02.06
* Author: Lee seung hwan
* Summary of file : Make right angled isosceles triangle by using double-for-sentence.
* 
#include <stdio.h>

int main()
{
	int n;
	int i, j;

	do {
		printf("몇 단 삼각형입니까? : ");
		scanf_s("%d", &n);
	} while (n <= 0);
	
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (i >= j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
*/
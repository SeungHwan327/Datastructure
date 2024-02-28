/*
* File: Training2-1.c
* Date: 2024.02.06
* Author: Lee seung hwan
* Summary of file : Enter 5 value by using array and Print that.
* 
#include <stdio.h>
#define N 5

int main()
{
	int a[N];
	for (int i = 0; i < N; i++) {
		printf("a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
	puts("각 요소의 값");
	for (int i = 0; i < N; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
*/
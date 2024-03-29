/*
* File: Training6-9, 6C-1.c
* Date: 2024.02.19
* Author: Lee seung hwan
* Summary of file : Example Quick sort.
* 
#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do{type t=x; x=y; y=t;} while(0)

void quick(int a[], int left, int right)
{
	int pl = left;
	int pr = right;
	int x = a[(pl + pr) / 2];

	printf("a[%d]~a[%d]: {", left, right);
	for (int i = left; i < right; i++)
		printf("%d", a[i]);
	printf("%d}\n", a[right]);

	do {
		while (a[pl] < x)pl++;
		while (a[pr] > x)pr--;
		if (pl <= pr) {
			swap(int, a[pl], a[pr]);
			pl++;
			pr--;
		}
	} while (pl <= pr);
	if (left < pr) quick(a, left, pr);
	if (pl < right) quick(a, pl, right);
}

int main(void)
{
	int nx;
	puts("퀵 정렬");
	printf("요소 개수: ");
	scanf_s("%d", &nx);
	int* x = calloc(nx, sizeof(int));
	for (int i = 0; i < nx; i++) {
		printf("x[%d]: ", i);
		scanf_s("%d", &x[i]);
	}
	quick(x, 0, nx - 1);
	puts("오름차순으로 정렬했습니다.");
	for (int i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);
	free(x);

	return 0;
}
*/
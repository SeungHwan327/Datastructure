/*
* File: Training6-4.c
* Date: 2024.02.18
* Author: Lee seung hwan
* Summary of file : Example Straight selection sort.
* 
#include <stdio.h>
#include <stdlib.h>
#define swap(type, x, y) do { type t=x; x=y; y=t; } while(0)

void selection(int a[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[min])
				min = j;
		swap(int, a[i], a[min]);
	}
}

int main(void)
{
	int nx;

	puts("버블 정렬");
	printf("요소 개수: ");
	scanf_s("%d", &nx);
	int* x = calloc(nx, sizeof(int));

	for (int i = 0; i < nx; i++) {
		printf("x[%d]: ", i);
		scanf_s("%d", &x[i]);
	}

	selection(x, nx);

	puts("오름차순으로 정렬했습니다.");
	for (int i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);

	return 0;
}
*/
/*
* File: Training6-67c
* Date: 2024.02.19
* Author: Lee seung hwan
* Summary of file : Example Shell Sort(ver2).
* 
#include <stdio.h>
#include <stdlib.h>

void shell(int a[], int n)
{
	int h;
	for (h = 1; h < n; h = h * 3 + 1)
		;
	for(; h>0; h/=3)
		for (int i = h; i < n; i++) {
			int tmp = a[i];
			int j;
			for (j = i - h; j >= 0 && a[j] > tmp; j -= h)
				a[j + h] = a[j];
			a[j + h] = tmp;
		}
}

int main(void)
{
	int nx;
	puts("셸 정렬");
	printf("요소 개수: ");
	scanf_s("%d", &nx);
	int* x = calloc(nx, sizeof(int));
	for (int i = 0; i < nx; i++) {
		printf("x[%d]: ", i);
		scanf_s("%d", &x[i]);
	}

	shell(x, nx);
	puts("오름차순으로 정렬했습니다.");
	for (int i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);
	free(x);

	return 0;
}
*/
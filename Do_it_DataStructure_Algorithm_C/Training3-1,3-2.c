/*
* File: Training3-1,3-2.c
* Date: 2024.02.09
* Author: Lee seung hwan
* Summary of file : Find key value in array by using linear search(sequential search)
*                   How to solve? (1. for-sentence) (2. while-sentence)
* 
#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key)
{
	//while문 사용
	int i = 0;
	while (1) {
		if (i == n)
			return -1;
		if (a[i] == key)
			return i;
		i++;
	}

	//for문 사용
	for (int i = 0; i < n; i++) {
		if (a[i] == key)
			return i;
		return -1;
	}
}

int main(void)
{
	int nx, ky;
	puts("선형 검색");
	printf("요소 개수: ");
	scanf_s("%d", &nx);
	int* x = calloc(nx, sizeof(int));
	for (int i = 0; i < nx; i++) {
		printf("x[%d]: ", i);
		scanf_s("%d", &x[i]);
	}
	printf("검색값: ");
	scanf_s("%d", &ky);
	int idx = search(x, nx, ky);
	if (idx == -1)
		puts("검색에 실패했습니다.");
	else
		printf("%d(은)는 x[%d]에 있습니다.\n", ky, idx);
	free(x);

	return 0;
}
*/
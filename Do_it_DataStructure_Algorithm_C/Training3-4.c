/*
* File: Training3-4.c
* Date: 2024.02.09
* Author: Lee seung hwan
* Summary of file : Find key value in sorting array by using binary search.
* 
#include <stdio.h>
#include <stdlib.h>

//Summary of function : Find key value by using pl, pc, pr and Return pc or -1.
int bin_search(const int a[], int n, int key)
{
	int pl = 0;
	int pr = n - 1;
	do {
		int pc = (pl + pr) / 2;
		if (a[pc] == key)
			return pc;
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);
	return -1;
}

int main(void)
{
	int nx, ky;

	puts("이진 검색");
	printf("요소 개수: ");
	scanf_s("%d", &nx);
	int* x = calloc(nx, sizeof(int));
	printf("오름차순으로 입력하세요.\n");
	for (int i = 0; i < nx; i++) {
		do {
			printf("x[%d]: ", i);
			scanf_s("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}
	printf("검색값: ");
	scanf_s("%d", &ky);
	int idx = bin_search(x, nx, ky);
	if (idx == -1)
		puts("검색에 실패했습니다.");
	else
		printf("%d는(은) x[%d]에 있습니다.\n", ky, idx);
	free(x);

	return 0;
}
*/
/*
* File: Training3-3.c
* Date: 2024.02.09
* Author: Lee seung hwan
* Summary of file : Find key value in linear random array by using sentinel mothod.
* 
#include <stdio.h>
#include <stdlib.h>

//Summary of function : Find key value and return -1 or i
                        by using conditional operator(삼항연산자).
int search(int a[], int n, int key)
{
	int i = 0;
	a[n] = key;
	while (1) {
		if (a[i] == key)
			break;
		i++;
	}
	return i == n ? -1 : i;
}

int main(void)
{
	int nx, ky;

	puts("선형 검색(보초법)");
	printf("요소 개수: ");
	scanf_s("%d", &nx);
	int* x = calloc(nx + 1, sizeof(int));
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
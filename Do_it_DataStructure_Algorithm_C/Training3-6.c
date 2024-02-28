/*
* File: Training3-6.c
* Date: 2024.02.13
* Author: Lee seung hwan
* Summary of file : Search particular value in sorting array(Descending) by using bsearch-function.
* 
#include <stdio.h>
#include <stdlib.h>

// Summary of function : Return -1 or 1 or 0 according to pointer value.
int int_cmpr(const int* a, const int* b)
{
	if (*a < *b)
		return 1;
	else if (*a > *b)
		return -1;
	else
		return 0;
}

int main(void)
{
	int nx, ky;
	puts("bsearch �Լ��� ����Ͽ� �˻�");
	printf("��� ����: "); 
	scanf_s("%d", &nx);
	int* x = calloc(nx, sizeof(int));
	printf("������������ �Է��ϼ���.\n");
	printf("x[0]: ");
	scanf_s("%d", &x[0]);
	for (int i = 1; i < nx; i++) {
		do {
			printf("x[%d]: ", i);
			scanf_s("%d", &x[i]);
		} while (x[i] > x[i - 1]);
	}
	printf("�˻���: ");
	scanf_s("%d", &ky);
	int* p = bsearch(
		&ky,
		x,
		nx,
		sizeof(int),
		(int(*)(const void*, const void*))int_cmpr
	);
	if (p == NULL)
		puts("�˻��� �����߽��ϴ�.");
	else
		printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n", ky, (int)(p - x));
	free(x);
	return 0;
}
*/
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

	puts("���� �˻�");
	printf("��� ����: ");
	scanf_s("%d", &nx);
	int* x = calloc(nx, sizeof(int));
	printf("������������ �Է��ϼ���.\n");
	for (int i = 0; i < nx; i++) {
		do {
			printf("x[%d]: ", i);
			scanf_s("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}
	printf("�˻���: ");
	scanf_s("%d", &ky);
	int idx = bin_search(x, nx, ky);
	if (idx == -1)
		puts("�˻��� �����߽��ϴ�.");
	else
		printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n", ky, idx);
	free(x);

	return 0;
}
*/
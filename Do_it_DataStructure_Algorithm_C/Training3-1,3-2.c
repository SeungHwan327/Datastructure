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
	//while�� ���
	int i = 0;
	while (1) {
		if (i == n)
			return -1;
		if (a[i] == key)
			return i;
		i++;
	}

	//for�� ���
	for (int i = 0; i < n; i++) {
		if (a[i] == key)
			return i;
		return -1;
	}
}

int main(void)
{
	int nx, ky;
	puts("���� �˻�");
	printf("��� ����: ");
	scanf_s("%d", &nx);
	int* x = calloc(nx, sizeof(int));
	for (int i = 0; i < nx; i++) {
		printf("x[%d]: ", i);
		scanf_s("%d", &x[i]);
	}
	printf("�˻���: ");
	scanf_s("%d", &ky);
	int idx = search(x, nx, ky);
	if (idx == -1)
		puts("�˻��� �����߽��ϴ�.");
	else
		printf("%d(��)�� x[%d]�� �ֽ��ϴ�.\n", ky, idx);
	free(x);

	return 0;
}
*/
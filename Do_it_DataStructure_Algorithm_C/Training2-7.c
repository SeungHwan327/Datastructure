/*
* File: Training2-7.c
* Date: 2024.02.07
* Author: Lee seung hwan
* Summary of file : Change element in array by using swap mecro function.
* 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(type,x,y) do{type t=x; x=y; y=t;}while(0)

void ary_reverse(int a[], int n);

int main(void)
{
	int nx;
	printf("��� ����: ");
	scanf_s("%d", &nx);
	srand(time(NULL));
	int* x = calloc(nx, sizeof(int));
	for (int i = 0; i < nx; i++) {
		x[i] = rand() % 10;
	}
	ary_reverse(x, nx);
	printf("�迭�� ��Ҹ� �������� �����߽��ϴ�.\n");
	for (int i = 0; i < nx; i++) 
		printf("x[%d] = %d\n", i, x[i]);
	free(x);
	return 0;
}

//Summary of function : Swap and repeat first value and last value.
void ary_reverse(int a[], int n)
{
	for (int i = 0; i < n / 2; i++)
		swap(int, a[i], a[n - i - 1]);
}
*/
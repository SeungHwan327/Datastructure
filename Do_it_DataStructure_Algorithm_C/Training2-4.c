/*
* File: Training2-4.c
* Date: 2024.02.07
* Author: Lee seung hwan
* Summary of file : Allocate dynamic array by using calloc function.
* 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int na;
	printf("\n\n\t\t��� ����: ");
	scanf_s("%d", &na);
	int* a = calloc(na, sizeof(int));

	if (a == NULL) {
		printf("\t\t�޸� �Ҵ翡 �����߽��ϴ�.\n");
	}
	else {
		printf("\t\t%d���� ������ �Է��ϼ���.\n", na);
		for (int i = 0; i < na; i++)
		{
			printf("\t\ta[%d]: ", i);
			scanf_s("%d", &a[i]);
		}
		printf("\n\t\t�� ��Ұ��� �Ʒ��� �����ϴ�.\n");
		for (int i = 0; i < na; i++)
			printf("\t\ta[%d] = %d\n", i, a[i]);
		free(a);
	}
	return 0;
}
*/
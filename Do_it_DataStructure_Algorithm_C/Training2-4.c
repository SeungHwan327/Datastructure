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
	printf("\n\n\t\t요소 개수: ");
	scanf_s("%d", &na);
	int* a = calloc(na, sizeof(int));

	if (a == NULL) {
		printf("\t\t메모리 할당에 실패했습니다.\n");
	}
	else {
		printf("\t\t%d개의 정수를 입력하세요.\n", na);
		for (int i = 0; i < na; i++)
		{
			printf("\t\ta[%d]: ", i);
			scanf_s("%d", &a[i]);
		}
		printf("\n\t\t각 요소값은 아래와 같습니다.\n");
		for (int i = 0; i < na; i++)
			printf("\t\ta[%d] = %d\n", i, a[i]);
		free(a);
	}
	return 0;
}
*/
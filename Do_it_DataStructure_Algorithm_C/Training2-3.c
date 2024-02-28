/*
* File: Training2-3.c
* Date: 2024.02.07
* Author: Lee seung hwan
* Summary of file : Allocate dynamic variable by using calloc function.
* 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* x = calloc(1, sizeof(int));
	if (x == NULL) {
		puts("�޸� �Ҵ翡 �����߽��ϴ�.\n");
	}
	else {
		*x = 57;
		printf("*x = %d\n", *x);
		free(x);
	}
	return 0;
}
*/
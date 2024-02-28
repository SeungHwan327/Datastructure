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
		puts("메모리 할당에 실패했습니다.\n");
	}
	else {
		*x = 57;
		printf("*x = %d\n", *x);
		free(x);
	}
	return 0;
}
*/
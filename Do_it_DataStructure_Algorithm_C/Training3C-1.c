/*
* File: Training3C-1.c
* Date: 2024.02.13
* Author: Lee seung hwan
* Summary of file : Print +,* chart by using function pointer.
* 
#include <stdio.h>

int sum(int x1, int x2)
{
	return x1 + x2;
}

int mul(int x1, int x2)
{
	return x1 * x2;
}

void kuku(int(*calc)(int, int))
{
;	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++)
			printf("%3d", (*calc)(i, j));
		putchar('\n');
	}
}

int main(void)
{
	puts("µ¡¼ÀÇ¥");
	kuku(sum);
	puts("\n°ö¼ÀÇ¥");
	kuku(mul);

	return 0;
}
*/
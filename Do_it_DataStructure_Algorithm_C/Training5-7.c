/*
* File: Training5-7.c
* Date: 2024.02.17
* Author: Lee seung hwan
* Summary of file : Top of Hanoi's 
* 
#include <stdio.h>

void move(int no, int x, int y)
{
	if (no > 1)
		move(no - 1, x, 6 - x - y);
	printf("원반[%d]를(을) %d 기둥에서 %d 기둥으로 옮김\n", no, x, y);
	if (no > 1)
		move(no - 1, 6 - x - y, y);
}

int main(void)
{
	int n;
	printf("하노이의 탑\n원반 개수: ");
	scanf_s("%d", &n);
	move(n, 1, 3);
	return 0;
}
*/
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
	printf("����[%d]��(��) %d ��տ��� %d ������� �ű�\n", no, x, y);
	if (no > 1)
		move(no - 1, 6 - x - y, y);
}

int main(void)
{
	int n;
	printf("�ϳ����� ž\n���� ����: ");
	scanf_s("%d", &n);
	move(n, 1, 3);
	return 0;
}
*/
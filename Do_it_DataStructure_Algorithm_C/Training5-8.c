/*
* File: Training5-8.c
* Date: 2024.02.18
* Author: Lee seung hwan
* Summary of file : Branching 8X8 number of cases.
* 
#include <stdio.h>

int pos[8];

void print(void)
{
	for (int i = 0; i < 8; i++)
	{
		printf("%2d", pos[i]);
	}
	putchar('\n');
}

void set(int i)
{
	for (int j = 0; j < 8; j++) {
		pos[i] = j;
		if (i == 7)
			print();
		else
			set(i + 1);
	}
}

int main(void)
{
	set(0);

	return 0;
}
*/
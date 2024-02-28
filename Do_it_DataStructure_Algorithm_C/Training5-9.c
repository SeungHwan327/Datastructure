/*
* File: Training5-9.c
* Date: 2024.02.18
* Author: Lee seung hwan
* Summary of file : Solution 8X8 Look problem by using recursive function.
* 
#include <stdio.h>

int flag[8];
int pos[8];

void print(void)
{
	for (int i = 0; i < 8; i++)
		printf("%2d", pos[i]);
	putchar('\n');
}

void set(int i)
{
	for (int j = 0; j < 8; j++) {
		if (!flag[j]) {
			pos[i] = j;
			if (i == 7)
				print();
			else {
				flag[j] = 1;
				set(i + 1);
				flag[j] = 0;
			}
		}
	}
} 

int main(void)
{
	for (int i = 0; i < 8; i++)
		flag[i] = 0;
	set(0);

	return 0;
}
*/
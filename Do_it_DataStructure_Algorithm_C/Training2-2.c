/*
* File: Training2-2.c
* Date: 2024.02.06
* Author: Lee seung hwan
* Summary of file : Reset int-array and Print that.
* 
#include <stdio.h>

int main(void)
{
	int a[5] = { 1,2,3,4,5 };
	int na = sizeof(a) / sizeof(a[0]);
	printf("�迭 a�� ��� ������ %d�Դϴ�.\n", na);

	for (int i = 0; i < na; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}
*/
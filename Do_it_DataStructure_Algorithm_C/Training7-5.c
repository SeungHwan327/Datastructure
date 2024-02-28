/*
* File: Training7-5.c
* Date: 2024.02.27
* Author: Lee seung hwan
* Summary of file : Swap s1 and s2 string by using double pointer.
* 
#include <stdio.h>

void swap_ptr(char** x, char** y)
{
	char* tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(void)
{
	char* s1 = "ABCD";
	char* s2 = "EFGH";

	printf("������ s1�� %s�� ����ŵ�ϴ�.\n", s1);
	printf("������ s2�� %s�� ����ŵ�ϴ�.\n", s2);

	swap_ptr(&s1, &s2);

	puts("\n������ s1�� s2�� ���� ���� ��ȯ�߽��ϴ�.\n");

	printf("������ s1�� %s�� ����ŵ�ϴ�.\n", s1);
	printf("������ s2�� %s�� ����ŵ�ϴ�.\n", s2);

	return 0;
}
*/
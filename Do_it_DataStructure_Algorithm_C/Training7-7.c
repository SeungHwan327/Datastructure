/*
* File: Training7-7.c
* Date: 2024.02.27
* Author: Lee seung hwan
* Summary of file : Calculate total Lenght in string.(ver2)
* 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int str_len(const char* s)
{
	int len = 0;
	while (*s++)
		len++;
	return len;
}

int main(void)
{
	char str[256];
	printf("���ڿ�: ");
	scanf("%s", str);
	printf("�� ���ڿ��� ���̴� %d�Դϴ�.\n", str_len(str));

	return 0;
}
*/
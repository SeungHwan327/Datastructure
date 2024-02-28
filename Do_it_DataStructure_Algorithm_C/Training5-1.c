/*
* File: Training5-1.c
* Date: 2024.02.17
* Author: Lee seung hwan
* Summary of file : Recursive program basic structure.
* 
#include <stdio.h>

//Summary of function : Recursive function.
int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int main(void)
{
	int x;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &x);
	printf("%d�� ������������ %d�Դϴ�.\n", x, factorial(x));
	
	return 0;
}
*/
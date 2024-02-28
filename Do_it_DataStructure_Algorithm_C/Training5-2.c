/*
* File: Training5-2.c
* Date: 2024.02.17
* Author: Lee seung hwan
* Summary of file : Find greatest common divisor 
                    by using Euclidean method of mutual division.
* 
* 
#include <stdio.h>

int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		gcd(y, x % y);
}

int main(void)
{
	int x, y;
	printf("두 정수를 입력하세요: ");
	scanf_s("%d %d", &x, &y);
	printf("%d와 %d의 최대공약수는 %d입니다.\n", x, y, gcd(x, y));
	return 0;
}
*/
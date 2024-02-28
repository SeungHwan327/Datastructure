/*
* File: Training1-2.c
* Date: 2024.02.06
* Author: Lee seung hwan
* Summary of file: Find a max integer in 3 value by using function.
* 
#include <stdio.h>

int max3(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int main()
{
	
	printf("\n\n\t\tmax3(%d, %d, %d) = %d\n", 3, 2, 1, max3(3, 2, 1));
	printf("\t\tmax3(%d, %d, %d) = %d\n", 3, 2, 2, max3(3, 2, 2));
	printf("\t\tmax3(%d, %d, %d) = %d\n", 3, 1, 2, max3(3, 1, 2));
	printf("\t\tmax3(%d, %d, %d) = %d\n", 3, 2, 3, max3(3, 2, 3));
	printf("\t\tmax3(%d, %d, %d) = %d\n", 2, 1, 3, max3(2, 1, 3));
	return 0;
}
*/
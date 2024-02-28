/*
* File: Training2-9.c
* Date: 2024.02.09
* Author: Lee seung hwan
* Summary of file : Check and print Prime number(1~999).
* 
#include <stdio.h>

int main(void)
{
	unsigned long counter = 0;
	for (int n = 2; n <= 1000; n++) {
		int i;
		for (i = 2; i < n; i++) {
			counter++;
			if (n % i == 0)
				break;
		}
		if (n == i)
			printf("%d\n", n);
	}
	printf("³ª´°»ùÀ» ½ÇÇàÇÑ È½¼ö: %lu\n", counter);
	return 0;
}
*/
/*
* File: Training2-10.c
* Date: 2024.02.09
* Author: Lee seung hwan
* Summary of file : Check and print Prime number(1~999). More efficient Ver2.
* 
#include <stdio.h>

int main(void)
{
	int prime[500];
	int ptr = 0;
	unsigned long counter = 0;
	prime[ptr++] = 2;
	for (int n = 3; n <= 1000; n += 2) {
		int i;
		for (i = 1; i < ptr; i++) {
			counter++;
			if (n % prime[i] == 0)
				break;
		}
		if (ptr == i)
			prime[ptr++] = n;
	}
	for (int i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);
	printf("³ª´°¼ÀÀ» ½ÇÇàÇÑ È½¼ö: %lu\n", counter);

	return 0;
}
*/
/*
* File: Training2-11.c
* Date: 2024.02.09
* Author: Lee seung hwan
* Summary of file : Check and print Prime number(1~999). More efficient Ver3.
* 
#include <stdio.h>

int main(void)
{
	int prime[500];
	int ptr = 0;
	unsigned long counter = 0;
	prime[ptr++] = 2;
	prime[ptr++] = 3;
	
	for (int n = 5; n <= 1000; n += 2) {
		int i;
		int flag = 0;
		for (i = 1; counter++, prime[i] * prime[i] <= n; i++) {
			counter++;
			if (n % prime[i] == 0) {
				flag = 1;
				break;
			}
		}
		if (!flag)
			prime[ptr++] = n;
	}
	for (int i = 0; i < ptr; i++)
		printf("%d\n", prime[i]);
	printf("°ö¼À°ú ³ª´°¼ÀÀ» ½ÇÇàÇÑ È½¼ö: %lu\n", counter);

	return 0;
}
*/
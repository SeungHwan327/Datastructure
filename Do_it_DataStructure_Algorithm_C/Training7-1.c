/*
* File: Training7-1.c
* Date: 2024.02.27
* Author: Lee seung hwan
* Summary of file : Print string "STRING" by using binary number and hexadecimal number.
* 
#include <stdio.h>
#include <limits.h>

void str_dump(const char* s)
{
	for (; *s != '\0'; s++) {
		printf("%c %0*X ", *s, (CHAR_BIT + 3) / 4, *s);
		for (int i = CHAR_BIT - 1; i >= 0; i--)
			putchar(((*s >> i) & 1U) ? '1' : '0');
		putchar('\n');
	}
}

int main(void)
{
	str_dump("STRING");
	return 0;
}
*/
#include <stdio.h>

int str_chr(const char* s, int c)
{
	int i = 0;
	c = (char)c;
	while (s[i] != c) {
		if (s[i] == '\0')
			return -1;
	}
}
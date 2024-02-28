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

	printf("포인터 s1은 %s를 가리킵니다.\n", s1);
	printf("포인터 s2는 %s를 가리킵니다.\n", s2);

	swap_ptr(&s1, &s2);

	puts("\n포인터 s1과 s2의 값을 서로 교환했습니다.\n");

	printf("포인터 s1은 %s를 가리킵니다.\n", s1);
	printf("포인터 s2는 %s를 가리킵니다.\n", s2);

	return 0;
}
*/
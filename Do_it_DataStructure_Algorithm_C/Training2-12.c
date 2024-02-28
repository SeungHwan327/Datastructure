/*
* File: Training2-12.c
* Date: 2024.02.09
* Author: Lee seung hwan
* Summary of file : Calculate date from particular year to date
                    by using multidimensional array.
* 
* 
#include <stdio.h>

//다차원 배열을 전역변수로 지정하여 초기화
int mdays[][12] = {
	{31,28,31,30,31,30,31,31,30,31,30,31},
	{31,29,31,30,31,30,31,31,30,31,30,31},
};

//Summary of function : Cheak isleap.
int isleap(int year)
{
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

//Summary of function : Calculate total days by using isleap function and for_sentence.
int dayof_year(int y, int m, int d)
{
	int days = d;
	for (int i = 1; i < m; i++)
		days += mdays[isleap(y)][i - 1];
	return days;
}

int main(void)
{
	int retry;
	do {
		int year, month, day;
		printf("년: "); scanf_s("%d", &year);
		printf("월: "); scanf_s("%d", &month);
		printf("일: "); scanf_s("%d", &day);
		printf("%d년의 %d일째입니다.\n", year, dayof_year(year, month, day));
		printf("다시 할까요?(1 ...예/ 2 ...아니오): ");
		scanf_s("%d", &retry);
	} while (retry==1);

	return 0;
}
*/
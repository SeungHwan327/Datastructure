/*
* File: Training2-6.c
* Date: 2024.02.07
* Author: Lee seung hwan
* Summary of file : Find max value in array by using dynamic memory allocation and rand(), srand(), time.h.
* 
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int maxof(const int a[], int n);

int main(void)
{
	int number;
	printf("사람 수: ");
	scanf_s("%d", &number);
	int* height = calloc(number, sizeof(int));
	srand(time(NULL));
	for (int i = 0; i < number; i++) {
		height[i] = 100 + rand() % 90;
		printf("height[%d] = %d\n", i, height[i]);
	}
	printf("최댓값은 %d입니다.\n", maxof(height, number));
	free(height);
	return 0;
}


//Summary of function : Find max value in array.
int maxof(const int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++) 
		if (a[i] > max)max = a[i];
	return max;
}
*/

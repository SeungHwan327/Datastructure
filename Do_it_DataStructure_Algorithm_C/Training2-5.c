/*
* File: Training2-5.c
* Date: 2024.02.07
* Author: Lee seung hwan
* Summary of file : Find max value in array element by using calloc function.
* 
#include <stdio.h>
#include <stdlib.h>

int maxof(const int a[], int n);

int main(void)
{
    int number;
    printf("사람 수: ");
    scanf_s("%d", &number);
    int* height = calloc(number, sizeof(int));
    printf("%d 명의 키를 입력하세요.\n", number);
    for (int i = 0; i < number; i++) {
        printf("height[%d]: ",i);
        scanf_s("%d", &height[i]);
    }
    printf("최댓값은 %d 입니다.", maxof(height, number));
    free(height);
    return 0;
}

//Summary of function : Find max value in array.
int maxof(const int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) max = a[i];
    }
    return max;
}
*/
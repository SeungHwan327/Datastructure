/*
* File: Training2-13.c
* Date: 2024.02.09
* Author: Lee seung hwan
* Summary of file : Save physic information by using structure and 
                    Calculate average height and vision distribution map 
					by using function.
*
#include <stdio.h>
#define VMAX 21

typedef struct {
	char name[20];
	int height;
	double vision;
}PhysCheck;

//Summary of function : Calculate average height and return.
double ave_height(const PhysCheck dat[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += dat[i].height;
	return sum / n;
}

//Summary of function : Calculate vision distribution map.
void dist_vision(const PhysCheck dat[], int n, int dist[])
{
	for (int i = 0; i < VMAX; i++)
		dist[i] = 0;
	for (int i = 0; i < n; i++)
		if (dat[i].vision >= 0.0 && dat[i].vision <= VMAX / 10.0)
			dist[(int)(dat[i].vision * 10)]++;
}

int main(void)
{
	PhysCheck x[] = {
		{"박현규",162,0.3},
		{"함진아",173,0.7},
		{"최윤미",175,2.0},
		{"홍연의",171,1.5},
		{"이수진",168,0.4},
		{"김영준",174,1.2},
		{"박용규",169,0.8}
	};
	int nx = sizeof(x) / sizeof(x[0]);
	int vdist[VMAX];
	puts("***  신체검사표  ***");
	puts("   이름      키  시력");
	puts("------------------------");
	for (int i = 0; i < nx; i++)
		printf("%-18.18s%4d%5.1f\n", x[i].name, x[i].height, x[i].vision);
	printf("\n 평균 키: %5.1f cm\n", ave_height(x, nx));
	dist_vision(x, nx, vdist);
	printf("\n시력 분포\n");
	for (int i = 0; i < VMAX; i++)
		printf("%3.1f ~: %2d 명\n", i / 10.0, vdist[i]);

	return 0;
}
*/
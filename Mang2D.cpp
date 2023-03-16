#include "stdio.h"
#include "conio.h"

#define MAX 100

typedef int MANG2D[MAX][MAX];

int NhapMang2D(MANG2D mang2D, int &d, int &c)
{
	printf("TB: moi ban nhap so dong: "); scanf("%d", &d);
	printf("TB: moi ban nhap so cot: "); scanf("%d", &c);
	
	for (int i = 0; i < d; i++)
	{
		//printf("Nhap dong %d \n", i);
		for(int j = 0; j<c; j ++)
		{
			printf("\n ---Nhap phan tu Mang2D[%d][%d]=", i,j);
			scanf("%d", &mang2D[i][j]);
		}
	}
	return 0;
}

int XuatMang2D(MANG2D mang2D, int d, int c)
{
	for (int i = 0; i < d; i++)
	{
		for(int j = 0; j<c; j ++)
		{
			printf("\n Mang2D[%d][%d]=[%d]", i,j, mang2D[i][j]);
		}
	}
	return 0;
}

int main()
{
	int mang2D[MAX][MAX];
	int d, c;
	NhapMang2D(mang2D, d, c);
	XuatMang2D(mang2D, d, c);
	getch();
	return 0;
}

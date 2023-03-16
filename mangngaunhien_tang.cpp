#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int mangngaunhien(int mang[], int &n){
	printf ("NHAP VAO SO PT CUA MANG: ");
	scanf("%d",&n);
	
	int ngaunhien;
		srand((int)time(NULL));
		
	for (int i=0;i<n;i++){

	mang[0]=rand();
	mang[i]=mang[i-1]+rand();
	
		printf("pt[%d]cua mang= %d\n",i,mang[i]);	
	}

		return 0;}

int main(){
	int mang[MAX],n;
	
		mangngaunhien(mang,n);
		
	getch();
	return 0;
}

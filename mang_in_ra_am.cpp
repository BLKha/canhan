#include <stdio.h>
#include <conio.h>
#define MAX 1000

float nhapmang(float mang[],float &n){
	printf("nhap so pt cua mang= ");
	scanf("%f",&n);
	for(int i=0;i<n;i++){
		printf("pt[%d]= ",i);
		scanf("%f",&mang[i]);	
	}
	return 0;
}
float xuatmang(float mang[],float n)
{
	
	printf("phan tu am cua mang la: \n");
	for (int i=0;i<n;i++){
	if (mang[i]<0)
	
			printf("pt[%d] = %0.3f\n",i,mang[i]);
		}
	return 0;
}

int main(){
	float mang[MAX],n;
	nhapmang(mang,n);
	xuatmang(mang,n);
	getch();
	return 0;
}

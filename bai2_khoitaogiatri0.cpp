#include <stdio.h>
#include <conio.h>
#define MAX 1000
int nhapmang(int mang[],int n)
{
	for(int i=0;i<n;i++){
		mang[i]=0;
	}
}
int xuatmang(int mang[], int n){

		for(int i=0;i<n;i++){
			printf("pt[%d]= %d\n",i,mang[i]);
		}
}
int main(){
	int n;
	int mang[MAX];
	printf("nhap so pt cua mang: ");
	scanf("%d",&n);
	nhapmang(mang,n);
	xuatmang(mang,n);
	getch();
	return 0;
}

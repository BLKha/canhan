#include <stdio.h>
#include <conio.h>
#define MAX 1000
int nhapmang(int mang[],int &n){
	printf("mhap so pt cua mang= ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("pt[%d]= ",i);
		scanf("%d",&mang[i]);
	}
	return 0;
}
int xuatmang(int mang[],int n){
	printf("**********************\n");
	printf("phan tu chan < 20 cua mang la: \n");
	for(int i=0;i<n;i++){
		if(mang[i]%2==0 && mang[i]< 20)
		printf("pt[%d]= %d\n",i,mang[i]);
	}
	return 0;
}
int main(){
	int mang[MAX],n;
	nhapmang(mang,n);
	xuatmang(mang,n);
	getch();
	return 0;
}

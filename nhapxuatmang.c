#include <stdio.h>
#include <conio.h>
#define MAX 1000

float nhapmang(float mang[], float &n){
	printf("nhap so phan tu cua mang: ");
	scanf("%f",&n);
	printf("nhap mang cos %d phan tu ",n);
	for(int i=0;i<n;i++){
		printf("mang[%f]=",i);
		scanf("%f",&mang[i]);
	};
	return 0;
};
float xuatmang(float mang[],float n){
	printf("-------------------------");
	for(i=0;i<n;i++){
		printf("mang[%f]=%f\n",i,mang[i]);
	}
	return 0;
}
int main(){
	int mang[MAX],n;
	
	nhapmang(mang,n);
	xuatmang(mang,n);
	
	return 0;
}

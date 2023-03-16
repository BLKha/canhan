#include <stdio.h>
#include <conio.h>
#define MAX 1000
// ham nhap mang vao
int nhapmang(int mang[], int &n){
	
		printf("nhap so phan tu cua mang: ");
		scanf("%d",&n);
	//	printf("nhap mang co %d phan tu ",n);
	
	for(int i=0;i<n;i++){
		
		printf("\n pt[%d]=",i);
		scanf("%d",&mang[i]);
	}
	return 0;
}
// ham xuat mang ra 
int xuatmang(int mang[],int n){
	
		printf("-------------------------");
	
	for(int i=0;i<n;i++){
		
		printf("\n mang[%d]=%d",i,mang[i]);
		
	}{
	int tangdan=0;
	int tangdan(int mang[],int n);
	  for (int i=0;i<n;i++){
	  	if (mang[0]<mang[i])
	  	tangdan=mang[i];
	  	
	  }
	return tangdan;
}
int main(){
	int mang[MAX],n;
	
	nhapmang(mang,n);
	xuatmang(mang,n);
	tangdan(mang,n);
	return 0;
}

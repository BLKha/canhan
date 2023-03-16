#include <stdio.h>
#include <conio.h>
#define MAX 1000
int nhapmang(int mang[],int &n){
	printf("nhap so phan tu cua mang= ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("pt[%d]= ",i);
		scanf("%d",&mang[i]);
	}
	return 0;
}
// kiemtra so nguyen to
int kiemtraSNT(int n){
	if (n<2)
		return 0;
	else{
		for(int i=2;i<n;i++)
			if (n%i==0)
				return 0;
		return 1;		
	}
}
// nhap mvao 1 so và so sánh voi các SNT co trong mang
	int SNTnho(int mang[], int n, int &x) 
{ 
	printf ("nhap so n= ");
	scanf("%d",&x);
	printf("Cac so nguyen to nho hon %d co trong mang: \n"); 
	
	for (int i = 0; i < n; i++) 
		if (mang[i] < x && kiemtraSNT(mang[i])) 
			printf("pt[%d]= %d\n",i, mang[i]); 
	
} 
// xuat mang ra man hinh
int xuatmang(int mang[],int n){
	
	for (int i=0;i<n;i++){
	if(kiemtraSNT(mang[i])){
		printf("pt[%d]= %d\n",i,mang[i]);

	}
	
} 
}


int main(){
	int mang[MAX],n,x;
	nhapmang(mang,n);
	xuatmang(mang,n);
	SNTnho(mang,n,x);
	getch();
	return 0;
}

//MSSV: 221629
//Ho va ten: Bùi Lâm Kha
//Lop: DH22TIN06


#include "stdio.h"
#include "conio.h"

int NhapN();
int tinhcau1(int n);
int tinhcau2(int n);
int tinhcau3(int n);
int tinhcau4(int n);
int tinhcau5(int n);
int main()
{
	int n = NhapN();
	int s1= tinhcau2(n);
	int s2=tinhcau3(n);
	int s3=tinhcau4(n);
	int s4=tinhcau5(n);
	int tich_le = tinhcau1(n);
	printf("KQ cau 1: %d \n", tich_le);
	printf("KQ cau 2= %d\n",s1);
	printf("KQ cau 3= %d\n",s2);
	printf("KQ cau 4= %d\n",s3);
	printf("KQ cau 5= %d\n",s4);
	getch();
	return 0;
}

int NhapN()
{	
	int n=1;
	printf("nhap so n= ");
	scanf("%d",&n);
	return n;	
}

int tinhcau1(int n)
{
	int p=1;
	for(int i=1;i<n;i++){
		p = p* (2*i+1);
	
		
	}return p;
}
//câu2
int tinhcau2(int n){
	int s1=0;
	for(int i=0;i<=n;i++){
		if(i%2==1){
		s1=s1+i;	
		}
	else{
		s1=s1-i;
	}
}
return s1;
}
int tinhcau3(int n){
	int congdon=1;
	int s2=0;
	for(int i=1;i<=n;i++){
		congdon=congdon*i;
		s2=s2+congdon;
	}
	return s2;
}
int tinhcau4(int n){
	int tam=1;
	int s3=0;
	for(int i=1;i<=n;i++){
		tam=i*i;
		s3=s3+tam;
}
return s3;
}
int tinhcau5(int n){
	int tam=0;
	int s4=0;
	for(int i=1;i<n;i++){
		tam=tam+i;
		s4=s4+tam;
}
return s4;
}

 

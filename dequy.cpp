#include <stdio.h>
#include <conio.h>
 
 int tinhtong(int n){
 	int tong=0;
 	if (n==0){
 		return 0;
	 }
	 else{
	 	tong=tinhtong(n-1)+n;
	 }	
 }
 // thuât toan
 int tinhgiaithua(int n){
 	int giaithua=0;
 	if (n==0){
 		return 1;
	 }
	 else{
	 	giaithua=tinhgiaithua(n-1)*n;
	 }
 }
 // tinh toan
 float tinhluythua(int x,int n){
 	float luythua=0;
 	
 	if(n==0){
 		return 1;
	 }
	 else{
	 	for(int i=x;i<n;i++)
	 	luythua= x*tinhluythua(x,n-1);
	 }
 }
 
 int main(){
 	int tong,n,x;
 	int giaithua;
	 float luythua;
 	printf("nhap n= ");scanf("%d",&n);
 	tong= tinhtong(n);
 	printf("Ket qua Tong= %d\n",tong);
 	giaithua=tinhgiaithua(n);
 	printf("ket qua Giai Thua= %d\n",giaithua);
 	printf("nhap so mu= ");scanf("%d",&x);
 	luythua=tinhluythua(x,n);
 	printf("luy thua = %d",luythua);
 	return 0;
 }
 

#include<stdio.h>

float tinhluythua(int x,int n){
 	int i=0;
 	float lt=1;
 	for (i=0;i<n;i++){
 		lt=lt*x;
	 }
	 return lt;
}
int main(){
	int x=0;
	int n=0;
	float lt=1;
	
	printf("nhap vao x= ");scanf("%d",&x);
	printf("nhap vao n= ");scanf("%d",&n);
	
	lt = tinhluythua(x,n);
	
	printf("ket qua phep tinh =%f",lt);
	
	return 0;
}

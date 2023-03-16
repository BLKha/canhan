#include <stdio.h>
#include <limits.h>
int main(){
	int a,b;
	printf("nhap a: \n");
	scanf("%d",&a);
	printf("nhap b: \n");
	scanf("%d",&b);
	
	int tong,tich,hieu;
	float thuong;
	
	tong= a+b;
	tich= a*b;
	thuong=(float)(a/b);
	hieu=a-b;
	
	printf(" ",tong);
	printf(" ",tich);
	printf(" ",thuong);
	printf(" ",hieu);
	return 0;
}

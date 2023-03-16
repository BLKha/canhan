#include <stdio.h>
#include <conio.h>


int main(){
	int a,b,r,bc;
	printf("nhap a= ");
	scanf("%d",&a);
	printf("nhap b= ");
	scanf("%d",&b);
	
	while (b !=0){
		r=a %b;
		a=b;
		b=r;
	}
	bc=a*(b/r);
	printf("uoc chung lon nhat cua a va b la: %d\n",a);
	printf("boi chung nho nhat= %d\n",bc);
	return 0;
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int gttd(int n){
	int m=0;
	if(n<0){
		m=n*(-1);
	
	return m;
}
	else{
		return n;
	}
}

int main(){
	int n,kq;
	printf("nhap n= ");
	scanf("%d",&n);
	kq=gttd(n);
	printf("gia tri tuyet doi cua %d la :  %d",n,kq);
	getch();
	return 0;
}

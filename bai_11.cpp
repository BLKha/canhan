#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int luythua(int n){
	int tinh=1;
	int s=0;
	if(n<=0){
		printf("nhap n>0");
		exit(0);
	}
	else{
	for(int i=0;i<=n;i++){
		tinh=i*i;
		s=s+tinh;
	}
	return s;
}
}

int main(){
	int s,n;
	printf("nhap n= ");
	scanf("%d",&n);
	s=luythua(n);
	printf("KQ 1^2+2^2+....n^2= %d",s);
	getch();
	return 0;
}

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int tinh12(int n){
	int s=0;
	if(n<=0){
		printf("nhap n>0 ");
		exit(0);
	}
	else{
	
	int tam=0;
	for(int i=1;i<=n;i++){
		tam=tam+i;
		s=s+tam;
		
	}
	return s;
}
}

int main(){
	int n,s;
	printf("nhap n= ");
	scanf("%d",&n);
	s=tinh12(n);
	printf("KQ 1 + (1+2) + 1+2+3 +....1+2+3+..+n=  %d",s);
	
	getch();
	return 0;
}

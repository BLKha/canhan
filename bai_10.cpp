#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int tinh10(int n){
	int s=0;
	int tam=1;
	for(int i=1;i<=n;i++){
		tam=tam*i;
		s=s+tam;
		
	}
	return s;
}

int main(){
	int n,s;
	printf("nhap n= ");
	scanf("%d",&n);
	s=tinh10(n);
	printf("KQ 1 + 1.2 + 1.2.3 +....1.2.3...n=  %d",s);
	
	getch();
	return 0;
}

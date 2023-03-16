#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int tinhcau9(int n){
	int s1=0;
	if(n<=0){
		printf("n phai lon hon 0");
		exit(0);
}
	else{
	
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
}
int main(){
	int n,s;
	printf("nhap n= ");
	scanf("%d",&n);
	s=tinhcau9(n);
	printf("KQ 1-2+3-4...+(-1)^n-1=  %d",s);
	
	getch();
	return 0;
}

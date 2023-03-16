#include <stdio.h>
#include <conio.h>
int tinhtich(int n){
	int s=1;
	for(int i=0;i<=n;i++){
		s=s*(2*i+1);
}
	return s;
}
int main(){
	int n,tich;
	printf("Nhap n= ");
	scanf("%d",&n);
	tich=tinhtich(n);
	printf("KQ 1.2.3...(2n+1)=  %d",tich);
	getch();
	return 0;
}

#include <stdio.h>
#include <conio.h>

int main(){
	int n,tam,max;
	printf("nhap n= ");
	scanf("%d",&n);
	while(n>0){
		tam= n % 10;
		if (tam > max)
			max = tam;
			n=n/10;
}
			
	printf("chu so lon nhat: %d",max);
	getch();
	return 0;
}

#include <stdio.h>
int main(){
	int n,i;
	
	int tong = 0;
	printf("nhap n = ");
	scanf("%d",&n);
	
	while (i<=n){
	
		tong = tong +i;
		i++;
	}
			printf("tong la: %d",tong);
	return 0;
}

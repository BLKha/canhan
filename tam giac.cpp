#include <stdio.h>
#include <conio.h>

int main(){
	int n ;
	printf("nhap chieu cao tam giac: ");scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			printf(" ");
		}
		for(int j=n-i;j<n;j++){
			printf("$ ");
		}
		printf("\n");
	}
	return 0;
}

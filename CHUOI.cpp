#include <stdio.h>
#include <conio.h>
#include <string.h>
int nhap(char *n){
	printf("nhap chuoi ban muon: ");gets(n);
}
int xuat(char *n){
	printf("chuoi vua nhap la: ");puts(n);
}
int dem(char *n){
	printf("chuoi co so ki tu= %d",strlen(n));
	return 0;
}
int khoangtrang(char *n){
	int c=0;
	printf("\nso khoang trang co trong chuoi la: ");
	for(int i=0;i<strlen(n);i++){
	
	if(n[i]==' ')
	c++;
	}
	
	printf("%d",c);
}
int chuhoa(char *n){
	strupr(n);
	printf("\nchuoi thanh chu hoa: %s",strupr(n));
	return 1;
}
int chuth(char *n){
	printf("\nchuoi thanh chu thuong: %s",strlwr(n));
	return 1;
}
int dao(char *n){
	printf("\nDAO CHUOI: ");
	for(int i=strlen(n);i>=0;i--){
		printf("%c",n[i]);
	}
}
int doixung(char *n){
	for(int i=0;i<=strlen(n)/2;i++){
		if(n[i]!=n[strlen(n)-1-i]){
			printf("\nchuoi khong doi xung");
		return 1;
		}
			}
		printf("\nchuoi doi xung");
		return 1;
}
int timkiem(char *n){
	char a;
	int d=0;
	printf("\nnhap ki tu can tim: ");scanf("%c",&a);
	for(int i=0;i<strlen(n);i++){
		if(n[i]==a){
		d++;	
		}
	}
	if(d>0){
		printf("\n ki tu %c xuat hien %d lan ",a,d);
	}
	else{
		printf("\n ki tu %c khong co trong chuoi ",a);
	}
}


int main(){
	char a[20];
	char n[50];
	nhap(n);
	xuat(n);
	dem(n);
	khoangtrang(n);
	chuhoa(n);
	chuth(n);
	dao(n);
	doixung(n);
	timkiem(n);
	getch();
	return 0;
}

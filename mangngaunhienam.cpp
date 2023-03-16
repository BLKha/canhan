#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int mangngaunhienam(int mang[], int &n){
	printf ("NHAP VAO SO PT CUA MANG: ");
	scanf("%d",&n);
	
	int ngaunhien;
		srand((int)time(NULL));
		
	for (int i=0;i<n;i++){

	ngaunhien=0-rand();
		printf("pt[%d]cua mang= %d\n",i,ngaunhien);		
}
		return 0;}

int main(){
	int mang[MAX],n;
	
		mangngaunhienam(mang,n);
		
	getch();
	return 0;
}

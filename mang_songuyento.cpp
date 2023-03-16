#include <stdio.h>
#include <conio.h>
#define MAX 1000

int nhapmang(int mang[], int &n){
	printf("nhap vao so pt cua mang= ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("pt[%d]= ",i);
		scanf("%d",&mang[i]);
	}
	return 0;
}
int kiemtraSNT(int n){
	    if(n<2)
        return 0;
    else{
        for(int i=2;i<n;i++)
            if(n%i==0)
                return 0;
        return 1;
    }
}
int xuatmang(int mang[],int n){
	printf("cac so nguyen to co trong mang la: \n");
	
	for(int i=0;i<n;i++){
		if(kiemtraSNT(mang[i]))
		printf("pt[%d]= %d\n",i,mang[i]);}
	return 0;
		
}

int main(){
	int mang[MAX],n;
	nhapmang(mang,n);
	xuatmang(mang,n);
	getch();
	return 0;
}

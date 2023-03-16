#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 1000
 int nhap(int mang[],int &n){
 	printf("nhap so pt cua mang= ");
 	scanf("%d",&n);
 	
 	for(int i=0;i<n;i++){
 		printf("pt[%d]= ",i);
 		scanf("%d",&mang[i]);
	 }return 0;
 }
 void sochinhphuong(int mang[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1 && mang[i] > 0 && (int)sqrt(mang[i]) * (int)sqrt(mang[i]) == mang[i])
        {
            printf("%d ", mang[i]);
        }
    }
}
 int xuat(int mang[], int n){
 	for(int i=0;i<n;i++){
	 
 	printf("pt[%d]= %d\n",i,mang[i]);}
 return 0;
 }
int main(){
	int mang[MAX],n;
	nhap(mang,n);
	xuat(mang,n);
	printf("so chinh phuong o vi tri le co trong mang la:\n");
	sochinhphuong(mang,n);
	getch();
	return 0;
}

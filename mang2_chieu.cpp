	#include <stdio.h>
	#include <conio.h>
	#define MAX 100
	typedef int MANG2D[MAX][MAX];
	
	 int nhapmang(MANG2D mang2d, int &d,int &c){
	 	printf("nhap so dong cua mang: ");
	 	scanf("%d",&d);
	 	printf("nhap so cot cua mang: ");
	 	scanf("%d",&c);
	 	
	 	for(int i=0;i<d;i++){
			   for(int j=0;j<c;j++){
			   
			   printf("nhap gia tri cua MANG[%d][%d]= ",i,j);
			   scanf("%d",&mang2d[i][j]);
			}
	 }
	 return 0;
		}
	 
	int xuatmang(MANG2D mang2d,int d,int c){
					
					for(int i=0;i<d;i++){
						for(int j=0;j<c;j++){
	
					printf("MANG2D [%d][%d]= %d\n",i,j,mang2d[i][j]);
					}
				}
				return 0;
	} 
	
 int main(){
 	int mang2d[MAX][MAX];
 	int d,c;
 	nhapmang(mang2d,d,c);
 	xuatmang(mang2d,d,c);
 	getch();
 	return 0;
	}

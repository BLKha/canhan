// dien tich= ((day1+day2)/2)*chieucao
// chu vi= tong 4 canh
#include <stdio.h>
int main(){	
		printf("                              HINH THANG  \n \a");		
	int canhday1,canhday2,canh1,canh2,chieucao;
// nhap các canh cua hình thang
		printf(" nhap canh day 1: ");
		scanf("%d",&canhday1);
		printf("nhap canh day 2: ");
		scanf("%d",&canhday2);
		printf("nhap canh ben 1: ");
		scanf("%d",&canh1);
		printf("nhap canh ben 2: ");
		scanf("%d",&canh2);
		printf("nhap chieu cao: ");
		scanf("%d",&chieucao);
	
// tinh toan
	
	float dientich;
	int chuvi;
	
	dientich = (float) (((canhday1+canhday2)/2)*chieucao);
	chuvi = canhday1+canhday2+canh1+canh2;
// in ra ket qua
		
		printf("dien tich hinh thang: %f, chu vi hinh thang: %d",dientich,chuvi);
	getch();
	return 0;
}

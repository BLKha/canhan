#include <stdio.h>
int main(){
	// nh�p v�o
	int chieudai=0;
	int chieurong=0;
		printf("nhap chieu dai: ");
		scanf("%d",&chieudai);
		printf("nhap chieu rong: ");
		scanf("%d",&chieurong);
		
// t�nh to�n 
	
	int chuvi=0;
	int dientich=0;
	
	chuvi= (chieudai+chieurong)*2;
	dientich= chieudai*chieurong ;
	
// in ra m�n h�nh

			printf("chu vi hcn la: %d, dien tich hcn la: %d\n",chuvi,dientich);
		getch();
		return 0;
		
	
}

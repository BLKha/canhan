#include <stdio.h>
int main(){
	// nhâp vào
	int chieudai=0;
	int chieurong=0;
		printf("nhap chieu dai: ");
		scanf("%d",&chieudai);
		printf("nhap chieu rong: ");
		scanf("%d",&chieurong);
		
// tính toán 
	
	int chuvi=0;
	int dientich=0;
	
	chuvi= (chieudai+chieurong)*2;
	dientich= chieudai*chieurong ;
	
// in ra màn hình

			printf("chu vi hcn la: %d, dien tich hcn la: %d\n",chuvi,dientich);
		getch();
		return 0;
		
	
}

// chuvi= 2R.3.14
// dientich= R^2.3,14
#include <stdio.h>
int main(){
	//nhap vao
	int bankinh;
		printf("nhap ban kinh hinh tron can tinh: ");
		scanf("%d",&bankinh);
// t�nh to�n
	 
	 float chuvi;
	 float dientich;
	 
	 chuvi = (float)(2*bankinh)*3.14;
	 dientich =(float) (bankinh*bankinh)*3.14;
// in ra m�n h�nh 
		printf("chu vi hinh tron l�: %f, dien tich hinh tron l�: %f\n",chuvi,dientich);
		
		getch ();
		return 0;
		
}

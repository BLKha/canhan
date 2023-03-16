// chuvi= 2R.3.14
// dientich= R^2.3,14
#include <stdio.h>
int main(){
	//nhap vao
	int bankinh;
		printf("nhap ban kinh hinh tron can tinh: ");
		scanf("%d",&bankinh);
// tính toán
	 
	 float chuvi;
	 float dientich;
	 
	 chuvi = (float)(2*bankinh)*3.14;
	 dientich =(float) (bankinh*bankinh)*3.14;
// in ra màn hình 
		printf("chu vi hinh tron là: %f, dien tich hinh tron là: %f\n",chuvi,dientich);
		
		getch ();
		return 0;
		
}

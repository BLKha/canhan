#include <stdio.h>
#include <limits.h>
#include <conio.h>
#include <math.h>
int main(){
// nhap vao doanh so
	int ds=0;
	float h1,h2,h3 = 0;
	printf("nhap doanh so: ");
	scanf("%d",&ds);

// xuat ra
	if	(ds<=100000000)
	{
		h1 =(float) ds*0.05;
		printf("Tien hoa hong la: %f",h1);	
	}
	else if (ds<=300000000)
	{
		h2 = (float)ds*0.1;
		printf("tien hoa hong la: %f",h2);
	}
	else{
		h3 =(float) ds*0.2;
		printf("Tien hoa hong nhan duoc la: %f",h3);
	}
	
		getch ();
		return 0;
	
	
}

#include <stdio.h>
#include <conio.h>
#include <limits.h>
int main(){
	int stn = 0,sth = 0;
	printf("Nhap so dau tien:  ");
	scanf("%d",&stn);
	printf("Nhap so thu hai:  ");
	scanf("%d",&sth);
	
	int n = 0;
	printf("1. de cong \n2. de tru \n3. de nhan \n4. de chia \n MOI BAN NHAP SO ");
	
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			{
				int tong = 0;
				tong = stn + sth;
				printf("ket qua phep cong : %d",tong);
				break;
			}
		case 2:
			{
				int hieu = 0;
				hieu = stn-sth;
				printf("ket qua phep tru la: %d",hieu);
				break;
		}
		case 3:
			{
				int tich = 0;
				tich = stn*sth;
				printf("ket qua phep nhan la:  %d",tich);
				break;
			}
		default :
			{
				float thuong = 0;
				if (sth==0)
				{
					printf("So chia phai lon hon 0");
				}
				else
				{
				thuong=(float) stn/sth;
				printf("ket qua phep chia la:  %f",thuong);
			}
			break;
			}
	}
	return 0;
}

#include <stdio.h>
#include <conio.h>
int main(){
	int thang;
	printf("nhap thang trong nam: ");
	scanf("%d",&thang);
	switch (thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
				printf("Thang %d co 31 ngay",thang);
				break;
		case 4:
		case 6:
		case 9:
		case 11:
				printf("thang %d co 30 ngay ",thang);
				break;
		case 2:
			{
			int nam=0;
			printf("nhap nam ");
			scanf("%d",&nam);
			if (nam%4==0)
			printf("thang 2 co 29 ngay");
			
			else {
				printf("thang 2 co 28 ngay");
			}
			break;}
		default :
				printf("khong co thang %d",thang);
		
	}
	return 0;
}

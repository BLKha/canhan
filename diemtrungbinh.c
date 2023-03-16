#include <stdio.h>
int main(){
	float dktr,dth,tgk;
	printf("Nhap diem kiem tra: ");
	scanf("%f",&dktr);
	printf("Nhap diem thi: ");
	scanf("%f",&dth);
	printf("Nhap diem thi giua ky: ");
	scanf("%f",&tgk);

	float n;
	n=(dktr+dth+tgk)/3;
	if (n<5.0)
	{
		printf("Hang F");
	}
	else if (5.0<=n<7.0)
		{
			printf("Hang C");
		}
	else if (7.0<=n<9.0)
	{
			printf("hang B");
	}
	else if(n>=9)
	{
		printf("Hang A");
	}
	else {
		printf("khong hop le");
	}
	getch();
	return 0;
}

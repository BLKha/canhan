#include <stdio.h>
int main(){
	int n;
	printf("nhap nam can xem:  ");
	scanf("%d",&n);
	if (n%4==0)
	{
		printf("thang Hai co 29 ngay");
	}
	else {
		printf("thang Hai co 28 ngay");
	}
	getch();
	return 0 ;
}

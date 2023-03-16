#include <stdio.h>
int tinhchuvi(int cd,int cr)
{
	int cv= (cd+cr)*2;
	return cv;
}
int tinhdientich(int cd, int cr){
	int dt=cd*cr;
	return dt;}
	
	
int main(){
	int cd=0;
	int cr=0;
		printf("nhap chieu dai= ");
		scanf("%d",&cd);
		printf("nhap chieu rong= ");
		scanf("%d",&cr);
	
	int cv=0;
	int dt=0;
	
	cv=tinhchuvi(cd,cr);
	dt=tinhdientich(cd,cr);
	
	printf("chu vi HCN =  %d",cv);
	printf("\ndien tich hinh chu nhat = %d",dt);
	
	
	return 0;
}


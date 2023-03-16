#include <stdio.h>
#include <conio.h>
#include <math.h>

int IsSoChinhPhuong(int n);
int IsSoNguyenTo(int n);
int IsSoHoanThien(int n);

int main()
{
 	int n = 25;
 	printf("So nguyen to: %d\n", IsSoNguyenTo(n));
 	printf("So hoan thien: %d\n", IsSoHoanThien(n));
 	printf("So chinh phuong: %d\n", IsSoChinhPhuong(n));
 	
}

int IsSoChinhPhuong(int n)
{
	int sqr=sqrt(n);
	if (sqr*sqr==n){
		return 1;
	}
	else{
		return 0;
	}
	return 1;
}

int IsSoHoanThien(int n)
{
	int sum =0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==n){
	return 1;
	}
	else {
		return 0;
	}
}

int IsSoNguyenTo(int n)
{
	if(n<2){
		return 0;
	}
	else	if(n==2){
		return 1;
	}
	else if(n%2==0){
		return 0;
	}
	else{
		int limit = sqrt(n);
		for(int i=3;i<limit;i+=2){
			if (n%i ==0){
				return 0;
			}
		}
	}
	return 1;
}



#include <stdio.h>
int main(){
	int n,i;
	int s=0;
	int s1=0;
	int s2=0;
	int s3=0;
	float s4=0;//s1,s2,s3,s4;
		printf("Nhap n =  ");
		scanf("%d",&n);
	
	{
	for (i =1 ;i <= n; i++)
	
		s=s+i;
			printf("tong cua s=1+2...%d là  %d \n",n,s);
};
	{ for (i=1;i<=2*n-1;i+=2)
		
	 	s1=s1+i;
	 		printf("tong cua S=1+3...%d la %d\n",2*n-1,s1);
	}
	{
		for (i=2;i<=2*n;i+=2)
		s2=s2+i;
		printf("tong cua S=2+4...%d la %d\n",2*n,s2);
	}
	{	
		for (i=12;i<=n*2;i+=10)
		s3=s3+i;
		printf("tong cua s3 = %d\n",s3);
		
	}
	{
		for(i=1;i<=n;i++)
		s4 = s4 + 1.0 / i;
		printf("tong cua 1+1/2+...1/%d la %.2f",n,s4);
	}
	
	return 0;
}

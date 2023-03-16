#include <stdio.h>
int main(){
	int n;
		printf("nhap so phan tu cua mang: ");
		scanf("%d",&n);
	int i=0;
	int arr[n];
	for (i=0;i<n;i++)
	{
		printf("mhap pt[%d] cua mang: \n",i);	
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++){
		printf("pt[%d] cua mang la: %d\n",i,arr[i]);}	
	
	int sum=0;
	for (i=0;i<n;i++)
		sum=sum+arr[i];	
		printf("tong cua mang la: %d",sum);
	getch();
	return 0;	
}

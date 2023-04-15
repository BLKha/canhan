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
	printf ("xuat mang:\n");
	for (i=0;i<n;i++){
		printf("  %5d",arr[i]);}
			
	// tông cac phan tu cua mang
	
	int sum=0;
	for (i=0;i<n;i++)
		sum=sum+arr[i];	
		printf("\ntong cua mang la: %d",sum);
		
		// tìm sô lon nhat trong mang
		
	int max;
	for(i=0;i<n;i++)
	if(arr[i]>max)
	max=arr[i];
	printf("\ngia tri lon nhat= %d",max);
	
	//tim so nho nhat trong mang
	
	int min=arr[0];
	for(i=0;i<n;i++){
	if(arr[i]<min)
	min=arr[i];}
	printf("\ngia tri nho nhat= %d",min);
	
	// sap xep mang tang dan 
	
	int tang,j;
	for(i=0;i<n;i++){
		for(j=i+i;j<n;j++){
			if(arr[i]>arr[j]){
			
			tang=arr[i];
			arr[i]=arr[j];
			arr[j]=tang;
		}
	}
	}
	printf("\nsap xep mang tang : ");
	for(i=0;i<n;i++){
		printf("%3d",arr[i]);
	}
	
	//sap xep mang giam dan
	
	int giam;
	for(i=0;i<n;i++){
		for(j=i+i;j<n;j++){
			if(arr[i]<arr[j]){
			
			giam=arr[i];
			arr[i]=arr[j];
			arr[j]=giam;
		}
	}
	}
	printf("\nsap xep mang giam : ");
	for(i=0;i<n;i++){
		printf("%3d",arr[i]);
	}
	
	getch();
	return 0;	
}
